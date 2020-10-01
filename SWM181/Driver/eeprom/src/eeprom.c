#include "eeprom.h"

void Eeprom_SetPassword(uint32_t *pw)
{
	FLASH_Write(MEM_EEP_ADDR(password), pw, MEM_SIZE);
}

void Eeprom_GetPassword(uint32_t *pw)
{
	FLASH_Read(MEM_EEP_ADDR(password), pw, MEM_SIZE);
}

void Eeprom_SetLanguage(uint32_t *lang)
{
	FLASH_Write(MEM_EEP_ADDR(language), lang, MEM_SIZE);
}

void Eeprom_GetLanguage(uint32_t *lang)
{
	FLASH_Read(MEM_EEP_ADDR(language), lang, MEM_SIZE);
}
