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
	Lcd_Set_Commaddr(lcd_Commaddr.data, numof(lcd_Commaddr.data));
	Lcd_Set_Baudrate(&lcd_baudrate);
	Lcd_Set_Snsrsize(lcd_snsrsize.data, numof(lcd_snsrsize.data));
	Lcd_Set_Flowunit(&lcd_flowunit);
	Lcd_Set_Flowrange(lcd_flowrange.data, numof(lcd_flowrange.data));
	Lcd_Set_Damp(lcd_damp.data, numof(lcd_damp.data));
	Lcd_Set_Flowdirect(&lcd_flowdirect);
}

void Lcd_EEPGet_All(void)
{
	Lcd_Get_Password(PWInfo.pw, numof(PWInfo.pw));
	Lcd_Get_Language(&lcd_Language);
	Lcd_Get_Commaddr(lcd_Commaddr.data, numof(lcd_Commaddr.data));
	Lcd_Get_Baudrate(&lcd_baudrate);
	Lcd_Get_Snsrsize(lcd_snsrsize.data, numof(lcd_snsrsize.data));
	Lcd_Get_Flowunit(&lcd_flowunit);
	Lcd_Get_Flowrange(lcd_flowrange.data, numof(lcd_flowrange.data));
	Lcd_Get_Damp(lcd_damp.data, numof(lcd_damp.data));
	Lcd_Get_Flowdirect(&lcd_flowdirect);
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
	unsigned long long value;

	Eeprom_Read(MEM_EEP_ADDR(commaddress), &eep_buff, MEM_SIZE);
	Lcd_EEPConvert_Get(data, &eep_buff, data_num);

	//地址为无效值时默认01
	Lcd_StrToNum_Convert(data, &value, data_num);
	if((1 > value) || (99 < value)){
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

void Lcd_Set_Snsrsize(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;

	Lcd_EEPConvert_Set(&eep_buff, data, data_num);
	Eeprom_Write(MEM_EEP_ADDR(snsrsize), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Snsrsize(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;
	unsigned long long value;

	Eeprom_Read(MEM_EEP_ADDR(snsrsize), &eep_buff, MEM_SIZE);
	Lcd_EEPConvert_Get(data, &eep_buff, data_num);

	//管道口径为无效值时默认0003
	Lcd_StrToNum_Convert(data, &value, data_num);
	if((3 > value) || (3000 < value)){
		data[0] = 0;
		data[1] = 0;
		data[2] = 0;
		data[3] = 3;
		printf("Error:Snsr Size will be set to 0003 by default.\n");
	}
}

void Lcd_Set_Flowunit(uint8_t *data)
{
	uint32_t eep_buff = *data;

	Eeprom_Write(MEM_EEP_ADDR(flowunit), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Flowunit(uint8_t *data)
{
	uint32_t eep_buff = 0;

	Eeprom_Read(MEM_EEP_ADDR(flowunit), &eep_buff, MEM_SIZE);
	*data = (uint8_t)eep_buff;

	//流量单位为无效值时默认L/s
	if(UNIT_MAX <= *data){
		*data = UNIT_LS;
		printf("Error:Flow Unit will be set to L/s by default.\n");
	}
}

void Lcd_Set_Flowrange(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;

	Lcd_EEPConvert_Set(&eep_buff, data, data_num);
	Eeprom_Write(MEM_EEP_ADDR(flowrange), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Flowrange(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;
	unsigned long long value;

	Eeprom_Read(MEM_EEP_ADDR(flowrange), &eep_buff, MEM_SIZE);
	Lcd_EEPConvert_Get(data, &eep_buff, data_num);

	//仪表量程设置为无效值时默认00000
	Lcd_StrToNum_Convert(data, &value, data_num);
	if(99999 < value){
		data[0] = 0;
		data[1] = 0;
		data[2] = 0;
		data[3] = 0;
		data[4] = 0;
		printf("Error:Flow Range will be set to 00000 by default.\n");
	}
}

void Lcd_Set_Damp(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;

	Lcd_EEPConvert_Set(&eep_buff, data, data_num);
	Eeprom_Write(MEM_EEP_ADDR(damp), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Damp(uint8_t *data, uint8_t data_num)
{
	uint32_t eep_buff = 0;
	unsigned long long value;

	Eeprom_Read(MEM_EEP_ADDR(damp), &eep_buff, MEM_SIZE);
	Lcd_EEPConvert_Get(data, &eep_buff, data_num);

	//测量阻尼时间为无效值时默认01
	Lcd_StrToNum_Convert(data, &value, data_num);
	if((1 > value) || (64 < value)){
		data[0] = 0;
		data[1] = 1;
		printf("Error:Damp will be set to 01 by default.\n");
	}
}

void Lcd_Set_Flowdirect(uint8_t *data)
{
	uint32_t eep_buff = *data;

	Eeprom_Write(MEM_EEP_ADDR(flowdirect), &eep_buff, MEM_SIZE);
}

void Lcd_Get_Flowdirect(uint8_t *data)
{
	uint32_t eep_buff = 0;

	Eeprom_Read(MEM_EEP_ADDR(flowdirect), &eep_buff, MEM_SIZE);
	*data = (uint8_t)eep_buff;

	//流量方向择项为无效值时默认正向
	if(DIR_MAX <= *data){
		*data = DIR_FORWARD;
		printf("Error:Flow Direct will be set to Forward by default.\n");
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

void Lcd_StrToNum_Convert(uint8_t *str, unsigned long long *num, uint8_t str_size)
{
	uint8_t i = 0;

	for(i = 0; i < str_size; i++){
		*num += str[i];
		if(i < str_size - 1) *num *= 10;
	}
}

