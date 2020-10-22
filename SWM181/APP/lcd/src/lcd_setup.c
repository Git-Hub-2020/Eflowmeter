#include "eeprom_api.h"
#include "lcd_screen_data.h"

static EepromId_t Lcd_Menu_L3_EEPID[MENU_L3_MAX] =
{
	EEP_ID_language,		/* 语言 */
	EEP_ID_commaddress,		/* 仪表通讯地址 */
	EEP_ID_baudrate,		/* 仪表通讯速度 */
	EEP_ID_snsrsize,		/* 测量管道口径 */
	EEP_ID_flowunit,		/* 流量单位 */
	EEP_ID_flowrange,		/* 仪表量程设置 */
	EEP_ID_damp,			/* 测量阻尼时间 */
	EEP_ID_flowdirect,		/* 流量方向择项 */
	EEP_ID_flowzero,		/* 流量零点修正 */
	EEP_ID_flowcutoff,		/* 小信号切除点 */
	EEP_ID_cutoffena,		/* 允许切除显示 */
	EEP_ID_totalunit,		/* 流量积算单位 */
	EEP_ID_segmanena,		/* 反向输出允许 */
	EEP_ID_analogtype,		/* 电流输出类型 */
	EEP_ID_pulsetype,		/* 脉冲输出方式 */
	EEP_ID_pulsefact,		/* 脉冲单位当量 */
	EEP_ID_frequemax,		/* 频率输出范围 */
	EEP_ID_mtsnsrena,		/* 空管报警允许 */
	EEP_ID_mtsnsrtrip,		/* 空管报警阈值 */
	EEP_ID_almhiena,		/* 上限报警允许 */
	EEP_ID_almhival,		/* 上限报警数值 */
	EEP_ID_almlowena,		/* 下限报警允许 */
	EEP_ID_almlowval,		/* 下限报警数值 */
	EEP_ID_coilalmena,		/* 励磁报警允许 */
	EEP_ID_clrsumkey,		/* 总量清零密码 */
	EEP_ID_sensorcode1,		/* 传感器编码1 */
	EEP_ID_sensorcode2,		/* 传感器编码2 */
	EEP_ID_fieldtype,		/* 励磁方式选择 */
	EEP_ID_sensorfact,		/* 传感器系数值 */
	EEP_ID_correctfact0,	/* 修正系数0 */
	EEP_ID_correctvalu0,	/* 流量修正点0 */
	EEP_ID_correctfact1,	/* 修正系数1 */
	EEP_ID_correctvalu1,	/* 流量修正点1 */
	EEP_ID_correctfact2,	/* 修正系数2 */
	EEP_ID_correctvalu2,	/* 流量修正点2 */
	EEP_ID_correctfact3,	/* 修正系数3 */
	EEP_ID_correctvalu3,	/* 流量修正点3 */
	EEP_ID_correctfact4,	/* 修正系数4 */
	EEP_ID_fwdtotal,		/* 正向累计设定 */
	EEP_ID_revtotal,		/* 反向累计设定 */
	EEP_ID_analogzero,		/* 电流零点修正 */
	EEP_ID_analogrange,		/* 电流满度修正 */
	EEP_ID_meterfact,		/* 出厂标定系数 */
	EEP_ID_setdensity,		/* 设定密度 */
	EEP_ID_sendint,			/* 远传间隔时间 */
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

