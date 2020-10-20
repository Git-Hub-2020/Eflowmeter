#ifndef MENU_TYPE_H_
#define MENU_TYPE_H_

#include "SWM181.h"

/* ���� */
typedef struct PWInfo
{
	uint8_t pw[5];
} PWInfo_t;

/* ���� */
typedef enum Language
{
	LANG_ZH = 0,
	LANG_EN,
	LANG_MAX
} Language_t;

/* �Ǳ�ͨѶ��ַ */
typedef struct Commaddress
{
	uint8_t data[2];
} Commaddress_t;

/* �Ǳ�ͨѶ�ٶ� */
typedef enum BaudRate
{
	RATE_2400 = 0,
	RATE_4800,
	RATE_9600,
	RATE_19200,
	RATE_MAX
} BaudRate_t;

/* �����ܵ��ھ� */
typedef struct SnsrSize
{
	uint8_t data[4];
} SnsrSize_t;

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

/* �Ǳ��������� */
typedef struct FlowRange
{
	uint8_t data[5];
} FlowRange_t;

/* ��������ʱ�� */
typedef struct Damp
{
	uint8_t data[2];
} Damp_t;

/* ������������ */
typedef enum FlowDirect
{
	DIR_FORWARD = 0,
	DIR_BACKWARD,
	DIR_MAX
} FlowDirect_t;

/* ����������� */
typedef struct FlowZero
{
	uint8_t data[4];
} FlowZero_t;

/* С�ź��г��� */
typedef struct FlowCutoff
{
	uint8_t data[5];
} FlowCutoff_t;

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

/* Ƶ�������Χ */
typedef struct FrequeMax
{
	uint8_t data[4];
} FrequeMax_t;

/* �չܱ�����ֵ */
typedef struct MtsnsrTrip
{
	uint8_t data[5];
} MtsnsrTrip_t;

extern PWInfo_t PWInfo;
extern Language_t lcd_Language;
extern Commaddress_t lcd_Commaddr;
extern BaudRate_t lcd_baudrate;
extern SnsrSize_t lcd_snsrsize;
extern FlowUnit_t lcd_flowunit;
extern FlowRange_t lcd_flowrange;
extern Damp_t lcd_damp;
extern FlowDirect_t lcd_flowdirect;
extern FlowZero_t lcd_flowzero;
extern FlowCutoff_t lcd_flowcutoff;
extern PermitOpt_t lcd_cutoffena;
extern TotalUnit_t lcd_totalunit;
extern PermitOpt_t lcd_segmaNena;
extern AnalogType_t lcd_analogtype;
extern PulseType_t lcd_pulsetype;
extern TotalUnit_t lcd_pulsefact;
extern FrequeMax_t lcd_frequemax;
extern PermitOpt_t lcd_mtsnsrena;
extern MtsnsrTrip_t lcd_mtsnsrtrip;

#endif /* MENU_TYPE_H_ */
