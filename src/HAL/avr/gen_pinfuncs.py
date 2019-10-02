import os,string


def printPinFunc(f,port,pin):
    f.write("template<> void GenericPin< avr_pin_type::PIN_P%s%s>::modeOut(void)    	const 	{HAL_AVR_DIR_PIN_OUT(		%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> void GenericPin< avr_pin_type::PIN_P%s%s>::modeIn(void)    	    const 	{HAL_AVR_DIR_PIN_IN(		%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> void GenericPin< avr_pin_type::PIN_P%s%s>::modeInPullup(void)   const 	{HAL_AVR_DIR_PIN_IN_PULLUP(	%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> void GenericPin< avr_pin_type::PIN_P%s%s>::writeHigh(void)    	const 	{HAL_AVR_SET_PIN_HIGH(		%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> void GenericPin< avr_pin_type::PIN_P%s%s>::writeLow(void)    	const 	{HAL_AVR_SET_PIN_LOW(		%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> bool GenericPin< avr_pin_type::PIN_P%s%s>::readState(void)    	const 	{HAL_AVR_READ_PIN(		    %s,%s)}\n" % (port,bit,port,bit))


f=file("avr_pinfuncs.h",'w')

f.write("#ifndef _AVR_PINFUNC_H\n")
f.write("#define _AVR_PINFUNC_H\n")
for p in ['A','B','C','D','E','F','G','H','J','K','L']:
    for bit in range(8):
        printPinFunc(f,p,bit)
f.write("#endif //define _AVR_PINFUNC_H\n")

f.close()

f=file("avr_portpins.h",'w')
for p in ['A','B','C','D','E','F','G','H','J','K','L']:
    for bit in range(8):
        f.write("GenericPin<avr_pin_type::PIN_P%s%s> p%s%s;\n" % (p,bit,string.lower(p),bit))
f.close()



