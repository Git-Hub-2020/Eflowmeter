#ifndef MENU_TYPE_H_
#define MENU_TYPE_H_

#include "SWM181.h"

/* ���� */
typedef enum Language
{
	LANG_ZH = 0,
	LANG_EN,
	LANG_MAX
} Language_t;

/* �Ǳ�ͨѶ�ٶ� */
typedef enum BaudRate
{
	RATE_2400 = 0,
	RATE_4800,
	RATE_9600,
	RATE_19200,
	RATE_MAX
} BaudRate_t;

/* ������λ */
typedef enum FlowUnit
{
	UNIT_LS = 0,
	UNIT_LM,
	UNIT_LH,
	UNIT_M3S,
	UNIT_M3M,
	UNIT_MAX
} FlowUnit_t;

/* ������������ */
typedef enum FlowDirect
{
	DIR_FORWARD = 0,
	DIR_BACKWARD,
	DIR_MAX
} FlowDirect_t;

/* **_����/��ֹ */
typedef enum PermitOpt
{
	PERMIT_ALLOW = 0,
	PERMIT_FORBID,
	PERMIT_MAX
} PermitOpt_t;

/* �������㵥λ */
typedef enum TotalUnit
{
	TUNIT_0001L = 0,
	TUNIT_0010L,
	TUNIT_0100L,
	TUNIT_1000L,
	TUNIT_0001M3,
	TUNIT_0010M3,
	TUNIT_0100M3,
	TUNIT_1000M3,
	TUNIT_MAX
} TotalUnit_t;

/* ����������� */
typedef enum AnalogType
{
	ATYPE_0TO10MA = 0,
	ATYPE_4TO20MA,
	ATYPE_MAX
} AnalogType_t;

/* ���������ʽ */
typedef enum PulseType
{
	PTYPE_FREQUE = 0,
	PTYPE_PULSE,
	PTYPE_MAX
} PulseType_t;

typedef struct DataSize2
{
	uint8_t data[2];
} DataSize2_t;

typedef struct DataSize4
{
	uint8_t data[4];
} DataSize4_t;

typedef struct DataSize5
{
	uint8_t data[5];
} DataSize5_t;

extern Language_t lcd_Language;		/* ���� */
extern DataSize2_t lcd_Commaddr;	/* �Ǳ�ͨѶ��ַ */
extern BaudRate_t lcd_baudrate;		/* �Ǳ�ͨѶ�ٶ� */
extern DataSize4_t lcd_snsrsize;	/* �����ܵ��ھ� */
extern FlowUnit_t lcd_flowunit;		/* ������λ */
extern DataSize5_t lcd_flowrange;	/* �Ǳ��������� */
extern DataSize2_t lcd_damp;		/* ��������ʱ�� */
extern FlowDirect_t lcd_flowdirect;	/* ������������ */
extern DataSize4_t lcd_flowzero;	/* ����������� */
extern DataSize5_t lcd_flowcutoff;	/* С�ź��г��� */
extern PermitOpt_t lcd_cutoffena;	/* �����г���ʾ */
extern TotalUnit_t lcd_totalunit;	/* �������㵥λ */
extern PermitOpt_t lcd_segmaNena;	/* ����������� */
extern AnalogType_t lcd_analogtype;	/* ����������� */
extern PulseType_t lcd_pulsetype;	/* ���������ʽ */
extern TotalUnit_t lcd_pulsefact;	/* ���嵱�� */
extern DataSize4_t lcd_frequemax;	/* Ƶ�ʷ�Χ */
extern PermitOpt_t lcd_mtsnsrena;	/* �չܱ������� */
extern DataSize5_t lcd_mtsnsrtrip;	/* �չܱ�����ֵ */
extern PermitOpt_t lcd_almhiena;	/* ���ޱ������� */
extern DataSize5_t lcd_almhival;	/* ���ޱ�����ֵ */
extern PermitOpt_t lcd_almlowena;	/* ���ޱ������� */
extern DataSize5_t lcd_almlowval;	/* ���ޱ�����ֵ */
extern PermitOpt_t lcd_coilalmena;	/* ���ű������� */
extern DataSize5_t PWInfo;			/* ������������ */

#endif /* MENU_TYPE_H_ */
