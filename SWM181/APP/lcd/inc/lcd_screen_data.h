#ifndef LCD_SCREEN_DATA_H_
#define LCD_SCREEN_DATA_H_

#include "SWM181.h"

#define MENU_LEVEL_0	0	/* 初始画面,自动测量画面 */
#define MENU_LEVEL_1	1	/* 功能选择画面 */
#define MENU_LEVEL_2	2	/* 参数设置菜单 */
#define MENU_LEVEL_3	3	/* 详细设置画面 */

/* MENU_LEVEL_0 */
#define MENU_L0_INIT		0	/* 初始画面 */
#define MENU_L0_AUTOMEASURE	1	/* 自动测量 */
#define MENU_L0_MAX			2

/* MENU_LEVEL_1 */
#define MENU_L1_PARAMSET	0	/* 参数设置 */
#define MENU_L1_TOTALCLR	1	/* 总量清零 */
#define MENU_L1_MAX			2

/* MENU_LEVEL_2 */
#define MENU_L2_PARAMSET00	0	/* 语言 */
#define MENU_L2_PARAMSET01	1	/* 仪表通讯地址 */
#define MENU_L2_PARAMSET02	2	/* 仪表通讯速度 */
#define MENU_L2_PARAMSET03	3	/* 测量管道口径 */
#define MENU_L2_PARAMSET04	4	/* 流量单位 */
#define MENU_L2_PARAMSET05	5	/* 仪表量程设置 */
#define MENU_L2_PARAMSET06	6	/* 测量阻尼时间 */
#define MENU_L2_PARAMSET07	7	/* 流量方向择项 */
#define MENU_L2_PARAMSET08	8	/* 流量零点修正 */
#define MENU_L2_PARAMSET09	9	/* 小信号切除点 */
#define MENU_L2_PARAMSET10	10	/* 允许切除显示 */
#define MENU_L2_PARAMSET11	11	/* 流量积算单位 */
#define MENU_L2_PARAMSET12	12	/* 反向输出允许 */
#define MENU_L2_PARAMSET13	13	/* 电流输出类型 */
#define MENU_L2_PARAMSET14	14	/* 脉冲输出方式 */
#define MENU_L2_PARAMSET15	15	/* 脉冲单位当量 */
#define MENU_L2_PARAMSET16	16	/* 频率输出范围 */
#define MENU_L2_PARAMSET17	17	/* 空管报警允许 */
#define MENU_L2_PARAMSET18	18	/* 空管报警阈值 */
#define MENU_L2_PARAMSET19	19	/* 上限报警允许 */
#define MENU_L2_PARAMSET20	20	/* 上限报警数值 */
#define MENU_L2_PARAMSET21	21	/* 下限报警允许 */
#define MENU_L2_PARAMSET22	22	/* 下限报警数值 */
#define MENU_L2_PARAMSET23	23	/* 励磁报警允许 */
#define MENU_L2_PARAMSET24	24	/* 总量清零密码 */
#define MENU_L2_PARAMSET25	25	/* 传感器编码1 */
#define MENU_L2_PARAMSET26	26	/* 传感器编码2 */
#define MENU_L2_PARAMSET27	27	/* 励磁方式选择 */
#define MENU_L2_PARAMSET28	28	/* 传感器系数值 */
#define MENU_L2_PARAMSET29	29	/* 修正系数0 */
#define MENU_L2_PARAMSET30	30	/* 流量修正点0 */
#define MENU_L2_PARAMSET31	31	/* 修正系数1 */
#define MENU_L2_PARAMSET32	32	/* 流量修正点1 */
#define MENU_L2_PARAMSET33	33	/* 修正系数2 */
#define MENU_L2_PARAMSET34	34	/* 流量修正点2 */
#define MENU_L2_PARAMSET35	35	/* 修正系数3 */
#define MENU_L2_PARAMSET36	36	/* 流量修正点3 */
#define MENU_L2_PARAMSET37	37	/* 修正系数4 */
#define MENU_L2_PARAMSET38	38	/* 正向累计设定 */
#define MENU_L2_PARAMSET39	39	/* 反向累计设定 */
#define MENU_L2_PARAMSET40	40	/* 电流零点修正 */
#define MENU_L2_PARAMSET41	41	/* 电流满度修正 */
#define MENU_L2_PARAMSET42	42	/* 出厂标定系数 */
#define MENU_L2_PARAMSET43	43	/* 设定密度 */
#define MENU_L2_PARAMSET44	44	/* 远传间隔时间 */
#define MENU_L2_MAX			45

/* MENU_LEVEL_3 */
#define MENU_L3_00	0	/* 中文 */
#define MENU_L3_01	1	/* English */
#define MENU_L3_02	2	/* 仪表通讯地址 */
#define MENU_L3_MAX	3

typedef enum StringType
{
	STR_ZH = 0,
	STR_EN,
} StringType_t;

typedef struct Stringinfo
{
	uint8_t			str_x;
	uint8_t			str_y;
	StringType_t	str_type;
	uint8_t*		pstr;
} Stringinfo_t;

typedef struct MenuList
{
	uint8_t			str_num;
	Stringinfo_t*	pstr;
} MenuList_t;

extern MenuList_t Menu_level0_list_zh[MENU_L0_MAX];
extern MenuList_t Menu_level1_list_zh[MENU_L1_MAX];
extern MenuList_t Menu_level2_list_zh[MENU_L2_MAX];
extern MenuList_t Menu_level3_list_zh[MENU_L3_MAX];
extern uint8_t* Menu_Number_Tbl[];

#endif /* LCD_SCREEN_DATA_H_ */
