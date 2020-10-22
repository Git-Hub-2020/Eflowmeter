#include "eeprom_api.h"
#include "lcd_screen_data.h"

static EepromId_t Lcd_Menu_L3_EEPID[MENU_L3_MAX] =
{
	EEP_ID_language,		/* ���� */
	EEP_ID_commaddress,		/* �Ǳ�ͨѶ��ַ */
	EEP_ID_baudrate,		/* �Ǳ�ͨѶ�ٶ� */
	EEP_ID_snsrsize,		/* �����ܵ��ھ� */
	EEP_ID_flowunit,		/* ������λ */
	EEP_ID_flowrange,		/* �Ǳ��������� */
	EEP_ID_damp,			/* ��������ʱ�� */
	EEP_ID_flowdirect,		/* ������������ */
	EEP_ID_flowzero,		/* ����������� */
	EEP_ID_flowcutoff,		/* С�ź��г��� */
	EEP_ID_cutoffena,		/* �����г���ʾ */
	EEP_ID_totalunit,		/* �������㵥λ */
	EEP_ID_segmanena,		/* ����������� */
	EEP_ID_analogtype,		/* ����������� */
	EEP_ID_pulsetype,		/* ���������ʽ */
	EEP_ID_pulsefact,		/* ���嵥λ���� */
	EEP_ID_frequemax,		/* Ƶ�������Χ */
	EEP_ID_mtsnsrena,		/* �չܱ������� */
	EEP_ID_mtsnsrtrip,		/* �չܱ�����ֵ */
	EEP_ID_almhiena,		/* ���ޱ������� */
	EEP_ID_almhival,		/* ���ޱ�����ֵ */
	EEP_ID_almlowena,		/* ���ޱ������� */
	EEP_ID_almlowval,		/* ���ޱ�����ֵ */
	EEP_ID_coilalmena,		/* ���ű������� */
	EEP_ID_clrsumkey,		/* ������������ */
	EEP_ID_sensorcode1,		/* ����������1 */
	EEP_ID_sensorcode2,		/* ����������2 */
	EEP_ID_fieldtype,		/* ���ŷ�ʽѡ�� */
	EEP_ID_sensorfact,		/* ������ϵ��ֵ */
	EEP_ID_correctfact0,	/* ����ϵ��0 */
	EEP_ID_correctvalu0,	/* ����������0 */
	EEP_ID_correctfact1,	/* ����ϵ��1 */
	EEP_ID_correctvalu1,	/* ����������1 */
	EEP_ID_correctfact2,	/* ����ϵ��2 */
	EEP_ID_correctvalu2,	/* ����������2 */
	EEP_ID_correctfact3,	/* ����ϵ��3 */
	EEP_ID_correctvalu3,	/* ����������3 */
	EEP_ID_correctfact4,	/* ����ϵ��4 */
	EEP_ID_fwdtotal,		/* �����ۼ��趨 */
	EEP_ID_revtotal,		/* �����ۼ��趨 */
	EEP_ID_analogzero,		/* ����������� */
	EEP_ID_analogrange,		/* ������������ */
	EEP_ID_meterfact,		/* �����궨ϵ�� */
	EEP_ID_setdensity,		/* �趨�ܶ� */
	EEP_ID_sendint,			/* Զ�����ʱ�� */
};

void Lcd_Setting_GetValue(uint8_t level, uint8_t menu, uint32_t *value)
{
	if (MENU_LEVEL_3 == level){
		Eeprom_Read_Value(Lcd_Menu_L3_EEPID[menu], value);
	}
}

void Lcd_Setting_SetValue(uint8_t level, uint8_t menu, uint32_t *value)
{
	if (MENU_LEVEL_3 == level){
		Eeprom_Write_Value(Lcd_Menu_L3_EEPID[menu], value);
	}
}

void Lcd_StrToNum_Convert(uint8_t *str, uint32_t *num, uint8_t str_size)
{
	uint8_t i = 0;

	for(i = 0; i < str_size; i++){
		*num += str[i];
		if(i < str_size - 1) *num *= 10;
	}
}

void Lcd_NumToStr_Convert(uint8_t *str, uint32_t *num, uint8_t str_size)
{
	uint8_t i = 0;
	uint32_t dst_num = *num;

	for(i = 0; i < str_size; i++){
		str[str_size - i - 1] = dst_num % 10;
		if(i < str_size - 1) dst_num /= 10;
	}
}

