#ifndef STM32_PIN_H_
#define STM32_PIN_H_

// ---------------------------------- STM32 specific
// ------------------------------------------
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/rcc.h>

namespace UHAL {

typedef enum {
  PIN_PA0,
  PIN_PA1,
  PIN_PA2,
  PIN_PA3,
  PIN_PA4,
  PIN_PA5,
  PIN_PA6,
  PIN_PA7,
  PIN_PA8,
  PIN_PA9,
  PIN_PA10,
  PIN_PA11,
  PIN_PA12,
  PIN_PA13,
  PIN_PA14,
  PIN_PA15,
  PIN_PB0,
  PIN_PB1,
  PIN_PB2,
  PIN_PB3,
  PIN_PB4,
  PIN_PB5,
  PIN_PB6,
  PIN_PB7,
  PIN_PB8,
  PIN_PB9,
  PIN_PB10,
  PIN_PB11,
  PIN_PB12,
  PIN_PB13,
  PIN_PB14,
  PIN_PB15,
  PIN_PC13,
  PIN_PC14,
  PIN_PC15,
  PIN_PD0,
  PIN_PD1
} stm32_pin_type;

// #include "stm32_pinfuncs.h"

template <>
inline const void ::UHAL::GenericPin<stm32_pin_type::PIN_PC13>::modeOut(void) {
  // to do : put this into mode function, and have ioclock enable as singleton
  RCC_APB2ENR |= RCC_APB2ENR_IOPCEN;

  GPIOC_CRH = (GPIO_CNF_OUTPUT_PUSHPULL << (((13 - 8) * 4) + 2));
  GPIOC_CRH |= (GPIO_MODE_OUTPUT_2_MHZ << ((13 - 8) * 4));
}
// template<> inline const void ::UHAL::GenericPin<
// stm32_pin_type::PIN_PC13>::modeIn(void)    	     	{} template<> inline
// const void ::UHAL::GenericPin< stm32_pin_type::PIN_PC13>::modeInPullup(void)
// {}

template <>
inline const void ::UHAL::GenericPin<stm32_pin_type::PIN_PC13>::writeHigh(
    void) {
  GPIOC_BSRR = GPIO13;
}
template <>
inline const void ::UHAL::GenericPin<stm32_pin_type::PIN_PC13>::writeLow(void) {
  GPIOC_BRR = GPIO13;
}

// template<> inline bool ::UHAL::GenericPin<
// stm32_pin_type::PIN_PC13>::readState(void)    	 	{return true;}

}  // namespace UHAL
#endif  // STM32_PIN_H_