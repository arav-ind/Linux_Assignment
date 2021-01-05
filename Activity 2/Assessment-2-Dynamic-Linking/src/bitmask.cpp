#include "bitmask.h"

int set(int maskbit, int number)
{
	switch(maskbit)
  {
		case 1:{ uint8_t mask = 0b0000'0001;number |= mask; break;} // represents bit 0
		case 2:{ uint8_t mask = 0b0000'0010; number |= mask;break;} // represents bit 1
		case 3: { uint8_t mask = 0b0000'0100; number |= mask;break;}// represents bit 2 
		case 4: { uint8_t mask = 0b0000'1000; number |= mask;break;}; // represents bit 3
		case 5: { uint8_t mask = 0b0001'0000; number |= mask;break;}; // represents bit 4
		case 6:{ uint8_t mask = 0b0010'0000;number |= mask; break;}; // represents bit 5
		case 7:{ uint8_t mask = 0b0100'0000; number |= mask;break;}; // represents bit 6
		case 8: { uint8_t mask = 0b1000'0000;number |= mask; break;}; // represents bit 7
	}
	return number;
}
int reset(int maskbit, int number)
{
	switch(maskbit)
  {
		case 1:{ uint8_t mask = 0b0000'0001;number &= ~mask; break;} // represents bit 0
		case 2:{ uint8_t mask = 0b0000'0010; number &= ~mask;break;} // represents bit 1
		case 3: { uint8_t mask = 0b0000'0100; number &= ~mask;break;}// represents bit 2 
		case 4: { uint8_t mask = 0b0000'1000; number &= ~mask;break;}; // represents bit 3
		case 5: { uint8_t mask = 0b0001'0000; number &= ~mask;break;}; // represents bit 4
		case 6:{ uint8_t mask = 0b0010'0000;number &= ~mask; break;}; // represents bit 5
		case 7:{ uint8_t mask = 0b0100'0000; number &= ~ mask;break;}; // represents bit 6
		case 8: { uint8_t mask = 0b1000'0000;number &= ~mask; break;}; // represents bit 7
	}
	return number;
}

int flip(int maskbit, int number)
{
	switch(maskbit)
  {
		case 1:{ uint8_t mask = 0b0000'0001;number ^= mask; break;} // represents bit 0
		case 2:{ uint8_t mask = 0b0000'0010; number ^= mask;break;} // represents bit 1
		case 3: { uint8_t mask = 0b0000'0100; number ^= mask;break;}// represents bit 2 
		case 4: { uint8_t mask = 0b0000'1000; number ^= mask;break;}; // represents bit 3
		case 5: { uint8_t mask = 0b0001'0000; number ^= mask;break;}; // represents bit 4
		case 6:{ uint8_t mask = 0b0010'0000;number ^= mask; break;}; // represents bit 5
		case 7:{ uint8_t mask = 0b0100'0000; number ^= mask;break;}; // represents bit 6
		case 8: { uint8_t mask = 0b1000'0000;number ^= mask; break;}; // represents bit 7
	}
	return number;
}
//int query (int);