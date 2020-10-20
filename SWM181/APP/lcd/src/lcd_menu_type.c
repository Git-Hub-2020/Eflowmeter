#include "lcd_menu_type.h"

/* MENU信息存储变量定义 */

PWInfo_t PWInfo;				/* 密码 */
Language_t lcd_Language;		/* 语言 */
Commaddress_t lcd_Commaddr;		/* 仪表通讯地址 */
BaudRate_t lcd_baudrate;		/* 仪表通讯速度 */
SnsrSize_t lcd_snsrsize;		/* 测量管道口径 */
FlowUnit_t lcd_flowunit;		/* 流量单位 */
FlowRange_t lcd_flowrange;		/* 仪表量程设置 */
Damp_t lcd_damp;				/* 测量阻尼时间 */
FlowDirect_t lcd_flowdirect;	/* 流量方向择项 */
FlowZero_t lcd_flowzero;		/* 流量零点修正 */
FlowCutoff_t lcd_flowcutoff;	/* 小信号切除点 */
PermitOpt_t lcd_cutoffena;		/* 允许切除显示 */
TotalUnit_t lcd_totalunit;		/* 流量积算单位 */
PermitOpt_t lcd_segmaNena;		/* 反向输出允许 */
AnalogType_t lcd_analogtype;	/* 电流输出类型 */
PulseType_t lcd_pulsetype;		/* 脉冲输出方式 */
TotalUnit_t lcd_pulsefact;		/* 脉冲当量 */
FrequeMax_t lcd_frequemax;		/* 频率范围 */
PermitOpt_t lcd_mtsnsrena;		/* 空管报警允许 */
MtsnsrTrip_t lcd_mtsnsrtrip;	/* 空管报警阈值 */
