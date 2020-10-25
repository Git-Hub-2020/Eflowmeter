#ifndef LCD_SCREEN_DATA_H_
#define LCD_SCREEN_DATA_H_

#include "SWM181.h"

#define MENU_LEVEL_0	0	/* 初始画面,自动测量画面 */
#define MENU_LEVEL_1	1	/* 功能选择画面 */
#define MENU_LEVEL_2	2	/* 参数设置菜单 */
#define MENU_LEVEL_3	3	/* 详细设置画面 */
#define MENU_LEVEL_4	4	/* 密码 */

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
#define MENU_L3_00			0	/* 语言 */
#define MENU_L3_01			1	/* 仪表通讯地址 */
#define MENU_L3_02			2	/* 仪表通讯速度 */
#define MENU_L3_03			3	/* 测量管道口径 */
#define MENU_L3_04			4	/* 流量单位 */
#define MENU_L3_05			5	/* 仪表量程设置 */
#define MENU_L3_06			6	/* 测量阻尼时间 */
#define MENU_L3_07			7	/* 流量方向择项 */
#define MENU_L3_08			8	/* 流量零点修正 */
#define MENU_L3_09			9	/* 小信号切除点 */
#define MENU_L3_10			10	/* 允许切除显示 */
#define MENU_L3_11			11	/* 流量积算单位 */
#define MENU_L3_12			12	/* 反向输出允许 */
#define MENU_L3_13			13	/* 电流输出类型 */
#define MENU_L3_14			14	/* 脉冲输出方式 */
#define MENU_L3_15			15	/* 脉冲单位当量 */
#define MENU_L3_16			16	/* 频率输出范围 */
#define MENU_L3_17			17	/* 空管报警允许 */
#define MENU_L3_18			18	/* 空管报警阈值 */
#define MENU_L3_19			19	/* 上限报警允许 */
#define MENU_L3_20			20	/* 上限报警数值 */
#define MENU_L3_21			21	/* 下限报警允许 */
#define MENU_L3_22			22	/* 下限报警数值 */
#define MENU_L3_23			23	/* 励磁报警允许 */
#define MENU_L3_24			24	/* 总量清零密码 */
#define MENU_L3_25			25	/* 传感器编码1 */
#define MENU_L3_26			26	/* 传感器编码2 */
#define MENU_L3_27			27	/* 励磁方式选择 */
#define MENU_L3_28			28	/* 传感器系数值 */
#define MENU_L3_29			29	/* 修正系数0 */
#define MENU_L3_30			30	/* 流量修正点0 */
#define MENU_L3_31			31	/* 修正系数1 */
#define MENU_L3_32			32	/* 流量修正点1 */
#define MENU_L3_33			33	/* 修正系数2 */
#define MENU_L3_34			34	/* 流量修正点2 */
#define MENU_L3_35			35	/* 修正系数3 */
#define MENU_L3_36			36	/* 流量修正点3 */
#define MENU_L3_37			37	/* 修正系数4 */
#define MENU_L3_38			38	/* 正向累计设定 */
#define MENU_L3_39			39	/* 反向累计设定 */
#define MENU_L3_40			40	/* 电流零点修正 */
#define MENU_L3_41			41	/* 电流满度修正 */
#define MENU_L3_42			42	/* 出厂标定系数 */
#define MENU_L3_43			43	/* 设定密度 */
#define MENU_L3_44			44	/* 远传间隔时间 */
#define MENU_L3_MAX			45

/* MENU_LEVEL_4 */
#define MENU_L4_00			0	/* 参数设置密码 */
#define MENU_L4_01			1	/* 总量清零密码 */
#define MENU_L4_MAX			2

typedef enum StringType
{
	STR_ZH = 0,
	STR_EN,
	STR_LARGE
} StringType_t;

typedef struct Stringinfo
{
	uint8_t			str_x;
	uint8_t			str_y;
	StringType_t	str_type;
	const uint8_t*	pstr;
} Stringinfo_t;

typedef struct MenuList
{
	uint8_t			menu_num;
	void*			p_menu;
} MenuList_t;

extern MenuList_t* Menu_level0_list[];
extern MenuList_t* Menu_level1_list[];
extern MenuList_t* Menu_level2_list[];
extern MenuList_t* Menu_level3_list[];
extern MenuList_t* Menu_level4_list[];
extern const uint8_t* Menu_Number_Tbl[];
extern const Stringinfo_t Menu_Init_Dot[];
extern const Stringinfo_t Menu_Cursor_default;

#endif /* LCD_SCREEN_DATA_H_ */
