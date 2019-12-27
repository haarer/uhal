import os,string

#to do : specify subset of port bits, but depends on package
avr168portset=['B','C','D']
avr2560portset=['A','B','C','D','E','F','G','H','J','K','L']
cpupins={
    "__AVR_ATmega168__":avr168portset,
    "__AVR_ATmega168P__":avr168portset,
    "__AVR_ATmega328P__":avr168portset,
    "__AVR_ATmega2560__":avr2560portset,
    "__AVR_ATmega1280__":avr2560portset}

def printPinFunc(f,port,bit):
    f.write("template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_P%s%s>::modeOut(void)    	 	{HAL_AVR_DIR_PIN_OUT(		%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_P%s%s>::modeIn(void)    	     	{HAL_AVR_DIR_PIN_IN(		%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_P%s%s>::modeInPullup(void)    	{HAL_AVR_DIR_PIN_IN_PULLUP(	%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_P%s%s>::writeHigh(void)    	 	{HAL_AVR_SET_PIN_HIGH(		%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> inline const void ::UHAL::GenericPin< avr_pin_type::PIN_P%s%s>::writeLow(void)    	 	{HAL_AVR_SET_PIN_LOW(		%s,%s)}\n" % (port,bit,port,bit))
    f.write("template<> inline bool ::UHAL::GenericPin< avr_pin_type::PIN_P%s%s>::readState(void)    	 	{HAL_AVR_READ_PIN(		    %s,%s)}\n" % (port,bit,port,bit))

def printCPUPortset(f,cpuset):
    for p in cpuset:
        for bit in range(8):
            printPinFunc(f,p,bit)


f=file("avr_pinfuncs.h",'w')

f.write("#ifndef _AVR_PINFUNC_H\n")
f.write("#define _AVR_PINFUNC_H\n")

for cp in cpupins.keys():
    f.write("#if defined(%s)\n" % (cp))
    printCPUPortset(f,cpupins[cp])
    f.write("#endif\n")

#for p in ['A','B','C','D','E','F','G','H','J','K','L']:
#    for bit in range(8):
#        printPinFunc(f,p,bit)

f.write("#endif //define _AVR_PINFUNC_H\n")

f.close()

#f=file("avr_portpins.h",'w')
#for p in ['A','B','C','D','E','F','G','H','J','K','L']:
#    for bit in range(8):
#        f.write("GenericPin<avr_pin_type::PIN_P%s%s> p%s%s;\n" % (p,bit,string.lower(p),bit))
#f.close()



