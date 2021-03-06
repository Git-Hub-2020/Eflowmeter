#ifndef MENU_TYPE_H_
#define MENU_TYPE_H_

#include "SWM181.h"

/* 语言 */
typedef enum Language
{
	LANG_ZH = 0,
	LANG_EN,
	LANG_MAX
} Language_t;

/* 仪表通讯速度 */
typedef enum BaudRate
{
	RATE_2400 = 0,
	RATE_4800,
	RATE_9600,
	RATE_19200,
	RATE_MAX
} BaudRate_t;

/* 流量单位 */
typedef enum FlowUnit
{
	UNIT_LH = 0,
	UNIT_LM,
	UNIT_LS,
	UNIT_M3H,
	UNIT_M3M,
	UNIT_M3S,
	UNIT_MAX
} FlowUnit_t;

/* 流量方向择项 */
typedef enum FlowDirect
{
	DIR_FORWARD = 0,
	DIR_BACKWARD,
	DIR_MAX
} FlowDirect_t;

/* **_允许/禁止 */
typedef enum PermitOpt
{
	PERMIT_ALLOW = 0,
	PERMIT_FORBID,
	PERMIT_MAX
} PermitOpt_t;

/* 流量积算单位 */
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

/* 电流输出类型 */
typedef enum AnalogType
{
	ATYPE_0TO10MA = 0,
	ATYPE_4TO20MA,
	ATYPE_MAX
} AnalogType_t;

/* 脉冲输出方式 */
typedef enum PulseType
{
	PTYPE_FREQUE = 0,
	PTYPE_PULSE,
	PTYPE_MAX
} PulseType_t;

/* 励磁方式选择 */
typedef enum FieldType
{
	FTYPE_1 = 0,
	FTYPE_2,
	FTYPE_3,
	FTYPE_MAX
} FieldType_t;

/* 数字符号：0-正数，1-负数 */
typedef enum NumType
{
	NUM_POSITIVE = 0,
	NUM_NEGATIVE
} NumType_t;

typedef struct DataSize2
{
	uint8_t data[2];
} DataSize2_t;

typedef struct DataSize3
{
	uint8_t data[3];
} DataSize3_t;

typedef struct DataSize4
{
	uint8_t data[4];
} DataSize4_t;

typedef struct DataSize5
{
	uint8_t data[5];
} DataSize5_t;

typedef struct DataSize9
{
	uint8_t data[9];
} DataSize9_t;

typedef struct SignedDataSize4
{
	NumType_t sign;
	uint8_t data[4];
} SignedDataSize4_t;

extern Language_t lcd_Language;			/* 语言 */
extern DataSize2_t lcd_Commaddr;		/* 仪表通讯地址 */
extern BaudRate_t lcd_baudrate;			/* 仪表通讯速度 */
extern uint8_t lcd_snsrsize;			/* 测量管道口径 */
extern FlowUnit_t lcd_flowunit;			/* 流量单位 */
extern DataSize5_t lcd_flowrange;		/* 仪表量程设置 */
extern DataSize2_t lcd_damp;			/* 测量阻尼时间 */
extern FlowDirect_t lcd_flowdirect;		/* 流量方向择项 */
extern SignedDataSize4_t lcd_flowzero;	/* 流量零点修正 */
extern DataSize5_t lcd_flowcutoff;		/* 小信号切除点 */
extern PermitOpt_t lcd_cutoffena;		/* 允许切除显示 */
extern TotalUnit_t lcd_totalunit;		/* 流量积算单位 */
extern PermitOpt_t lcd_segmaNena;		/* 反向输出允许 */
extern AnalogType_t lcd_analogtype;		/* 电流输出类型 */
extern PulseType_t lcd_pulsetype;		/* 脉冲输出方式 */
extern TotalUnit_t lcd_pulsefact;		/* 脉冲当量 */
extern DataSize4_t lcd_frequemax;		/* 频率范围 */
extern PermitOpt_t lcd_mtsnsrena;		/* 空管报警允许 */
extern DataSize5_t lcd_mtsnsrtrip;		/* 空管报警阈值 */
extern PermitOpt_t lcd_almhiena;		/* 上限报警允许 */
extern DataSize5_t lcd_almhival;		/* 上限报警数值 */
extern PermitOpt_t lcd_almlowena;		/* 下限报警允许 */
extern DataSize5_t lcd_almlowval;		/* 下限报警数值 */
extern PermitOpt_t lcd_coilalmena;		/* 励磁报警允许 */
extern DataSize5_t PWInfo;				/* 总量清零密码 */
extern DataSize5_t lcd_sensorcode1;		/* 传感器编码1 */
extern DataSize5_t lcd_sensorcode2;		/* 传感器编码2 */
extern FieldType_t lcd_fieldtype;		/* 励磁方式选择 */
extern DataSize5_t lcd_sensorfact;		/* 传感器系数值 */
extern DataSize5_t lcd_correctfact0;	/* 修正系数0 */
extern DataSize3_t lcd_correctvalu0;	/* 流量修正点0 */
extern DataSize5_t lcd_correctfact1;	/* 修正系数1 */
extern DataSize3_t lcd_correctvalu1;	/* 流量修正点1 */
extern DataSize5_t lcd_correctfact2;	/* 修正系数2 */
extern DataSize3_t lcd_correctvalu2;	/* 流量修正点2 */
extern DataSize5_t lcd_correctfact3;	/* 修正系数3 */
extern DataSize3_t lcd_correctvalu3;	/* 流量修正点3 */
extern DataSize5_t lcd_correctfact4;	/* 修正系数4 */
extern DataSize9_t lcd_fwdtotal;		/* 正向累计设定 */
extern DataSize9_t lcd_revtotal;		/* 反向累计设定 */
extern DataSize5_t lcd_analogzero;		/* 电流零点修正 */
extern DataSize5_t lcd_analogrange;		/* 电流满度修正 */
extern DataSize5_t lcd_meterfact;		/* 出厂标定系数 */
extern DataSize5_t lcd_setdensity;		/* 设定密度 */
extern DataSize4_t lcd_sendint;			/* 远传间隔时间 */

#endif /* MENU_TYPE_H_ */
