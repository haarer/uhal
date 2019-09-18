#ifndef CRC_H_
#define CRC_H_




/*
 * The width of the CRC calculation and result.
 * Modify the typedef for a 16 or 32-bit CRC standard.


http://www.barrgroup.com/Embedded-Systems/How-To/CRC-Calculation-C-Code
 */
typedef uint8_t crc;

#define CRC_POLYNOMIAL 0xD8  /* 11011 followed by 0's */
#define CRC_WIDTH  (8 * sizeof(crc))
#define CRC_TOPBIT (1 << (CRC_WIDTH - 1))
class CRC
{
public:
static crc
crcSlow(uint8_t const message[], int nBytes)
{
    crc  remainder = 0;	


    /*
     * Perform modulo-2 division, a byte at a time.
     */
    for (int byte = 0; byte < nBytes; ++byte)
    {
        /*
         * Bring the next byte into the remainder.
         */
        remainder ^= (message[byte] << (CRC_WIDTH - 8));

        /*
         * Perform modulo-2 division, a bit at a time.
         */
        for (uint8_t bit = 8; bit > 0; --bit)
        {
            /*
             * Try to divide the current data bit.
             */
            if (remainder & CRC_TOPBIT)
            {
                remainder = (remainder << 1) ^ CRC_POLYNOMIAL;
            }
            else
            {
                remainder = (remainder << 1);
            }
        }
    }

    /*
     * The final remainder is the CRC result.
     */
    return (remainder);

}   /* crcSlow() */

};

#endif
