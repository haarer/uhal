#ifndef _AVR_PINFUNC_H
#define _AVR_PINFUNC_H
#if defined(__AVR_ATmega168__)
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,7)}
#endif
#if defined(__AVR_ATmega168P__)
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,7)}
#endif
#if defined(__AVR_ATmega328P__)
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,7)}
#endif
#if defined(__AVR_ATmega2560__)
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,7)}
#endif
#if defined(__AVR_ATmega1280__)
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		C,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PC7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    C,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		D,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PD7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    D,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		E,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PE7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    E,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		F,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PF7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    F,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		G,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PG7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    G,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		H,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PH7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    H,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		J,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PJ7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    J,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		K,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PK7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    K,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		L,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		L,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	L,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		L,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		L,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PL7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    L,7)}
#endif
#if defined(__AVR_ATtiny1614__)
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		A,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PA7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    A,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,0)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB0>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,0)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,1)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB1>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,1)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,2)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB2>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,2)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,3)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB3>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,3)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,4)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB4>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,4)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,5)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB5>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,5)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,6)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB6>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,6)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		B,7)}
template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		B,7)}
template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_PB7>::readState(void)    	 	{HAL_AVR_READ_PIN(		    B,7)}
#endif
#endif //define _AVR_PINFUNC_H
