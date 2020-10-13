#include "eeprom.h"

void Eeprom_Erase(uint32_t addr)
{
	FLASH_Erase(addr);
}

void Eeprom_Write(uint32_t addr, uint32_t *value,uint32_t size)
{
	FLASH_Write(addr, value, size);

	printf("%s:addr[0x%X],value[0x%X], size[%d]\n", __FUNCTION__, addr, *value, size);
}

void Eeprom_Read(uint32_t addr, uint32_t *value,uint32_t size)
{
	FLASH_Read(addr, value, size);

	printf("%s:addr[0x%X],value[0x%X], size[%d]\n", __FUNCTION__, addr, *value, size);
}

