#include "lcd_screen_data.h"
#include "lcd_string_en.h"
#include "lcd_string_zh.h"

/* ��ʼ���� */
Stringinfo_t Menu_Init[] =
{
	{24, 0, STR_EN, (uint8_t*)str_en_V},
	{32, 0, STR_EN, (uint8_t*)str_en_e},
	{40, 0, STR_EN, (uint8_t*)str_en_r},
	{56, 0, STR_EN, (uint8_t*)str_en_0},
	{64, 0, STR_EN, (uint8_t*)str_en_dot},
	{72, 0, STR_EN, (uint8_t*)str_en_0},
	{80, 0, STR_EN, (uint8_t*)str_en_0},
	{24, 2, STR_ZH, (uint8_t*)str_zh_dian_1},
	{40, 2, STR_ZH, (uint8_t*)str_zh_ci},
	{56, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{72, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{88, 2, STR_ZH, (uint8_t*)str_zh_ji_1}
};

/* ��ʼ����(....) */
Stringinfo_t Menu_Init_Dot[] =
{
	{40, 4, STR_EN, (uint8_t*)str_en_dot},
	{48, 4, STR_EN, (uint8_t*)str_en_dot},
	{56, 4, STR_EN, (uint8_t*)str_en_dot},
	{64, 4, STR_EN, (uint8_t*)str_en_dot}
};

/* �Զ��������� */
Stringinfo_t Menu_AutoMeasure[] =
{
	{32, 0, STR_LARGE, (uint8_t*)str_en_0_large},
	{48, 0, STR_LARGE, (uint8_t*)str_en_dot_large},
	{64, 0, STR_LARGE, (uint8_t*)str_en_0_large},
	{80, 0, STR_LARGE, (uint8_t*)str_en_0_large},
	{96, 0, STR_LARGE, (uint8_t*)str_en_0_large},
	{112, 0, STR_LARGE, (uint8_t*)str_en_0_large},
	{0, 4, STR_ZH, (uint8_t*)str_pic_alerticon},
	{16, 4, STR_EN, (uint8_t*)str_en_S},
	{24, 4, STR_EN, (uint8_t*)str_en_Y},
	{32, 4, STR_EN, (uint8_t*)str_en_S},
	{96, 4, STR_ZH, (uint8_t*)str_pic_unit},
	{112, 4, STR_EN, (uint8_t*)str_en_line_1},
	{120, 4, STR_EN, (uint8_t*)str_en_h},
	{0, 6, STR_ZH, (uint8_t*)str_pic_flowicon},
	{72, 6, STR_EN, (uint8_t*)str_en_0},
	{80, 6, STR_EN, (uint8_t*)str_en_dot},
	{88, 6, STR_EN, (uint8_t*)str_en_0},
	{96, 6, STR_EN, (uint8_t*)str_en_0},
	{104, 6, STR_ZH, (uint8_t*)str_pic_unit}
};

/* �������� */
Stringinfo_t Menu_ParamSet_zh[] =
{
	{32, 2, STR_ZH, (uint8_t*)str_zh_can},
	{48, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{64, 2, STR_ZH, (uint8_t*)str_zh_she},
	{80, 2, STR_ZH, (uint8_t*)str_zh_zhi_1}
};

/* �������� */
Stringinfo_t Menu_TotalClr_zh[] =
{
	{32, 2, STR_ZH, (uint8_t*)str_zh_zong},
	{48, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{64, 2, STR_ZH, (uint8_t*)str_zh_qing},
	{80, 2, STR_ZH, (uint8_t*)str_zh_ling}
};

/* 01_���� */
Stringinfo_t Menu_ParamSet_01_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{48, 2, STR_ZH, (uint8_t*)str_zh_yu},
	{64, 2, STR_ZH, (uint8_t*)str_zh_yan}
};

/* 01_Language */
Stringinfo_t Menu_ParamSet_01_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{32, 2, STR_EN, (uint8_t*)str_en_L},
	{40, 2, STR_EN, (uint8_t*)str_en_a},
	{48, 2, STR_EN, (uint8_t*)str_en_n},
	{56, 2, STR_EN, (uint8_t*)str_en_g},
	{64, 2, STR_EN, (uint8_t*)str_en_u},
	{72, 2, STR_EN, (uint8_t*)str_en_a},
	{80, 2, STR_EN, (uint8_t*)str_en_g},
	{88, 2, STR_EN, (uint8_t*)str_en_e},
};

/* 02_�Ǳ�ͨѶ��ַ */
Stringinfo_t Menu_ParamSet_02_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{16, 2, STR_ZH, (uint8_t*)str_zh_yi},
	{32, 2, STR_ZH, (uint8_t*)str_zh_biao},
	{48, 2, STR_ZH, (uint8_t*)str_zh_tong},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xun},
	{80, 2, STR_ZH, (uint8_t*)str_zh_di},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zhi_2}
};

/* 03_�Ǳ�ͨѶ�ٶ� */
Stringinfo_t Menu_ParamSet_03_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{16, 2, STR_ZH, (uint8_t*)str_zh_yi},
	{32, 2, STR_ZH, (uint8_t*)str_zh_biao},
	{48, 2, STR_ZH, (uint8_t*)str_zh_tong},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xun},
	{80, 2, STR_ZH, (uint8_t*)str_zh_su},
	{96, 2, STR_ZH, (uint8_t*)str_zh_du}
};

/* 04_�����ܵ��ھ� */
Stringinfo_t Menu_ParamSet_04_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{16, 2, STR_ZH, (uint8_t*)str_zh_ce},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_guan},
	{64, 2, STR_ZH, (uint8_t*)str_zh_dao},
	{80, 2, STR_ZH, (uint8_t*)str_zh_kou},
	{96, 2, STR_ZH, (uint8_t*)str_zh_jing}
};

/* 05_������λ */
Stringinfo_t Menu_ParamSet_05_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_5},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{64, 2, STR_ZH, (uint8_t*)str_zh_dan},
	{80, 2, STR_ZH, (uint8_t*)str_zh_wei}
};

/* 06_�Ǳ��������� */
Stringinfo_t Menu_ParamSet_06_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_6},
	{16, 2, STR_ZH, (uint8_t*)str_zh_yi},
	{32, 2, STR_ZH, (uint8_t*)str_zh_biao},
	{48, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{64, 2, STR_ZH, (uint8_t*)str_zh_cheng},
	{80, 2, STR_ZH, (uint8_t*)str_zh_she},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zhi_1}
};

/* 07_��������ʱ�� */
Stringinfo_t Menu_ParamSet_07_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_7},
	{16, 2, STR_ZH, (uint8_t*)str_zh_ce},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_zu},
	{64, 2, STR_ZH, (uint8_t*)str_zh_ni},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shi},
	{96, 2, STR_ZH, (uint8_t*)str_zh_jian}
};

/* 08_������������ */
Stringinfo_t Menu_ParamSet_08_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_8},
	{16, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_fang},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xiang},
	{80, 2, STR_ZH, (uint8_t*)str_zh_ze},
	{96, 2, STR_ZH, (uint8_t*)str_zh_xiang_1}
};

/* 09_����������� */
Stringinfo_t Menu_ParamSet_09_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_9},
	{16, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_ling},
	{64, 2, STR_ZH, (uint8_t*)str_zh_dian},
	{80, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zheng}
};

/* 10_С�ź��г��� */
Stringinfo_t Menu_ParamSet_10_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_0},
	{16, 2, STR_ZH, (uint8_t*)str_zh_xiao},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xin},
	{48, 2, STR_ZH, (uint8_t*)str_zh_hao},
	{64, 2, STR_ZH, (uint8_t*)str_zh_qie},
	{80, 2, STR_ZH, (uint8_t*)str_zh_chu},
	{96, 2, STR_ZH, (uint8_t*)str_zh_dian}
};

/* 11_�����г���ʾ */
Stringinfo_t Menu_ParamSet_11_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_1},
	{16, 2, STR_ZH, (uint8_t*)str_zh_yun},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_qie},
	{64, 2, STR_ZH, (uint8_t*)str_zh_chu},
	{80, 2, STR_ZH, (uint8_t*)str_zh_xian},
	{96, 2, STR_ZH, (uint8_t*)str_zh_shi_1}
};

/* 12_�������㵥λ */
Stringinfo_t Menu_ParamSet_12_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_2},
	{16, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_ji},
	{64, 2, STR_ZH, (uint8_t*)str_zh_suan},
	{80, 2, STR_ZH, (uint8_t*)str_zh_dan},
	{96, 2, STR_ZH, (uint8_t*)str_zh_wei}
};

/* 13_����������� */
Stringinfo_t Menu_ParamSet_13_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_3},
	{16, 2, STR_ZH, (uint8_t*)str_zh_fan},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xiang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_shu_1},
	{64, 2, STR_ZH, (uint8_t*)str_zh_chu_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_yun},
	{96, 2, STR_ZH, (uint8_t*)str_zh_xu}
};

/* 14_����������� */
Stringinfo_t Menu_ParamSet_14_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_4},
	{16, 2, STR_ZH, (uint8_t*)str_zh_dian_1},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_shu_1},
	{64, 2, STR_ZH, (uint8_t*)str_zh_chu_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_lei},
	{96, 2, STR_ZH, (uint8_t*)str_zh_xing}
};

/* 15_���������ʽ */
Stringinfo_t Menu_ParamSet_15_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_5},
	{16, 2, STR_ZH, (uint8_t*)str_zh_mai},
	{32, 2, STR_ZH, (uint8_t*)str_zh_chong},
	{48, 2, STR_ZH, (uint8_t*)str_zh_shu_1},
	{64, 2, STR_ZH, (uint8_t*)str_zh_chu_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_fang},
	{96, 2, STR_ZH, (uint8_t*)str_zh_shi_2}
};

/* 16_���嵥λ���� */
Stringinfo_t Menu_ParamSet_16_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_6},
	{16, 2, STR_ZH, (uint8_t*)str_zh_mai},
	{32, 2, STR_ZH, (uint8_t*)str_zh_chong},
	{48, 2, STR_ZH, (uint8_t*)str_zh_dan},
	{64, 2, STR_ZH, (uint8_t*)str_zh_wei},
	{80, 2, STR_ZH, (uint8_t*)str_zh_dang},
	{96, 2, STR_ZH, (uint8_t*)str_zh_liang}
};

/* 17_Ƶ�������Χ */
Stringinfo_t Menu_ParamSet_17_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_7},
	{16, 2, STR_ZH, (uint8_t*)str_zh_pin},
	{32, 2, STR_ZH, (uint8_t*)str_zh_lv},
	{48, 2, STR_ZH, (uint8_t*)str_zh_shu_1},
	{64, 2, STR_ZH, (uint8_t*)str_zh_chu_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_fan_1},
	{96, 2, STR_ZH, (uint8_t*)str_zh_wei_1}
};

/* 18_�չܱ������� */
Stringinfo_t Menu_ParamSet_18_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_8},
	{16, 2, STR_ZH, (uint8_t*)str_zh_kong},
	{32, 2, STR_ZH, (uint8_t*)str_zh_guan},
	{48, 2, STR_ZH, (uint8_t*)str_zh_bao},
	{64, 2, STR_ZH, (uint8_t*)str_zh_jing_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_yun},
	{96, 2, STR_ZH, (uint8_t*)str_zh_xu}
};

/* 19_�չܱ�����ֵ */
Stringinfo_t Menu_ParamSet_19_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_9},
	{16, 2, STR_ZH, (uint8_t*)str_zh_kong},
	{32, 2, STR_ZH, (uint8_t*)str_zh_guan},
	{48, 2, STR_ZH, (uint8_t*)str_zh_bao},
	{64, 2, STR_ZH, (uint8_t*)str_zh_jing_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_yu_1},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zhi}
};

/* 20_���ޱ������� */
Stringinfo_t Menu_ParamSet_20_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_0},
	{16, 2, STR_ZH, (uint8_t*)str_zh_shang},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xian_1},
	{48, 2, STR_ZH, (uint8_t*)str_zh_bao},
	{64, 2, STR_ZH, (uint8_t*)str_zh_jing_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_yun},
	{96, 2, STR_ZH, (uint8_t*)str_zh_xu}
};

/* 21_���ޱ�����ֵ */
Stringinfo_t Menu_ParamSet_21_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_1},
	{16, 2, STR_ZH, (uint8_t*)str_zh_shang},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xian_1},
	{48, 2, STR_ZH, (uint8_t*)str_zh_bao},
	{64, 2, STR_ZH, (uint8_t*)str_zh_jing_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zhi}
};

/* 22_���ޱ������� */
Stringinfo_t Menu_ParamSet_22_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_2},
	{16, 2, STR_ZH, (uint8_t*)str_zh_xia},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xian_1},
	{48, 2, STR_ZH, (uint8_t*)str_zh_bao},
	{64, 2, STR_ZH, (uint8_t*)str_zh_jing_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_yun},
	{96, 2, STR_ZH, (uint8_t*)str_zh_xu}
};

/* 23_���ޱ�����ֵ */
Stringinfo_t Menu_ParamSet_23_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_3},
	{16, 2, STR_ZH, (uint8_t*)str_zh_xia},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xian_1},
	{48, 2, STR_ZH, (uint8_t*)str_zh_bao},
	{64, 2, STR_ZH, (uint8_t*)str_zh_jing_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zhi}
};

/* 24_���ű������� */
Stringinfo_t Menu_ParamSet_24_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_4},
	{16, 2, STR_ZH, (uint8_t*)str_zh_li},
	{32, 2, STR_ZH, (uint8_t*)str_zh_ci},
	{48, 2, STR_ZH, (uint8_t*)str_zh_bao},
	{64, 2, STR_ZH, (uint8_t*)str_zh_jing_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_yun},
	{96, 2, STR_ZH, (uint8_t*)str_zh_xu}
};

/* 25_������������ */
Stringinfo_t Menu_ParamSet_25_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_5},
	{16, 2, STR_ZH, (uint8_t*)str_zh_zong},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_qing},
	{64, 2, STR_ZH, (uint8_t*)str_zh_ling},
	{80, 2, STR_ZH, (uint8_t*)str_zh_mi},
	{96, 2, STR_ZH, (uint8_t*)str_zh_ma}
};

/* 26_����������1 */
Stringinfo_t Menu_ParamSet_26_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_6},
	{16, 2, STR_ZH, (uint8_t*)str_zh_chuan},
	{32, 2, STR_ZH, (uint8_t*)str_zh_gan},
	{48, 2, STR_ZH, (uint8_t*)str_zh_qi},
	{64, 2, STR_ZH, (uint8_t*)str_zh_bian},
	{80, 2, STR_ZH, (uint8_t*)str_zh_ma},
	{96, 2, STR_EN, (uint8_t*)str_en_1}
};


/* 27_����������2 */
Stringinfo_t Menu_ParamSet_27_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_7},
	{16, 2, STR_ZH, (uint8_t*)str_zh_chuan},
	{32, 2, STR_ZH, (uint8_t*)str_zh_gan},
	{48, 2, STR_ZH, (uint8_t*)str_zh_qi},
	{64, 2, STR_ZH, (uint8_t*)str_zh_bian},
	{80, 2, STR_ZH, (uint8_t*)str_zh_ma},
	{96, 2, STR_EN, (uint8_t*)str_en_2}
};

/* 28_���ŷ�ʽѡ�� */
Stringinfo_t Menu_ParamSet_28_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_8},
	{16, 2, STR_ZH, (uint8_t*)str_zh_li},
	{32, 2, STR_ZH, (uint8_t*)str_zh_ci},
	{48, 2, STR_ZH, (uint8_t*)str_zh_fang},
	{64, 2, STR_ZH, (uint8_t*)str_zh_shi_2},
	{80, 2, STR_ZH, (uint8_t*)str_zh_xuan},
	{96, 2, STR_ZH, (uint8_t*)str_zh_ze}
};

/* 29_������ϵ��ֵ */
Stringinfo_t Menu_ParamSet_29_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_9},
	{16, 2, STR_ZH, (uint8_t*)str_zh_chuan},
	{32, 2, STR_ZH, (uint8_t*)str_zh_gan},
	{48, 2, STR_ZH, (uint8_t*)str_zh_qi},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xi},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zhi}
};

/* 30_����ϵ��0 */
Stringinfo_t Menu_ParamSet_30_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_0},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xi},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{96, 2, STR_EN, (uint8_t*)str_en_0}
};

/* 31_����������0 */
Stringinfo_t Menu_ParamSet_31_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_1},
	{16, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{64, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{80, 2, STR_ZH, (uint8_t*)str_zh_dian},
	{96, 2, STR_EN, (uint8_t*)str_en_0}
};

/* 32_����ϵ��1 */
Stringinfo_t Menu_ParamSet_32_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_2},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xi},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{96, 2, STR_EN, (uint8_t*)str_en_1}
};

/* 33_����������1 */
Stringinfo_t Menu_ParamSet_33_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_3},
	{16, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{64, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{80, 2, STR_ZH, (uint8_t*)str_zh_dian},
	{96, 2, STR_EN, (uint8_t*)str_en_1}
};

/* 34_����ϵ��2 */
Stringinfo_t Menu_ParamSet_34_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_4},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xi},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{96, 2, STR_EN, (uint8_t*)str_en_2}
};

/* 35_����������2 */
Stringinfo_t Menu_ParamSet_35_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_5},
	{16, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{64, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{80, 2, STR_ZH, (uint8_t*)str_zh_dian},
	{96, 2, STR_EN, (uint8_t*)str_en_2}
};

/* 36_����ϵ��3 */
Stringinfo_t Menu_ParamSet_36_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_6},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xi},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{96, 2, STR_EN, (uint8_t*)str_en_3}
};

/* 37_����������3 */
Stringinfo_t Menu_ParamSet_37_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_7},
	{16, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{64, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{80, 2, STR_ZH, (uint8_t*)str_zh_dian},
	{96, 2, STR_EN, (uint8_t*)str_en_3}
};

/* 38_����ϵ��4 */
Stringinfo_t Menu_ParamSet_38_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_8},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xi},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{96, 2, STR_EN, (uint8_t*)str_en_4}
};

/* 39_�����ۼ��趨 */
Stringinfo_t Menu_ParamSet_39_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{8, 0, STR_EN, (uint8_t*)str_en_9},
	{16, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xiang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_lei_1},
	{64, 2, STR_ZH, (uint8_t*)str_zh_ji_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_she},
	{96, 2, STR_ZH, (uint8_t*)str_zh_ding}
};

/* 40_�����ۼ��趨 */
Stringinfo_t Menu_ParamSet_40_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{8, 0, STR_EN, (uint8_t*)str_en_0},
	{16, 2, STR_ZH, (uint8_t*)str_zh_fan},
	{32, 2, STR_ZH, (uint8_t*)str_zh_xiang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_lei_1},
	{64, 2, STR_ZH, (uint8_t*)str_zh_ji_1},
	{80, 2, STR_ZH, (uint8_t*)str_zh_she},
	{96, 2, STR_ZH, (uint8_t*)str_zh_ding}
};

/* 41_����������� */
Stringinfo_t Menu_ParamSet_41_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{8, 0, STR_EN, (uint8_t*)str_en_1},
	{16, 2, STR_ZH, (uint8_t*)str_zh_dian_1},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_ling},
	{64, 2, STR_ZH, (uint8_t*)str_zh_dian},
	{80, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zheng}
};

/* 42_������������ */
Stringinfo_t Menu_ParamSet_42_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{8, 0, STR_EN, (uint8_t*)str_en_2},
	{16, 2, STR_ZH, (uint8_t*)str_zh_dian_1},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_man},
	{64, 2, STR_ZH, (uint8_t*)str_zh_du},
	{80, 2, STR_ZH, (uint8_t*)str_zh_xiu},
	{96, 2, STR_ZH, (uint8_t*)str_zh_zheng}
};

/* 43_�����궨ϵ�� */
Stringinfo_t Menu_ParamSet_43_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{8, 0, STR_EN, (uint8_t*)str_en_3},
	{16, 2, STR_ZH, (uint8_t*)str_zh_chu_1},
	{32, 2, STR_ZH, (uint8_t*)str_zh_chang},
	{48, 2, STR_ZH, (uint8_t*)str_zh_biao_1},
	{64, 2, STR_ZH, (uint8_t*)str_zh_ding},
	{80, 2, STR_ZH, (uint8_t*)str_zh_xi},
	{96, 2, STR_ZH, (uint8_t*)str_zh_shu}
};

/* 44_�趨�ܶ� */
Stringinfo_t Menu_ParamSet_44_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{8, 0, STR_EN, (uint8_t*)str_en_4},
	{32, 2, STR_ZH, (uint8_t*)str_zh_she},
	{48, 2, STR_ZH, (uint8_t*)str_zh_ding},
	{64, 2, STR_ZH, (uint8_t*)str_zh_mi},
	{80, 2, STR_ZH, (uint8_t*)str_zh_du}
};

/* 45_Զ�����ʱ�� */
Stringinfo_t Menu_ParamSet_45_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{8, 0, STR_EN, (uint8_t*)str_en_5},
	{16, 2, STR_ZH, (uint8_t*)str_zh_yuan},
	{32, 2, STR_ZH, (uint8_t*)str_zh_chuan},
	{48, 2, STR_ZH, (uint8_t*)str_zh_jian},
	{64, 2, STR_ZH, (uint8_t*)str_zh_ge},
	{80, 2, STR_ZH, (uint8_t*)str_zh_shi},
	{96, 2, STR_ZH, (uint8_t*)str_zh_jian}
};

/* ���� */
Stringinfo_t Menu_L3_00_zh[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_zh_zhong},
	{64, 2, STR_ZH, (uint8_t*)str_zh_wen}
};

/* English */
Stringinfo_t Menu_L3_01_en[] =
{
	{32, 2, STR_EN, (uint8_t*)str_en_E},
	{40, 2, STR_EN, (uint8_t*)str_en_n},
	{48, 2, STR_EN, (uint8_t*)str_en_g},
	{56, 2, STR_EN, (uint8_t*)str_en_l},
	{64, 2, STR_EN, (uint8_t*)str_en_i},
	{72, 2, STR_EN, (uint8_t*)str_en_s},
	{80, 2, STR_EN, (uint8_t*)str_en_h},
};

/* 001 */
Stringinfo_t Menu_L3_02_en[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_0},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
};

/* Number Table */
uint8_t* Menu_Number_Tbl[] =
{
	{(uint8_t*)str_en_0},
	{(uint8_t*)str_en_1},
	{(uint8_t*)str_en_2},
	{(uint8_t*)str_en_3},
	{(uint8_t*)str_en_4},
	{(uint8_t*)str_en_5},
	{(uint8_t*)str_en_6},
	{(uint8_t*)str_en_7},
	{(uint8_t*)str_en_8},
	{(uint8_t*)str_en_9}
};

MenuList_t Menu_level0_list_zh[MENU_L0_MAX] =
{
	{12, Menu_Init},		/* ��ʼ���� */
	{19, Menu_AutoMeasure},	/* �Զ��������� */
};

MenuList_t Menu_level1_list_zh[MENU_L1_MAX] =
{
	{4, Menu_ParamSet_zh},	/* �������� */
	{4, Menu_TotalClr_zh},	/* �������� */
};

MenuList_t Menu_level2_list_zh[MENU_L2_MAX] =
{
	{3, Menu_ParamSet_01_zh},	/* ���� */
	{7, Menu_ParamSet_02_zh},	/* �Ǳ�ͨѶ��ַ */
	{7, Menu_ParamSet_03_zh},	/* �Ǳ�ͨѶ�ٶ� */
	{7, Menu_ParamSet_04_zh},	/* �����ܵ��ھ� */
	{5, Menu_ParamSet_05_zh},	/* ������λ */
	{7, Menu_ParamSet_06_zh},	/* �Ǳ��������� */
	{7, Menu_ParamSet_07_zh},	/* ��������ʱ�� */
	{7, Menu_ParamSet_08_zh},	/* ������������ */
	{7, Menu_ParamSet_09_zh},	/* ����������� */
	{8, Menu_ParamSet_10_zh},	/* С�ź��г��� */
	{8, Menu_ParamSet_11_zh},	/* �����г���ʾ */
	{8, Menu_ParamSet_12_zh},	/* �������㵥λ */
	{8, Menu_ParamSet_13_zh},	/* ����������� */
	{8, Menu_ParamSet_14_zh},	/* ����������� */
	{8, Menu_ParamSet_15_zh},	/* ���������ʽ */
	{8, Menu_ParamSet_16_zh},	/* ���嵥λ���� */
	{8, Menu_ParamSet_17_zh},	/* Ƶ�������Χ */
	{8, Menu_ParamSet_18_zh},	/* �չܱ������� */
	{8, Menu_ParamSet_19_zh},	/* �չܱ�����ֵ */
	{8, Menu_ParamSet_20_zh},	/* ���ޱ������� */
	{8, Menu_ParamSet_21_zh},	/* ���ޱ�����ֵ */
	{8, Menu_ParamSet_22_zh},	/* ���ޱ������� */
	{8, Menu_ParamSet_23_zh},	/* ���ޱ�����ֵ */
	{8, Menu_ParamSet_24_zh},	/* ���ű������� */
	{8, Menu_ParamSet_25_zh},	/* ������������ */
	{8, Menu_ParamSet_26_zh},	/* ����������1 */
	{8, Menu_ParamSet_27_zh},	/* ����������2 */
	{8, Menu_ParamSet_28_zh},	/* ���ŷ�ʽѡ�� */
	{8, Menu_ParamSet_29_zh},	/* ������ϵ��ֵ */
	{7, Menu_ParamSet_30_zh},	/* ����ϵ��0 */
	{8, Menu_ParamSet_31_zh},	/* ����������0 */
	{7, Menu_ParamSet_32_zh},	/* ����ϵ��1 */
	{8, Menu_ParamSet_33_zh},	/* ����������1 */
	{7, Menu_ParamSet_34_zh},	/* ����ϵ��2 */
	{8, Menu_ParamSet_35_zh},	/* ����������2 */
	{7, Menu_ParamSet_36_zh},	/* ����ϵ��3 */
	{8, Menu_ParamSet_37_zh},	/* ����������3 */
	{7, Menu_ParamSet_38_zh},	/* ����ϵ��4 */
	{8, Menu_ParamSet_39_zh},	/* �����ۼ��趨 */
	{8, Menu_ParamSet_40_zh},	/* �����ۼ��趨 */
	{8, Menu_ParamSet_41_zh},	/* ����������� */
	{8, Menu_ParamSet_42_zh},	/* ������������ */
	{8, Menu_ParamSet_43_zh},	/* �����궨ϵ�� */
	{6, Menu_ParamSet_44_zh},	/* �趨�ܶ� */
	{8, Menu_ParamSet_45_zh},	/* Զ�����ʱ�� */
};

MenuList_t Menu_level3_list_zh[MENU_L3_MAX] =
{
	{2, Menu_L3_00_zh},	/* ���� */
	{7, Menu_L3_01_en},	/* English */
	{3, Menu_L3_02_en},	/* �Ǳ�ͨѶ��ַ */
};
