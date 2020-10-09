#ifndef EEPROM_API_H_
#define EEPROM_API_H_

#include "eeprom.h"

typedef struct Eeprom
{
	uint32_t password;
	uint32_t language;
	uint32_t commaddress;
	uint32_t baudrate;
} Eeprom_t;

#define OFFSET_OF(type, member) (uint32_t)(&(((type *)0)->member))
#define MEM_EEP_ADDR(member) (uint32_t)(EEPROM_ADDR+OFFSET_OF(Eeprom_t, member))
#define MEM_SIZE (uint32_t)1

extern void Eeprom_Write(uint32_t addr, uint32_t *value,uint32_t size);
extern void Eeprom_Read(uint32_t addr, uint32_t *value,uint32_t size);

#endif /* EEPROM_API_H_ */
