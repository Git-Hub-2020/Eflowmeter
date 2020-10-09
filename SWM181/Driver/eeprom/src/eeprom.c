#include "eeprom.h"

uint32_t Buf_32bit = 0;

void Eeprom_Write(uint32_t addr, uint32_t *value,uint32_t size)
{
	Buf_32bit = *value;
	FLASH_Write(addr, &Buf_32bit, size);

	printf("%s:addr[0x%X],value[0x%X], size[%d]\n", __FUNCTION__, addr, Buf_32bit, size);
}

void Eeprom_Read(uint32_t addr, uint32_t *value,uint32_t size)
{
	FLASH_Read(addr, value, size);

	printf("%s:addr[0x%X],value[0x%X], size[%d]\n", __FUNCTION__, addr, *value, size);
}

void Eeprom_Read_Test(void)
{
	static uint32_t Test_RdBuff[64] = {0};
	uint8_t i;

	FLASH_Read(EEPROM_ADDR, Test_RdBuff, 64); //FLASH 每次读写4字节（最小操作单元）
	printf("Flash Test[0x%X]: \n", EEPROM_ADDR);
	for(i = 0; i < 64; i++) printf("0x%X, ", Test_RdBuff[i]);
}
