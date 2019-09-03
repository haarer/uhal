/*
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
 *
 
includes oversampling and decimation filter
increase of n bit resolution by
foversample = 4^n * fnyquist
divider = 2 ^ n

1 bit -> 4 times oversample, divide by 2
2 bit -> 16 times oversample, divide by 4
3 bit -> 64 times oversample, divide by 8

*/
#ifndef ADC_H_
#define ADC_H_

extern "C" {
	#include <avr/io.h>
}

enum ADCRefSel { ADC_REF_EXT=0, ADC_REF_VCC=1, ADC_REF_INT=3};




class ADConverter
{
	private:

	ADCRefSel ref;

	public:
	ADConverter(ADCRefSel ref_sel):ref(ref_sel)
	{

		#if (defined __AVR_ATmega168__) || defined( __AVR_ATmega168PA__) || defined( __AVR_ATmega168A__) ||\
		  defined(__AVR_ATmega328P__) || defined(__AVR_ATmega328__)
		//ext ref
		if(ref_sel==ADC_REF_INT)
		ADMUX =  (1<<REFS0) | (1<<REFS1); //1.1 reference, channel 0
		if(ref_sel==ADC_REF_VCC)
		ADMUX =  (1<<REFS0) ; //AVCC reference, channel 0
		

		// power on, start first conversion, single shot, no interrupt, prescaler = 64
		ADCSRA = (1<<ADEN) | (1<<ADSC)  |(1<<ADPS2) | (1<<ADPS1)| (1<<ADPS0);

		#else
		#error " ! UNSUPPORTED CPU !"
		#endif

	}

	// 10 bit value
	uint16_t AD_Read(uint8_t ch)
	{
		uint16_t advalue;
		
		#if (defined __AVR_ATmega168__) || defined( __AVR_ATmega168PA__) || defined( __AVR_ATmega168A__) ||\
		  defined(__AVR_ATmega328P__) || defined(__AVR_ATmega328__)
		//ext ref

		if(ref==ADC_REF_INT)
			ADMUX =  (1<<REFS0) | (1<<REFS1)|( ch & 0x0f); //1.1 reference, channel 0
		if(ref==ADC_REF_VCC)
			ADMUX =  (1<<REFS0)             |( ch & 0x0f); //AVCC reference, channel 0
		if(ref==ADC_REF_EXT)
			ADMUX =                          ( ch & 0x0f); //AVCC reference, channel 0

		ADCSRA |=  (1<<ADSC);				//start conversion
		while( ADCSRA &  (1<<ADSC) );	// wait until conversion complete
		advalue = ADCL;
		advalue +=(ADCH << 8) ;
		return advalue;

		#else

		#error " ! UNSUPPORTED CPU !"

		#endif
	}


};


template<int FILTERLENGTH=64,int DIVIDER=8>
class ADCFilter
{
	
	uint16_t filter[FILTERLENGTH];
	uint8_t filterindex;

	
	public:
	ADCFilter(void):filterindex(0){};
		
	uint16_t AD_ReadFiltered(uint8_t fi,uint8_t ch, ADConverter *adc)
	// oversampling decimation filter, adding one bit per 4 filter cells
	// fi selects filter, ch selects ad channel
	{
		uint8_t i;
		uint32_t value=0;
		if (filterindex >=FILTERLENGTH)
			filterindex =0;

		filter[filterindex]=adc->AD_Read(ch);

		filterindex++;
		
		// tbd: incremental filter ( remove last part, add new part)
		for (i=0;i<FILTERLENGTH;i++)
		{
			value = value + filter[i];
		}
		value = value / (uint32_t)(DIVIDER);
		return (uint16_t)value;
	}


	
	};
#endif /* ADC_H_ */
