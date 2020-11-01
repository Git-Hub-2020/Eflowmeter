#include "eeprom.h"
#include "eeprom_api.h"

static int32_t FlashBuffer[EEP_ID_MAX] = {0};

static void Eeprom_Prepare_Value(EepromId_t eep_id, int32_t *value);
static void Eeprom_Write_All(void);

void Eeprom_Init(void)
{
	FLASH_Read(EEPROM_ADDR, (uint32_t*)FlashBuffer, EEP_ID_MAX);
}

void Eeprom_Write_Value(EepromId_t eep_id, int32_t *value)
{
	Eeprom_Prepare_Value(eep_id, value);
	Eeprom_Write_All();
}

void Eeprom_Read_Value(EepromId_t eep_id, int32_t *value)
{
	*value = FlashBuffer[eep_id];
}

static void Eeprom_Prepare_Value(EepromId_t eep_id, int32_t *value)
{
	FlashBuffer[eep_id] = *value;
}

static void Eeprom_Write_All(void)
{
	FLASH_Erase(EEPROM_ADDR);
	FLASH_Write(EEPROM_ADDR, (uint32_t*)FlashBuffer, EEP_ID_MAX);
}
