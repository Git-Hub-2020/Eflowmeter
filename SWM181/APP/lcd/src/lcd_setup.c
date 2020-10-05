#include "lcd_setup.h"
#include "eeprom_api.h"

static void Lcd_EEPConvert_Set(uint32_t *dst, uint8_t *src, uint8_t src_size);
static void Lcd_EEPConvert_Get(uint8_t *dst, uint32_t *src, uint8_t dst_size);

void Lcd_Set_Password(uint8_t *pw)
{
	uint32_t password = 0;

	Lcd_EEPConvert_Set(&password, pw, 5);
	Eeprom_SetPassword(&password);

	printf("Set New PW:[%d][%d][%d][%d][%d]\r\n",pw[0],pw[1],pw[2],pw[3],pw[4]);
}

void Lcd_Get_Password(uint8_t *pw)
{
	uint32_t password = 0;

	Eeprom_GetPassword(&password);
	Lcd_EEPConvert_Get(pw, &password, 5);

	printf("Present PW:[%d][%d][%d][%d][%d]\r\n",pw[0],pw[1],pw[2],pw[3],pw[4]);
}

void Lcd_Set_Language(uint8_t lang)
{
	uint32_t language = lang;

	Eeprom_SetLanguage(&language);
}

void Lcd_Get_Language(uint8_t *lang)
{
	uint32_t language = 0;

	Eeprom_GetLanguage(&language);
	*lang = (uint8_t)language;
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

