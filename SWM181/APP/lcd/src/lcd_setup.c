#include <string.h>
#include "common.h"
#include "eeprom_api.h"
#include "lcd_setup.h"
#include "lcd_menu_type.h"

static void Lcd_EEPConvert_Set(uint32_t *dst, uint8_t *src, uint8_t src_size);
static void Lcd_EEPConvert_Get(uint8_t *dst, uint32_t *src, uint8_t dst_size);

void Lcd_EEPSet_All(void)
{
	//Flash写入前需擦除扇区
	Eeprom_Erase(EEPROM_ADDR);

	Lcd_Set_Password(PWInfo.pw, numof(PWInfo.pw));
	Lcd_Set_Language(&lcd_Language);
	Lcd_Set_Commaddr(lcd_Commaddr.addr, numof(lcd_Commaddr.addr));
	Lcd_Set_Baudrate(&lcd_baudrate);
}

void Lcd_EEPGet_All(void)
{
	Lcd_Get_Language(&lcd_Language);
	Lcd_Get_Commaddr(lcd_Commaddr.addr, numof(lcd_Commaddr.addr));
	Lcd_Get_Baudrate(&lcd_baudrate);
}

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
	uint8_t idx;

	Eeprom_Read(MEM_EEP_ADDR(password), &eep_buff, MEM_SIZE);
	Lcd_EEPConvert_Get(data, &eep_buff, data_num);

	for(idx = 0; idx < data_num; idx++){
		//密码为无效值时返回初始密码(19818)
		if(9 < data[idx]){
			data[0] = 1;
			data[1] = 9;
			data[2] = 8;
			data[3] = 1;
			data[4] = 8;
			printf("Error:Please input the Factory PW,then change the PW you want.\n");
			return;
		}
	}
}

void Lcd_Set_Language(uint8_t *data)
{
	uint32_t eep_buff = *data;

	Eeprom_Write(MEM_EEP_ADDR(language), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Language(uint8_t *data)
{
	uint32_t eep_buff = 0;

	Eeprom_Read(MEM_EEP_ADDR(language), &eep_buff, MEM_SIZE);
	*data = (uint8_t)eep_buff;

	//语言为无效值时默认中文
	if(LANG_MAX <= *data){
		*data = LANG_ZH;
		printf("Error:Language will be set to Chinese by default.\n");
	}
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

	//地址为无效值时默认01
	if((9 < data[0]) || (9 < data[1]) || (1 > data[1])){
		data[0] = 0;
		data[1] = 1;
		printf("Error:Commaddr will be set to 01 by default.\n");
	}
}

void Lcd_Set_Baudrate(uint8_t *data)
{
	uint32_t eep_buff = *data;

	Eeprom_Write(MEM_EEP_ADDR(baudrate), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Baudrate(uint8_t *data)
{
	uint32_t eep_buff = 0;

	Eeprom_Read(MEM_EEP_ADDR(baudrate), &eep_buff, MEM_SIZE);
	*data = (uint8_t)eep_buff;

	//通讯速度为无效值时默认2400
	if(RATE_MAX <= *data){
		*data = RATE_2400;
		printf("Error:Baud Rate will be set to 2400 by default.\n");
	}
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

