#include "eeprom_api.h"

static void Lcd_EEPConvert_Set(uint32_t *dst, uint8_t *src, uint8_t src_size);
static void Lcd_EEPConvert_Get(uint8_t *dst, uint32_t *src, uint8_t dst_size);

void Lcd_Set_Password(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;

	Lcd_EEPConvert_Set(&eep_buff, data, data_num);
	Eeprom_Write(MEM_EEP_ADDR(password), &eep_buff, MEM_SIZE);

	printf("Set New PW:[%d][%d][%d][%d][%d]\r\n",data[0],data[1],data[2],data[3],data[4]);
}

void Lcd_Get_Password(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;

	Eeprom_Read(MEM_EEP_ADDR(password), &eep_buff, MEM_SIZE);
	Lcd_EEPConvert_Get(data, &eep_buff, data_num);

	printf("Present PW:[%d][%d][%d][%d][%d]\r\n",data[0],data[1],data[2],data[3],data[4]);
}

void Lcd_Set_Language(uint8_t lang)
{
	uint32_t eep_buff = lang;

	Eeprom_Write(MEM_EEP_ADDR(language), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Language(uint8_t *lang)
{
	uint32_t eep_buff = 0;

	Eeprom_Read(MEM_EEP_ADDR(language), &eep_buff, MEM_SIZE);
	*lang = (uint8_t)eep_buff;
}

void Lcd_Set_Commaddr(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;

	Lcd_EEPConvert_Set(&eep_buff, data, data_num);
	Eeprom_Write(MEM_EEP_ADDR(commaddress), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Commaddr(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;

	Eeprom_Read(MEM_EEP_ADDR(commaddress), &eep_buff, MEM_SIZE);
	Lcd_EEPConvert_Get(data, &eep_buff, data_num);
}

static void Lcd_EEPConvert_Set(uint32_t *dst, uint8_t *src, uint8_t src_size)
{
	uint8_t i = 0;

	if(src_size > 8) return;

	for(i = 0; i < src_size; i++){
		*dst  |= (uint32_t)((src[i] & 0x0F) << 4*i);
	}
}

static void Lcd_EEPConvert_Get(uint8_t *dst, uint32_t *src, uint8_t dst_size)
{
	uint8_t i = 0;

	if(dst_size > 8) return;

	for(i = 0; i < dst_size; i++){
		dst[i] = (uint8_t)((*src >> 4*i) & 0x0F);
	}
}

