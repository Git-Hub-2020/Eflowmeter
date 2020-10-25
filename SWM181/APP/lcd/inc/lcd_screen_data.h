#ifndef LCD_SCREEN_DATA_H_
#define LCD_SCREEN_DATA_H_

#include "SWM181.h"

#define MENU_LEVEL_0	0	/* ��ʼ����,�Զ��������� */
#define MENU_LEVEL_1	1	/* ����ѡ���� */
#define MENU_LEVEL_2	2	/* �������ò˵� */
#define MENU_LEVEL_3	3	/* ��ϸ���û��� */
#define MENU_LEVEL_4	4	/* ���� */

/* MENU_LEVEL_0 */
#define MENU_L0_INIT		0	/* ��ʼ���� */
#define MENU_L0_AUTOMEASURE	1	/* �Զ����� */
#define MENU_L0_MAX			2

/* MENU_LEVEL_1 */
#define MENU_L1_PARAMSET	0	/* �������� */
#define MENU_L1_TOTALCLR	1	/* �������� */
#define MENU_L1_MAX			2

/* MENU_LEVEL_2 */
#define MENU_L2_PARAMSET00	0	/* ���� */
#define MENU_L2_PARAMSET01	1	/* �Ǳ�ͨѶ��ַ */
#define MENU_L2_PARAMSET02	2	/* �Ǳ�ͨѶ�ٶ� */
#define MENU_L2_PARAMSET03	3	/* �����ܵ��ھ� */
#define MENU_L2_PARAMSET04	4	/* ������λ */
#define MENU_L2_PARAMSET05	5	/* �Ǳ��������� */
#define MENU_L2_PARAMSET06	6	/* ��������ʱ�� */
#define MENU_L2_PARAMSET07	7	/* ������������ */
#define MENU_L2_PARAMSET08	8	/* ����������� */
#define MENU_L2_PARAMSET09	9	/* С�ź��г��� */
#define MENU_L2_PARAMSET10	10	/* �����г���ʾ */
#define MENU_L2_PARAMSET11	11	/* �������㵥λ */
#define MENU_L2_PARAMSET12	12	/* ����������� */
#define MENU_L2_PARAMSET13	13	/* ����������� */
#define MENU_L2_PARAMSET14	14	/* ���������ʽ */
#define MENU_L2_PARAMSET15	15	/* ���嵥λ���� */
#define MENU_L2_PARAMSET16	16	/* Ƶ�������Χ */
#define MENU_L2_PARAMSET17	17	/* �չܱ������� */
#define MENU_L2_PARAMSET18	18	/* �չܱ�����ֵ */
#define MENU_L2_PARAMSET19	19	/* ���ޱ������� */
#define MENU_L2_PARAMSET20	20	/* ���ޱ�����ֵ */
#define MENU_L2_PARAMSET21	21	/* ���ޱ������� */
#define MENU_L2_PARAMSET22	22	/* ���ޱ�����ֵ */
#define MENU_L2_PARAMSET23	23	/* ���ű������� */
#define MENU_L2_PARAMSET24	24	/* ������������ */
#define MENU_L2_PARAMSET25	25	/* ����������1 */
#define MENU_L2_PARAMSET26	26	/* ����������2 */
#define MENU_L2_PARAMSET27	27	/* ���ŷ�ʽѡ�� */
#define MENU_L2_PARAMSET28	28	/* ������ϵ��ֵ */
#define MENU_L2_PARAMSET29	29	/* ����ϵ��0 */
#define MENU_L2_PARAMSET30	30	/* ����������0 */
#define MENU_L2_PARAMSET31	31	/* ����ϵ��1 */
#define MENU_L2_PARAMSET32	32	/* ����������1 */
#define MENU_L2_PARAMSET33	33	/* ����ϵ��2 */
#define MENU_L2_PARAMSET34	34	/* ����������2 */
#define MENU_L2_PARAMSET35	35	/* ����ϵ��3 */
#define MENU_L2_PARAMSET36	36	/* ����������3 */
#define MENU_L2_PARAMSET37	37	/* ����ϵ��4 */
#define MENU_L2_PARAMSET38	38	/* �����ۼ��趨 */
#define MENU_L2_PARAMSET39	39	/* �����ۼ��趨 */
#define MENU_L2_PARAMSET40	40	/* ����������� */
#define MENU_L2_PARAMSET41	41	/* ������������ */
#define MENU_L2_PARAMSET42	42	/* �����궨ϵ�� */
#define MENU_L2_PARAMSET43	43	/* �趨�ܶ� */
#define MENU_L2_PARAMSET44	44	/* Զ�����ʱ�� */
#define MENU_L2_MAX			45

/* MENU_LEVEL_3 */
#define MENU_L3_00			0	/* ���� */
#define MENU_L3_01			1	/* �Ǳ�ͨѶ��ַ */
#define MENU_L3_02			2	/* �Ǳ�ͨѶ�ٶ� */
#define MENU_L3_03			3	/* �����ܵ��ھ� */
#define MENU_L3_04			4	/* ������λ */
#define MENU_L3_05			5	/* �Ǳ��������� */
#define MENU_L3_06			6	/* ��������ʱ�� */
#define MENU_L3_07			7	/* ������������ */
#define MENU_L3_08			8	/* ����������� */
#define MENU_L3_09			9	/* С�ź��г��� */
#define MENU_L3_10			10	/* �����г���ʾ */
#define MENU_L3_11			11	/* �������㵥λ */
#define MENU_L3_12			12	/* ����������� */
#define MENU_L3_13			13	/* ����������� */
#define MENU_L3_14			14	/* ���������ʽ */
#define MENU_L3_15			15	/* ���嵥λ���� */
#define MENU_L3_16			16	/* Ƶ�������Χ */
#define MENU_L3_17			17	/* �չܱ������� */
#define MENU_L3_18			18	/* �չܱ�����ֵ */
#define MENU_L3_19			19	/* ���ޱ������� */
#define MENU_L3_20			20	/* ���ޱ�����ֵ */
#define MENU_L3_21			21	/* ���ޱ������� */
#define MENU_L3_22			22	/* ���ޱ�����ֵ */
#define MENU_L3_23			23	/* ���ű������� */
#define MENU_L3_24			24	/* ������������ */
#define MENU_L3_25			25	/* ����������1 */
#define MENU_L3_26			26	/* ����������2 */
#define MENU_L3_27			27	/* ���ŷ�ʽѡ�� */
#define MENU_L3_28			28	/* ������ϵ��ֵ */
#define MENU_L3_29			29	/* ����ϵ��0 */
#define MENU_L3_30			30	/* ����������0 */
#define MENU_L3_31			31	/* ����ϵ��1 */
#define MENU_L3_32			32	/* ����������1 */
#define MENU_L3_33			33	/* ����ϵ��2 */
#define MENU_L3_34			34	/* ����������2 */
#define MENU_L3_35			35	/* ����ϵ��3 */
#define MENU_L3_36			36	/* ����������3 */
#define MENU_L3_37			37	/* ����ϵ��4 */
#define MENU_L3_38			38	/* �����ۼ��趨 */
#define MENU_L3_39			39	/* �����ۼ��趨 */
#define MENU_L3_40			40	/* ����������� */
#define MENU_L3_41			41	/* ������������ */
#define MENU_L3_42			42	/* �����궨ϵ�� */
#define MENU_L3_43			43	/* �趨�ܶ� */
#define MENU_L3_44			44	/* Զ�����ʱ�� */
#define MENU_L3_MAX			45

/* MENU_LEVEL_4 */
#define MENU_L4_00			0	/* ������������ */
#define MENU_L4_01			1	/* ������������ */
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
