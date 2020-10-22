#include "lcd_menu_type.h"

/* MENU信息存储变量定义 */

Language_t lcd_Language;		/* 语言 */
DataSize2_t lcd_Commaddr;		/* 仪表通讯地址 */
BaudRate_t lcd_baudrate;		/* 仪表通讯速度 */
DataSize4_t lcd_snsrsize;		/* 测量管道口径 */
FlowUnit_t lcd_flowunit;		/* 流量单位 */
DataSize5_t lcd_flowrange;		/* 仪表量程设置 */
DataSize2_t lcd_damp;			/* 测量阻尼时间 */
FlowDirect_t lcd_flowdirect;	/* 流量方向择项 */
DataSize4_t lcd_flowzero;		/* 流量零点修正 */
DataSize5_t lcd_flowcutoff;		/* 小信号切除点 */
PermitOpt_t lcd_cutoffena;		/* 允许切除显示 */
TotalUnit_t lcd_totalunit;		/* 流量积算单位 */
PermitOpt_t lcd_segmaNena;		/* 反向输出允许 */
AnalogType_t lcd_analogtype;	/* 电流输出类型 */
PulseType_t lcd_pulsetype;		/* 脉冲输出方式 */
TotalUnit_t lcd_pulsefact;		/* 脉冲当量 */
DataSize4_t lcd_frequemax;		/* 频率范围 */
PermitOpt_t lcd_mtsnsrena;		/* 空管报警允许 */
DataSize5_t lcd_mtsnsrtrip;		/* 空管报警阈值 */
PermitOpt_t lcd_almhiena;		/* 上限报警允许 */
DataSize5_t lcd_almhival;		/* 上限报警数值 */
PermitOpt_t lcd_almlowena;		/* 下限报警允许 */
DataSize5_t lcd_almlowval;		/* 下限报警数值 */
PermitOpt_t lcd_coilalmena;		/* 励磁报警允许 */
DataSize5_t PWInfo;				/* 总量清零密码 */

