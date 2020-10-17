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
