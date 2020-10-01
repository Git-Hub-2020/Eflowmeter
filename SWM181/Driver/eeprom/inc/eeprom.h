#ifndef EEPROM_H_
#define EEPROM_H_

#include "SWM181.h"

#define OFFSET_OF(type, member) (uint32_t)(&(((type *)0)->member))

#define EEPROM_ADDR	  (uint32_t)0x1A000   //Ð´ÔÚ1A000 (104k)Ö®ºó

typedef struct Eeprom
{
	uint32_t password;
	uint32_t language;
	uint32_t commaddress;
	uint32_t baudrate;
} Eeprom_t;

#define MEM_EEP_ADDR(member) (uint32_t)(EEPROM_ADDR+OFFSET_OF(Eeprom_t, member))
#define MEM_SIZE (uint32_t)1

#endif /* EEPROM_H_ */
