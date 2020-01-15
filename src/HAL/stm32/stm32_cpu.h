#ifndef STM32_CPU_H_
#define STM32_CPU_H_

#ifndef F_CPU
#error "CPU Frequency left undefined. Set F_CPU"
#endif

#ifndef STM32F1
#error "Wrong CPU - Currently supporting only STM32F1"
#endif

#include "../HAL_Pin.h"

#include <libopencm3/stm32/rcc.h>
//#include <libopencm3/stm32/dwt.h>

namespace UHAL {

const uint32_t HSI_Freq = 8000000L;  
typedef enum { STM32F103C8T6} stm_cpu_type;

template <auto cpu, package_type pkg>
struct cpu_pin_list;

template <>
struct cpu_pin_list<STM32F103C8T6, PKG_LQFP48>  // FIXME: this depends on the
                                                // package type, assumed tqfp 32
{
  static GenericPin<stm32_pin_type::PIN_PC13> pc13;
};

/*
#define SET_BIT(REG, BIT) ((REG) |= (BIT))
#define CLEAR_BIT(REG, BIT) ((REG) &= ~(BIT))
#define READ_BIT(REG, BIT) ((REG) & (BIT))
#define CLEAR_REG(REG) ((REG) = (0x0))
#define WRITE_REG(REG, VAL) ((REG) = (VAL))
#define READ_REG(REG) ((REG))
#define MODIFY_REG(REG, CLEARMASK, SETMASK) \
  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
#define POSITION_VAL(VAL) (__CLZ(__RBIT(VAL)))
*/
template <auto cpu, package_type pkg>
struct GenericCPU {
  const uint32_t &HSE_Freq;

 public:
  GenericCPU(const uint32_t &f_ext) : HSE_Freq(f_ext) {}
  void setClock(uint32_t clk) {
    switch (clk) {
      case 72000000L:
        switch (HSE_Freq) {
          case 8000000:
            rcc_clock_setup_in_hse_8mhz_out_72mhz();
            break;
          case 12000000:
            rcc_clock_setup_in_hse_12mhz_out_72mhz();
            break;
          case 16000000:
            rcc_clock_setup_in_hse_16mhz_out_72mhz();
            break;
          case 25000000:
            rcc_clock_setup_in_hse_25mhz_out_72mhz();
            break;
        }
        break;

      default:
        break;
    }

    /*
         // Switch to HSI oscillator
        RCC_CR |= RCC_CR_HSION;
        // wait till active
        while ((RCC_CR & RCC_CR_HSIRDY) == 0);
        // HSI is sysclock source
        RCC_CFGR = (RCC_CFGR & ~RCC_CFGR_SW) | (RCC_CFGR_SW_SYSCLKSEL_HSICLK <<
       RCC_CFGR_SW_SHIFT);

        //  switch HSE osc on
        RCC_CR |= RCC_CR_HSEON;
        // wait till active
        while ((RCC_CR & RCC_CR_HSERDY) == 0);
    */
  }

  inline uint32_t getClock(void) {
    switch ((RCC_CFGR & RCC_CFGR_SWS) >> RCC_CFGR_SWS_SHIFT) {
      case RCC_CFGR_SW_SYSCLKSEL_HSICLK:
        return HSI_Freq;
        break;

      case RCC_CFGR_SW_SYSCLKSEL_HSECLK:
        return HSE_Freq;
        break;

      case RCC_CFGR_SW_SYSCLKSEL_PLLCLK:
          uint32_t clk;
          if (RCC_CFGR & RCC_CFGR_PLLSRC)
            if (RCC_CFGR & RCC_CFGR_PLLXTPRE)
              clk=HSE_Freq /2;
            else
              clk=HSE_Freq;
          else
            clk=HSI_Freq/2;
          uint32_t clkfact = ( (RCC_CFGR & RCC_CFGR_PLLMUL) >> RCC_CFGR_PLLMUL_SHIFT ) + 2;
          if (clkfact >16) clkfact = 16;
          clk = clk *  clkfact;

          return clk;
        break;
    }
    return HSE_Freq;
  }

  // typedef typename cpu_pins<cpu, pkg>::pin_type cpu_pins; //FIXME: this
  // depends on the package type
  static const cpu_pin_list<cpu, pkg> pins;


/* DWT (Data Watchpoint and Trace) registers, only exists on ARM Cortex with a DWT unit */

/*!< DWT Control register */
#define KIN1_DWT_CONTROL             (*((volatile uint32_t*)0xE0001000))

/*!< CYCCNTENA bit in DWT_CONTROL register */
#define KIN1_DWT_CYCCNTENA_BIT       (1UL<<0)

/*!< DWT Cycle Counter register */
#define KIN1_DWT_CYCCNT              (*((volatile uint32_t*)0xE0001004))

/*!< DEMCR: Debug Exception and Monitor Control Register */
#define KIN1_DEMCR                   (*((volatile uint32_t*)0xE000EDFC))

/*!< Trace enable bit in DEMCR register */
#define KIN1_TRCENA_BIT              (1UL<<24)


/*!< TRCENA: Enable trace and debug block DEMCR (Debug Exception and Monitor Control Register */
#define KIN1_InitCycleCounter() \
  KIN1_DEMCR |= KIN1_TRCENA_BIT

/*!< Reset cycle counter */
#define KIN1_ResetCycleCounter() \
  KIN1_DWT_CYCCNT = 0

/*!< Enable cycle counter */
#define KIN1_EnableCycleCounter() \
  KIN1_DWT_CONTROL |= KIN1_DWT_CYCCNTENA_BIT

/*!< Disable cycle counter */
#define KIN1_DisableCycleCounter() \
  KIN1_DWT_CONTROL &= ~KIN1_DWT_CYCCNTENA_BIT

/*!< Read cycle counter register */
#define KIN1_GetCycleCounter() \
  KIN1_DWT_CYCCNT

  inline void delay(double __ms) {
    double __tmp;
    uint16_t __ticks;
    __tmp = ((getClock()) / 12100) * __ms;
    if (__tmp < 1.0)
      __ticks = 1;
    else if (__tmp > 65535) {
      //	__ticks = requested delay in 1/10 ms
      __ticks = (uint16_t)(__ms * 10.0);
      while (__ticks) {
        // wait 1/10 ms
        _delay_loop_2(((getClock()) / 13340) / 10);
        __ticks--;
      }
      return;
    } else
      __ticks = (uint16_t)__tmp;
    _delay_loop_2(__ticks);
  }



uint32_t cycles; /* number of cycles */


inline void delayMicroseconds(double __us) {
  KIN1_InitCycleCounter();
  KIN1_ResetCycleCounter(); /* reset cycle counter */
  KIN1_EnableCycleCounter();

  while (KIN1_GetCycleCounter() < ( getClock() / 989565L * __us ) - 1100 ) {
    __asm__("nop");
  }
  KIN1_DisableCycleCounter();
}

 private:
  void _delay_loop_2(uint16_t f) {
    for (uint16_t i = 0; i < f; ++i) __asm__("nop");
  }

  void _delay_loop_1(uint8_t f) {
    for (uint8_t i = 0; i < f; ++i) __asm__("nop");
  }
};

}  // namespace UHAL
#endif  // avrcpzu