#include "common.h"
#include "lcd_screen_data.h"
#include "lcd_string_en.h"
#include "lcd_string_zh.h"

/********************************************
 *     各画面构成信息
 ********************************************/

/* 初始画面 */
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

/* 初始画面(....) */
Stringinfo_t Menu_Init_Dot[] =
{
	{40, 4, STR_EN, (uint8_t*)str_en_dot},
	{48, 4, STR_EN, (uint8_t*)str_en_dot},
	{56, 4, STR_EN, (uint8_t*)str_en_dot},
	{64, 4, STR_EN, (uint8_t*)str_en_dot}
};

/* 自动测量画面 */
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

/* 密码 */
Stringinfo_t Menu_Password_zh[] =
{
	{44, 4, STR_EN, (uint8_t*)str_en_0},
	{52, 4, STR_EN, (uint8_t*)str_en_0},
	{60, 4, STR_EN, (uint8_t*)str_en_0},
	{68, 4, STR_EN, (uint8_t*)str_en_0},
	{76, 4, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_ZH, (uint8_t*)str_zh_mi},
	{64, 2, STR_ZH, (uint8_t*)str_zh_ma}
};

/* 密码设定 */
Stringinfo_t Menu_PasswordSet_zh[] =
{
	{44, 2, STR_EN, (uint8_t*)str_en_0},
	{52, 2, STR_EN, (uint8_t*)str_en_0},
	{60, 2, STR_EN, (uint8_t*)str_en_0},
	{68, 2, STR_EN, (uint8_t*)str_en_0},
	{76, 2, STR_EN, (uint8_t*)str_en_0}
};

/* 参数设置 */
Stringinfo_t Menu_ParamSet_zh[] =
{
	{32, 2, STR_ZH, (uint8_t*)str_zh_can},
	{48, 2, STR_ZH, (uint8_t*)str_zh_shu},
	{64, 2, STR_ZH, (uint8_t*)str_zh_she},
	{80, 2, STR_ZH, (uint8_t*)str_zh_zhi_1}
};

/* 总量清零 */
Stringinfo_t Menu_TotalClr_zh[] =
{
	{32, 2, STR_ZH, (uint8_t*)str_zh_zong},
	{48, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{64, 2, STR_ZH, (uint8_t*)str_zh_qing},
	{80, 2, STR_ZH, (uint8_t*)str_zh_ling}
};

/* 01_语言 */
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

/* 02_仪表通讯地址 */
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

/* 02_Commaddress */
Stringinfo_t Menu_ParamSet_02_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{24, 2, STR_EN, (uint8_t*)str_en_C},
	{32, 2, STR_EN, (uint8_t*)str_en_o},
	{40, 2, STR_EN, (uint8_t*)str_en_m},
	{48, 2, STR_EN, (uint8_t*)str_en_m},
	{56, 2, STR_EN, (uint8_t*)str_en_a},
	{64, 2, STR_EN, (uint8_t*)str_en_d},
	{72, 2, STR_EN, (uint8_t*)str_en_d},
	{80, 2, STR_EN, (uint8_t*)str_en_r},
	{88, 2, STR_EN, (uint8_t*)str_en_e},
	{96, 2, STR_EN, (uint8_t*)str_en_s},
	{104, 2, STR_EN, (uint8_t*)str_en_s}
};

/* 03_仪表通讯速度 */
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

/* 03_Baud Rate */
Stringinfo_t Menu_ParamSet_03_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_3},
	{32, 2, STR_EN, (uint8_t*)str_en_B},
	{40, 2, STR_EN, (uint8_t*)str_en_a},
	{48, 2, STR_EN, (uint8_t*)str_en_u},
	{56, 2, STR_EN, (uint8_t*)str_en_d},
	{72, 2, STR_EN, (uint8_t*)str_en_R},
	{80, 2, STR_EN, (uint8_t*)str_en_a},
	{88, 2, STR_EN, (uint8_t*)str_en_t},
	{96, 2, STR_EN, (uint8_t*)str_en_e}
};

/* 04_测量管道口径 */
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

/* 04_Snsr Size */
Stringinfo_t Menu_ParamSet_04_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{32, 2, STR_EN, (uint8_t*)str_en_S},
	{40, 2, STR_EN, (uint8_t*)str_en_n},
	{48, 2, STR_EN, (uint8_t*)str_en_s},
	{56, 2, STR_EN, (uint8_t*)str_en_r},
	{72, 2, STR_EN, (uint8_t*)str_en_S},
	{80, 2, STR_EN, (uint8_t*)str_en_i},
	{88, 2, STR_EN, (uint8_t*)str_en_z},
	{96, 2, STR_EN, (uint8_t*)str_en_e}
};

/* 05_流量单位 */
Stringinfo_t Menu_ParamSet_05_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_5},
	{32, 2, STR_ZH, (uint8_t*)str_zh_liu},
	{48, 2, STR_ZH, (uint8_t*)str_zh_liang},
	{64, 2, STR_ZH, (uint8_t*)str_zh_dan},
	{80, 2, STR_ZH, (uint8_t*)str_zh_wei}
};

/* 05_Flow Unit */
Stringinfo_t Menu_ParamSet_05_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_5},
	{32, 2, STR_EN, (uint8_t*)str_en_F},
	{40, 2, STR_EN, (uint8_t*)str_en_l},
	{48, 2, STR_EN, (uint8_t*)str_en_o},
	{56, 2, STR_EN, (uint8_t*)str_en_w},
	{72, 2, STR_EN, (uint8_t*)str_en_U},
	{80, 2, STR_EN, (uint8_t*)str_en_n},
	{88, 2, STR_EN, (uint8_t*)str_en_i},
	{96, 2, STR_EN, (uint8_t*)str_en_t}
};

/* 06_仪表量程设置 */
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

/* 06_Flow Range */
Stringinfo_t Menu_ParamSet_06_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_6},
	{24, 2, STR_EN, (uint8_t*)str_en_F},
	{32, 2, STR_EN, (uint8_t*)str_en_l},
	{40, 2, STR_EN, (uint8_t*)str_en_o},
	{48, 2, STR_EN, (uint8_t*)str_en_w},
	{64, 2, STR_EN, (uint8_t*)str_en_R},
	{72, 2, STR_EN, (uint8_t*)str_en_a},
	{80, 2, STR_EN, (uint8_t*)str_en_n},
	{88, 2, STR_EN, (uint8_t*)str_en_g},
	{96, 2, STR_EN, (uint8_t*)str_en_e}
};

/* 07_测量阻尼时间 */
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

/* 07_Damp */
Stringinfo_t Menu_ParamSet_07_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_7},
	{48, 2, STR_EN, (uint8_t*)str_en_D},
	{56, 2, STR_EN, (uint8_t*)str_en_a},
	{64, 2, STR_EN, (uint8_t*)str_en_m},
	{72, 2, STR_EN, (uint8_t*)str_en_p}
};

/* 08_流量方向择项 */
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

/* 08_Flow Direct */
Stringinfo_t Menu_ParamSet_08_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_8},
	{24, 2, STR_EN, (uint8_t*)str_en_F},
	{32, 2, STR_EN, (uint8_t*)str_en_l},
	{40, 2, STR_EN, (uint8_t*)str_en_o},
	{48, 2, STR_EN, (uint8_t*)str_en_w},
	{64, 2, STR_EN, (uint8_t*)str_en_D},
	{72, 2, STR_EN, (uint8_t*)str_en_i},
	{80, 2, STR_EN, (uint8_t*)str_en_r},
	{88, 2, STR_EN, (uint8_t*)str_en_e},
	{96, 2, STR_EN, (uint8_t*)str_en_c},
	{104, 2, STR_EN, (uint8_t*)str_en_t}
};

/* 09_流量零点修正 */
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

/* 09_Flow Zero */
Stringinfo_t Menu_ParamSet_09_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_9},
	{32, 2, STR_EN, (uint8_t*)str_en_F},
	{40, 2, STR_EN, (uint8_t*)str_en_l},
	{48, 2, STR_EN, (uint8_t*)str_en_o},
	{56, 2, STR_EN, (uint8_t*)str_en_w},
	{72, 2, STR_EN, (uint8_t*)str_en_Z},
	{80, 2, STR_EN, (uint8_t*)str_en_e},
	{88, 2, STR_EN, (uint8_t*)str_en_r},
	{96, 2, STR_EN, (uint8_t*)str_en_o}
};

/* 10_小信号切除点 */
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

/* 10_Flow Cutoff */
Stringinfo_t Menu_ParamSet_10_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_0},
	{24, 2, STR_EN, (uint8_t*)str_en_F},
	{32, 2, STR_EN, (uint8_t*)str_en_l},
	{40, 2, STR_EN, (uint8_t*)str_en_o},
	{48, 2, STR_EN, (uint8_t*)str_en_w},
	{64, 2, STR_EN, (uint8_t*)str_en_C},
	{72, 2, STR_EN, (uint8_t*)str_en_u},
	{80, 2, STR_EN, (uint8_t*)str_en_t},
	{88, 2, STR_EN, (uint8_t*)str_en_o},
	{96, 2, STR_EN, (uint8_t*)str_en_f},
	{104, 2, STR_EN, (uint8_t*)str_en_f}
};

/* 11_允许切除显示 */
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

/* 11_Cutoff Ena */
Stringinfo_t Menu_ParamSet_11_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_1},
	{24, 2, STR_EN, (uint8_t*)str_en_C},
	{32, 2, STR_EN, (uint8_t*)str_en_u},
	{40, 2, STR_EN, (uint8_t*)str_en_t},
	{48, 2, STR_EN, (uint8_t*)str_en_o},
	{56, 2, STR_EN, (uint8_t*)str_en_f},
	{64, 2, STR_EN, (uint8_t*)str_en_f},
	{80, 2, STR_EN, (uint8_t*)str_en_E},
	{88, 2, STR_EN, (uint8_t*)str_en_n},
	{96, 2, STR_EN, (uint8_t*)str_en_a}
};

/* 12_流量积算单位 */
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

/* 12_Total Unit */
Stringinfo_t Menu_ParamSet_12_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_2},
	{24, 2, STR_EN, (uint8_t*)str_en_T},
	{32, 2, STR_EN, (uint8_t*)str_en_o},
	{40, 2, STR_EN, (uint8_t*)str_en_t},
	{48, 2, STR_EN, (uint8_t*)str_en_a},
	{56, 2, STR_EN, (uint8_t*)str_en_l},
	{72, 2, STR_EN, (uint8_t*)str_en_U},
	{80, 2, STR_EN, (uint8_t*)str_en_n},
	{88, 2, STR_EN, (uint8_t*)str_en_i},
	{96, 2, STR_EN, (uint8_t*)str_en_t}
};

/* 13_反向输出允许 */
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

/* 13_SegmaN Ena */
Stringinfo_t Menu_ParamSet_13_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_3},
	{24, 2, STR_EN, (uint8_t*)str_en_S},
	{32, 2, STR_EN, (uint8_t*)str_en_e},
	{40, 2, STR_EN, (uint8_t*)str_en_g},
	{48, 2, STR_EN, (uint8_t*)str_en_m},
	{56, 2, STR_EN, (uint8_t*)str_en_a},
	{64, 2, STR_EN, (uint8_t*)str_en_N},
	{80, 2, STR_EN, (uint8_t*)str_en_E},
	{88, 2, STR_EN, (uint8_t*)str_en_n},
	{96, 2, STR_EN, (uint8_t*)str_en_a}
};

/* 14_电流输出类型 */
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

/* 14_Analog Type */
Stringinfo_t Menu_ParamSet_14_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_4},
	{24, 2, STR_EN, (uint8_t*)str_en_A},
	{32, 2, STR_EN, (uint8_t*)str_en_n},
	{40, 2, STR_EN, (uint8_t*)str_en_a},
	{48, 2, STR_EN, (uint8_t*)str_en_l},
	{56, 2, STR_EN, (uint8_t*)str_en_o},
	{64, 2, STR_EN, (uint8_t*)str_en_g},
	{80, 2, STR_EN, (uint8_t*)str_en_T},
	{88, 2, STR_EN, (uint8_t*)str_en_y},
	{96, 2, STR_EN, (uint8_t*)str_en_p},
	{104, 2, STR_EN, (uint8_t*)str_en_e}
};

/* 15_脉冲输出方式 */
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

/* 15_Pulse Type */
Stringinfo_t Menu_ParamSet_15_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_5},
	{24, 2, STR_EN, (uint8_t*)str_en_P},
	{32, 2, STR_EN, (uint8_t*)str_en_u},
	{40, 2, STR_EN, (uint8_t*)str_en_l},
	{48, 2, STR_EN, (uint8_t*)str_en_s},
	{56, 2, STR_EN, (uint8_t*)str_en_e},
	{72, 2, STR_EN, (uint8_t*)str_en_T},
	{80, 2, STR_EN, (uint8_t*)str_en_y},
	{88, 2, STR_EN, (uint8_t*)str_en_p},
	{96, 2, STR_EN, (uint8_t*)str_en_e}
};

/* 16_脉冲单位当量 */
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

/* 16_Pulse Fact */
Stringinfo_t Menu_ParamSet_16_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_6},
	{24, 2, STR_EN, (uint8_t*)str_en_P},
	{32, 2, STR_EN, (uint8_t*)str_en_u},
	{40, 2, STR_EN, (uint8_t*)str_en_l},
	{48, 2, STR_EN, (uint8_t*)str_en_s},
	{56, 2, STR_EN, (uint8_t*)str_en_e},
	{72, 2, STR_EN, (uint8_t*)str_en_F},
	{80, 2, STR_EN, (uint8_t*)str_en_a},
	{88, 2, STR_EN, (uint8_t*)str_en_c},
	{96, 2, STR_EN, (uint8_t*)str_en_t}
};

/* 17_频率输出范围 */
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

/* 17_Freque Max */
Stringinfo_t Menu_ParamSet_17_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_7},
	{24, 2, STR_EN, (uint8_t*)str_en_F},
	{32, 2, STR_EN, (uint8_t*)str_en_r},
	{40, 2, STR_EN, (uint8_t*)str_en_e},
	{48, 2, STR_EN, (uint8_t*)str_en_q},
	{56, 2, STR_EN, (uint8_t*)str_en_u},
	{64, 2, STR_EN, (uint8_t*)str_en_e},
	{80, 2, STR_EN, (uint8_t*)str_en_M},
	{88, 2, STR_EN, (uint8_t*)str_en_a},
	{96, 2, STR_EN, (uint8_t*)str_en_x}
};

/* 18_空管报警允许 */
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

/* 18_Mtsnsr Ena */
Stringinfo_t Menu_ParamSet_18_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_8},
	{24, 2, STR_EN, (uint8_t*)str_en_M},
	{32, 2, STR_EN, (uint8_t*)str_en_t},
	{40, 2, STR_EN, (uint8_t*)str_en_s},
	{48, 2, STR_EN, (uint8_t*)str_en_n},
	{56, 2, STR_EN, (uint8_t*)str_en_s},
	{64, 2, STR_EN, (uint8_t*)str_en_r},
	{80, 2, STR_EN, (uint8_t*)str_en_E},
	{88, 2, STR_EN, (uint8_t*)str_en_n},
	{96, 2, STR_EN, (uint8_t*)str_en_a}
};

/* 19_空管报警阈值 */
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

/* 19_Mtsnsr Trip */
Stringinfo_t Menu_ParamSet_19_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_1},
	{8, 0, STR_EN, (uint8_t*)str_en_9},
	{24, 2, STR_EN, (uint8_t*)str_en_M},
	{32, 2, STR_EN, (uint8_t*)str_en_t},
	{40, 2, STR_EN, (uint8_t*)str_en_s},
	{48, 2, STR_EN, (uint8_t*)str_en_n},
	{56, 2, STR_EN, (uint8_t*)str_en_s},
	{64, 2, STR_EN, (uint8_t*)str_en_r},
	{80, 2, STR_EN, (uint8_t*)str_en_T},
	{88, 2, STR_EN, (uint8_t*)str_en_r},
	{96, 2, STR_EN, (uint8_t*)str_en_i},
	{104, 2, STR_EN, (uint8_t*)str_en_p}
};

/* 20_上限报警允许 */
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

/* 21_上限报警数值 */
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

/* 21_Alm Hi Val */
Stringinfo_t Menu_ParamSet_21_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_1},
	{24, 2, STR_EN, (uint8_t*)str_en_A},
	{32, 2, STR_EN, (uint8_t*)str_en_l},
	{40, 2, STR_EN, (uint8_t*)str_en_m},
	{56, 2, STR_EN, (uint8_t*)str_en_H},
	{64, 2, STR_EN, (uint8_t*)str_en_i},
	{80, 2, STR_EN, (uint8_t*)str_en_V},
	{88, 2, STR_EN, (uint8_t*)str_en_a},
	{96, 2, STR_EN, (uint8_t*)str_en_l}
};

/* 22_下限报警允许 */
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

/* 23_下限报警数值 */
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

/* 24_励磁报警允许 */
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

/* 25_总量清零密码 */
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

/* 25_Clr Sum Key */
Stringinfo_t Menu_ParamSet_25_en[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_2},
	{8, 0, STR_EN, (uint8_t*)str_en_5},
	{24, 2, STR_EN, (uint8_t*)str_en_C},
	{32, 2, STR_EN, (uint8_t*)str_en_l},
	{40, 2, STR_EN, (uint8_t*)str_en_r},
	{56, 2, STR_EN, (uint8_t*)str_en_S},
	{64, 2, STR_EN, (uint8_t*)str_en_u},
	{72, 2, STR_EN, (uint8_t*)str_en_m},
	{88, 2, STR_EN, (uint8_t*)str_en_K},
	{96, 2, STR_EN, (uint8_t*)str_en_e},
	{104, 2, STR_EN, (uint8_t*)str_en_y}
};

/* 26_传感器编码1 */
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


/* 27_传感器编码2 */
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

/* 28_励磁方式选择 */
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

/* 29_传感器系数值 */
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

/* 30_修正系数0 */
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

/* 31_流量修正点0 */
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

/* 32_修正系数1 */
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

/* 33_流量修正点1 */
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

/* 34_修正系数2 */
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

/* 35_流量修正点2 */
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

/* 36_修正系数3 */
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

/* 37_流量修正点3 */
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

/* 38_修正系数4 */
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

/* 39_正向累计设定 */
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

/* 40_反向累计设定 */
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

/* 41_电流零点修正 */
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

/* 42_电流满度修正 */
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

/* 43_出厂标定系数 */
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

/* 44_设定密度 */
Stringinfo_t Menu_ParamSet_44_zh[] =
{
	{0, 0, STR_EN, (uint8_t*)str_en_4},
	{8, 0, STR_EN, (uint8_t*)str_en_4},
	{32, 2, STR_ZH, (uint8_t*)str_zh_she},
	{48, 2, STR_ZH, (uint8_t*)str_zh_ding},
	{64, 2, STR_ZH, (uint8_t*)str_zh_mi},
	{80, 2, STR_ZH, (uint8_t*)str_zh_du}
};

/* 45_远传间隔时间 */
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

/* 光标 */
Stringinfo_t Menu_Cursor_default = {72, 4, STR_EN, (uint8_t*)str_en_line};

/* 语言_中文 */
Stringinfo_t Menu_L3_00_Chn_zh[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_zh_zhong},
	{64, 2, STR_ZH, (uint8_t*)str_zh_wen}
};

/* 语言_English */
Stringinfo_t Menu_L3_00_Eng_en[] =
{
	{32, 2, STR_EN, (uint8_t*)str_en_E},
	{40, 2, STR_EN, (uint8_t*)str_en_n},
	{48, 2, STR_EN, (uint8_t*)str_en_g},
	{56, 2, STR_EN, (uint8_t*)str_en_l},
	{64, 2, STR_EN, (uint8_t*)str_en_i},
	{72, 2, STR_EN, (uint8_t*)str_en_s},
	{80, 2, STR_EN, (uint8_t*)str_en_h},
};

/* 仪表通讯地址_01 */
Stringinfo_t Menu_L3_01_Adr[] =
{
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_1},
};

/* 仪表通讯速度_2400 */
Stringinfo_t Menu_L3_02_2400[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_2},
	{56, 2, STR_EN, (uint8_t*)str_en_4},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
};

/* 仪表通讯速度_4800 */
Stringinfo_t Menu_L3_02_4800[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_4},
	{56, 2, STR_EN, (uint8_t*)str_en_8},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
};

/* 仪表通讯速度_9600 */
Stringinfo_t Menu_L3_02_9600[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_9},
	{56, 2, STR_EN, (uint8_t*)str_en_6},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
};

/* 仪表通讯速度_19200 */
Stringinfo_t Menu_L3_02_19200[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_1},
	{56, 2, STR_EN, (uint8_t*)str_en_9},
	{64, 2, STR_EN, (uint8_t*)str_en_2},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_EN, (uint8_t*)str_en_0},
};

/* 测量管道口径_0003 */
Stringinfo_t Menu_L3_03_Size[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_0},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_3},
};

/* 流量单位_L/s */
Stringinfo_t Menu_L3_04_Ls[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_L},
	{56, 2, STR_EN, (uint8_t*)str_en_line_1},
	{64, 2, STR_EN, (uint8_t*)str_en_s},
};

/* 流量单位_L/m */
Stringinfo_t Menu_L3_04_Lm[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_L},
	{56, 2, STR_EN, (uint8_t*)str_en_line_1},
	{64, 2, STR_EN, (uint8_t*)str_en_m},
};

/* 流量单位_L/h */
Stringinfo_t Menu_L3_04_Lh[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_L},
	{56, 2, STR_EN, (uint8_t*)str_en_line_1},
	{64, 2, STR_EN, (uint8_t*)str_en_h},
};

/* 流量单位_m3/s */
Stringinfo_t Menu_L3_04_m3s[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_pic_unit},
	{64, 2, STR_EN, (uint8_t*)str_en_line_1},
	{72, 2, STR_EN, (uint8_t*)str_en_s},
};

/* 流量单位_m3/m */
Stringinfo_t Menu_L3_04_m3m[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_pic_unit},
	{64, 2, STR_EN, (uint8_t*)str_en_line_1},
	{72, 2, STR_EN, (uint8_t*)str_en_m},
};

/* 仪表量程设置_00000 */
Stringinfo_t Menu_L3_05_Range[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_0},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_EN, (uint8_t*)str_en_0},
};

/* 测量阻尼时间_01 */
Stringinfo_t Menu_L3_06_Damp[] =
{
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_1},
};

/* 流量方向择项_正向 */
Stringinfo_t Menu_L3_07_Forward_zh[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_zh_zheng},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xiang},
};

/* 流量方向择项_反向 */
Stringinfo_t Menu_L3_07_Backward_zh[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_zh_fan},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xiang},
};

/* 流量零点修正±0000 */
Stringinfo_t Menu_L3_08_Flowzero[] =
{
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_EN, (uint8_t*)str_en_0},
	{40, 2, STR_ZH, (uint8_t*)str_pic_plusminus},
};

/* 小信号切除点000.00% */
Stringinfo_t Menu_L3_09_Cutoff[] =
{
	{32, 2, STR_EN, (uint8_t*)str_en_0},
	{40, 2, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{56, 2, STR_EN, (uint8_t*)str_en_dot},
	{80, 2, STR_EN, (uint8_t*)str_en_percent},
};

/* **_允许 */
Stringinfo_t Menu_L3_Allow_zh[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_zh_yun},
	{64, 2, STR_ZH, (uint8_t*)str_zh_xu},
};

/* **_禁止 */
Stringinfo_t Menu_L3_Forbid_zh[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_zh_jin},
	{64, 2, STR_ZH, (uint8_t*)str_zh_zhi_3},
};

/* 流量_0.001L */
Stringinfo_t Menu_L3_0001L[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_EN, (uint8_t*)str_en_dot},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_1},
	{80, 2, STR_EN, (uint8_t*)str_en_L},
};

/* 流量_0.010L */
Stringinfo_t Menu_L3_0010L[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_EN, (uint8_t*)str_en_dot},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_1},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_EN, (uint8_t*)str_en_L},
};

/* 流量_0.100L */
Stringinfo_t Menu_L3_0100L[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_EN, (uint8_t*)str_en_dot},
	{56, 2, STR_EN, (uint8_t*)str_en_1},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_EN, (uint8_t*)str_en_L},
};

/* 流量_1.000L */
Stringinfo_t Menu_L3_1000L[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_1},
	{48, 2, STR_EN, (uint8_t*)str_en_dot},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_EN, (uint8_t*)str_en_L},
};

/* 流量_0.001m3 */
Stringinfo_t Menu_L3_0001m3[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_EN, (uint8_t*)str_en_dot},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_1},
	{80, 2, STR_ZH, (uint8_t*)str_pic_unit},
};

/* 流量_0.010m3 */
Stringinfo_t Menu_L3_0010m3[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_EN, (uint8_t*)str_en_dot},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_1},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_ZH, (uint8_t*)str_pic_unit},
};

/* 流量_0.100m3 */
Stringinfo_t Menu_L3_0100m3[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_EN, (uint8_t*)str_en_dot},
	{56, 2, STR_EN, (uint8_t*)str_en_1},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_ZH, (uint8_t*)str_pic_unit},
};

/* 流量_1.000m3 */
Stringinfo_t Menu_L3_1000m3[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_1},
	{48, 2, STR_EN, (uint8_t*)str_en_dot},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_0},
	{80, 2, STR_ZH, (uint8_t*)str_pic_unit},
};

/* 电流输出类型0～10mA */
Stringinfo_t Menu_L3_0to10mA[] =
{
	{32, 2, STR_EN, (uint8_t*)str_en_0},
	{40, 2, STR_ZH, (uint8_t*)str_pic_curve},
	{56, 2, STR_EN, (uint8_t*)str_en_1},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_m},
	{80, 2, STR_EN, (uint8_t*)str_en_A},
};

/* 电流输出类型4～20mA */
Stringinfo_t Menu_L3_4to20mA[] =
{
	{32, 2, STR_EN, (uint8_t*)str_en_4},
	{40, 2, STR_ZH, (uint8_t*)str_pic_curve},
	{56, 2, STR_EN, (uint8_t*)str_en_2},
	{64, 2, STR_EN, (uint8_t*)str_en_0},
	{72, 2, STR_EN, (uint8_t*)str_en_m},
	{80, 2, STR_EN, (uint8_t*)str_en_A},
};

/* 脉冲输出方式_频率 */
Stringinfo_t Menu_L3_Frequency_zh[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_zh_pin},
	{64, 2, STR_ZH, (uint8_t*)str_zh_lv},
};

/* 脉冲输出方式_脉冲 */
Stringinfo_t Menu_L3_Pulse_zh[] =
{
	{48, 2, STR_ZH, (uint8_t*)str_zh_mai},
	{64, 2, STR_ZH, (uint8_t*)str_zh_chong},
};

/* 频率输出范围0001Hz */
Stringinfo_t Menu_L3_16_Freque[] =
{
	{40, 2, STR_EN, (uint8_t*)str_en_0},
	{48, 2, STR_EN, (uint8_t*)str_en_0},
	{56, 2, STR_EN, (uint8_t*)str_en_0},
	{64, 2, STR_EN, (uint8_t*)str_en_1},
	{72, 2, STR_EN, (uint8_t*)str_en_H},
	{80, 2, STR_EN, (uint8_t*)str_en_z},
};

/* 空管报警阈值59999 */
Stringinfo_t Menu_L3_18_Mtsnsr[] =
{
	{48, 2, STR_EN, (uint8_t*)str_en_5},
	{56, 2, STR_EN, (uint8_t*)str_en_9},
	{64, 2, STR_EN, (uint8_t*)str_en_9},
	{72, 2, STR_EN, (uint8_t*)str_en_9},
	{80, 2, STR_EN, (uint8_t*)str_en_9},
};

/********** 参数设置子菜单画面构成信息 ********/
/* 1.语言 */
MenuList_t Menu_level3_00_zh[] =
{
	{numof(Menu_L3_00_Chn_zh), Menu_L3_00_Chn_zh},	/* 中文 */
	{numof(Menu_L3_00_Eng_en), Menu_L3_00_Eng_en},	/* English */
};

/* 2.仪表通讯地址 */
MenuList_t Menu_level3_01_zh[] =
{
	{numof(Menu_L3_01_Adr), Menu_L3_01_Adr},	/* 仪表通讯地址 */
};

/* 3.仪表通讯速度 */
MenuList_t Menu_level3_02_zh[] =
{
	{numof(Menu_L3_02_2400), Menu_L3_02_2400},		/* 2400 */
	{numof(Menu_L3_02_4800), Menu_L3_02_4800},		/* 4800 */
	{numof(Menu_L3_02_9600), Menu_L3_02_9600},		/* 9600 */
	{numof(Menu_L3_02_19200), Menu_L3_02_19200},	/* 19200 */
};

/* 4.测量管道口径 */
MenuList_t Menu_level3_03_zh[] =
{
	{numof(Menu_L3_03_Size), Menu_L3_03_Size},	/* 测量管道口径 */
};

/* 5.流量单位 */
MenuList_t Menu_level3_04_zh[] =
{
	{numof(Menu_L3_04_Ls), Menu_L3_04_Ls},		/* L/s */
	{numof(Menu_L3_04_Lm), Menu_L3_04_Lm},		/* L/m */
	{numof(Menu_L3_04_Lh), Menu_L3_04_Lh},		/* L/h */
	{numof(Menu_L3_04_m3s), Menu_L3_04_m3s},	/* m3/s */
	{numof(Menu_L3_04_m3m), Menu_L3_04_m3m},	/* m3/m */
};

/* 6.仪表量程设置 */
MenuList_t Menu_level3_05_zh[] =
{
	{numof(Menu_L3_05_Range), Menu_L3_05_Range},	/* 仪表量程设置 */
};

/* 7.测量阻尼时间 */
MenuList_t Menu_level3_06_zh[] =
{
	{numof(Menu_L3_06_Damp), Menu_L3_06_Damp},		/* 测量阻尼时间 */
};

/* 8.流量方向择项 */
MenuList_t Menu_level3_07_zh[] =
{
	{numof(Menu_L3_07_Forward_zh), Menu_L3_07_Forward_zh},		/* 正向 */
	{numof(Menu_L3_07_Backward_zh), Menu_L3_07_Backward_zh},	/* 反向 */
};

/* 9.流量零点修正 */
MenuList_t Menu_level3_08_zh[] =
{
	{numof(Menu_L3_08_Flowzero), Menu_L3_08_Flowzero},	/* 流量零点修正 */
};

/* 10.小信号切除点 */
MenuList_t Menu_level3_09_zh[] =
{
	{numof(Menu_L3_09_Cutoff), Menu_L3_09_Cutoff},	/* 小信号切除点 */
};

/* 11.允许切除显示 */
MenuList_t Menu_level3_10_zh[] =
{
	{numof(Menu_L3_Allow_zh), Menu_L3_Allow_zh},	/* 允许 */
	{numof(Menu_L3_Forbid_zh), Menu_L3_Forbid_zh},	/* 禁止 */
};

/* 12.流量积算单位 */
MenuList_t Menu_level3_11_zh[] =
{
	{numof(Menu_L3_0001L), Menu_L3_0001L},		/* 0.001L */
	{numof(Menu_L3_0010L), Menu_L3_0010L},		/* 0.010L */
	{numof(Menu_L3_0100L), Menu_L3_0100L},		/* 0.100L */
	{numof(Menu_L3_1000L), Menu_L3_1000L},		/* 1.000L */
	{numof(Menu_L3_0001m3), Menu_L3_0001m3},	/* 0.001m3 */
	{numof(Menu_L3_0010m3), Menu_L3_0010m3},	/* 0.010m3 */
	{numof(Menu_L3_0100m3), Menu_L3_0100m3},	/* 0.100m3 */
	{numof(Menu_L3_1000m3), Menu_L3_1000m3},	/* 1.000m3 */
};

/* 13.反向输出允许 */
MenuList_t Menu_level3_12_zh[] =
{
	{numof(Menu_L3_Allow_zh), Menu_L3_Allow_zh},	/* 允许 */
	{numof(Menu_L3_Forbid_zh), Menu_L3_Forbid_zh},	/* 禁止 */
};

/* 14.电流输出类型 */
MenuList_t Menu_level3_13_zh[] =
{
	{numof(Menu_L3_0to10mA), Menu_L3_0to10mA},		/* 0～10mA */
	{numof(Menu_L3_4to20mA), Menu_L3_4to20mA},		/* 4～20mA */
};

/* 15.脉冲输出方式 */
MenuList_t Menu_level3_14_zh[] =
{
	{numof(Menu_L3_Frequency_zh), Menu_L3_Frequency_zh},	/* 频率 */
	{numof(Menu_L3_Pulse_zh), Menu_L3_Pulse_zh},			/* 脉冲 */
};

/* 16.脉冲单位当量 */
MenuList_t Menu_level3_15_zh[] =
{
	{numof(Menu_L3_0001L), Menu_L3_0001L},		/* 0.001L */
	{numof(Menu_L3_0010L), Menu_L3_0010L},		/* 0.010L */
	{numof(Menu_L3_0100L), Menu_L3_0100L},		/* 0.100L */
	{numof(Menu_L3_1000L), Menu_L3_1000L},		/* 1.000L */
	{numof(Menu_L3_0001m3), Menu_L3_0001m3},	/* 0.001m3 */
	{numof(Menu_L3_0010m3), Menu_L3_0010m3},	/* 0.010m3 */
	{numof(Menu_L3_0100m3), Menu_L3_0100m3},	/* 0.100m3 */
	{numof(Menu_L3_1000m3), Menu_L3_1000m3},	/* 1.000m3 */
};

/* 17.频率输出范围 */
MenuList_t Menu_level3_16_zh[] =
{
	{numof(Menu_L3_16_Freque), Menu_L3_16_Freque},	/* 频率输出范围 */
};

/* 18.空管报警允许 */
MenuList_t Menu_level3_17_zh[] =
{
	{numof(Menu_L3_Allow_zh), Menu_L3_Allow_zh},	/* 允许 */
	{numof(Menu_L3_Forbid_zh), Menu_L3_Forbid_zh},	/* 禁止 */
};

/* 19.空管报警阈值 */
MenuList_t Menu_level3_18_zh[] =
{
	{numof(Menu_L3_18_Mtsnsr), Menu_L3_18_Mtsnsr},	/* 空管报警阈值 */
};


/********************************************
 *      各层级菜单构成信息
 ********************************************/

MenuList_t Menu_level0_list_zh[MENU_L0_MAX] =
{
	{numof(Menu_Init), Menu_Init},					/* 初始画面 */
	{numof(Menu_AutoMeasure), Menu_AutoMeasure},	/* 自动测量画面 */
};

MenuList_t Menu_level1_list_zh[MENU_L1_MAX] =
{
	{numof(Menu_ParamSet_zh), Menu_ParamSet_zh},	/* 参数设置 */
	{numof(Menu_TotalClr_zh), Menu_TotalClr_zh},	/* 总量清零 */
};

MenuList_t Menu_level2_list_zh[MENU_L2_MAX] =
{
	{numof(Menu_ParamSet_01_zh), Menu_ParamSet_01_zh},	/* 语言 */
	{numof(Menu_ParamSet_02_zh), Menu_ParamSet_02_zh},	/* 仪表通讯地址 */
	{numof(Menu_ParamSet_03_zh), Menu_ParamSet_03_zh},	/* 仪表通讯速度 */
	{numof(Menu_ParamSet_04_zh), Menu_ParamSet_04_zh},	/* 测量管道口径 */
	{numof(Menu_ParamSet_05_zh), Menu_ParamSet_05_zh},	/* 流量单位 */
	{numof(Menu_ParamSet_06_zh), Menu_ParamSet_06_zh},	/* 仪表量程设置 */
	{numof(Menu_ParamSet_07_zh), Menu_ParamSet_07_zh},	/* 测量阻尼时间 */
	{numof(Menu_ParamSet_08_zh), Menu_ParamSet_08_zh},	/* 流量方向择项 */
	{numof(Menu_ParamSet_09_zh), Menu_ParamSet_09_zh},	/* 流量零点修正 */
	{numof(Menu_ParamSet_10_zh), Menu_ParamSet_10_zh},	/* 小信号切除点 */
	{numof(Menu_ParamSet_11_zh), Menu_ParamSet_11_zh},	/* 允许切除显示 */
	{numof(Menu_ParamSet_12_zh), Menu_ParamSet_12_zh},	/* 流量积算单位 */
	{numof(Menu_ParamSet_13_zh), Menu_ParamSet_13_zh},	/* 反向输出允许 */
	{numof(Menu_ParamSet_14_zh), Menu_ParamSet_14_zh},	/* 电流输出类型 */
	{numof(Menu_ParamSet_15_zh), Menu_ParamSet_15_zh},	/* 脉冲输出方式 */
	{numof(Menu_ParamSet_16_zh), Menu_ParamSet_16_zh},	/* 脉冲单位当量 */
	{numof(Menu_ParamSet_17_zh), Menu_ParamSet_17_zh},	/* 频率输出范围 */
	{numof(Menu_ParamSet_18_zh), Menu_ParamSet_18_zh},	/* 空管报警允许 */
	{numof(Menu_ParamSet_19_zh), Menu_ParamSet_19_zh},	/* 空管报警阈值 */
	{numof(Menu_ParamSet_20_zh), Menu_ParamSet_20_zh},	/* 上限报警允许 */
	{numof(Menu_ParamSet_21_zh), Menu_ParamSet_21_zh},	/* 上限报警数值 */
	{numof(Menu_ParamSet_22_zh), Menu_ParamSet_22_zh},	/* 下限报警允许 */
	{numof(Menu_ParamSet_23_zh), Menu_ParamSet_23_zh},	/* 下限报警数值 */
	{numof(Menu_ParamSet_24_zh), Menu_ParamSet_24_zh},	/* 励磁报警允许 */
	{numof(Menu_ParamSet_25_zh), Menu_ParamSet_25_zh},	/* 总量清零密码 */
	{numof(Menu_ParamSet_26_zh), Menu_ParamSet_26_zh},	/* 传感器编码1 */
	{numof(Menu_ParamSet_27_zh), Menu_ParamSet_27_zh},	/* 传感器编码2 */
	{numof(Menu_ParamSet_28_zh), Menu_ParamSet_28_zh},	/* 励磁方式选择 */
	{numof(Menu_ParamSet_29_zh), Menu_ParamSet_29_zh},	/* 传感器系数值 */
	{numof(Menu_ParamSet_30_zh), Menu_ParamSet_30_zh},	/* 修正系数0 */
	{numof(Menu_ParamSet_31_zh), Menu_ParamSet_31_zh},	/* 流量修正点0 */
	{numof(Menu_ParamSet_32_zh), Menu_ParamSet_32_zh},	/* 修正系数1 */
	{numof(Menu_ParamSet_33_zh), Menu_ParamSet_33_zh},	/* 流量修正点1 */
	{numof(Menu_ParamSet_34_zh), Menu_ParamSet_34_zh},	/* 修正系数2 */
	{numof(Menu_ParamSet_35_zh), Menu_ParamSet_35_zh},	/* 流量修正点2 */
	{numof(Menu_ParamSet_36_zh), Menu_ParamSet_36_zh},	/* 修正系数3 */
	{numof(Menu_ParamSet_37_zh), Menu_ParamSet_37_zh},	/* 流量修正点3 */
	{numof(Menu_ParamSet_38_zh), Menu_ParamSet_38_zh},	/* 修正系数4 */
	{numof(Menu_ParamSet_39_zh), Menu_ParamSet_39_zh},	/* 正向累计设定 */
	{numof(Menu_ParamSet_40_zh), Menu_ParamSet_40_zh},	/* 反向累计设定 */
	{numof(Menu_ParamSet_41_zh), Menu_ParamSet_41_zh},	/* 电流零点修正 */
	{numof(Menu_ParamSet_42_zh), Menu_ParamSet_42_zh},	/* 电流满度修正 */
	{numof(Menu_ParamSet_43_zh), Menu_ParamSet_43_zh},	/* 出厂标定系数 */
	{numof(Menu_ParamSet_44_zh), Menu_ParamSet_44_zh},	/* 设定密度 */
	{numof(Menu_ParamSet_45_zh), Menu_ParamSet_45_zh},	/* 远传间隔时间 */
};

MenuList_t Menu_level2_list_en[MENU_L2_MAX] =
{
	{numof(Menu_ParamSet_01_en), Menu_ParamSet_01_en},	/* Language */
	{numof(Menu_ParamSet_02_en), Menu_ParamSet_02_en},	/* Commaddress */
	{numof(Menu_ParamSet_03_en), Menu_ParamSet_03_en},	/* Baud Rate */
	{numof(Menu_ParamSet_04_en), Menu_ParamSet_04_en},	/* Snsr Size */
	{numof(Menu_ParamSet_05_en), Menu_ParamSet_05_en},	/* Flow Unit */
	{numof(Menu_ParamSet_06_en), Menu_ParamSet_06_en},	/* Flow Range */
	{numof(Menu_ParamSet_07_en), Menu_ParamSet_07_en},	/* Damp */
	{numof(Menu_ParamSet_08_en), Menu_ParamSet_08_en},	/* Flow Direct */
	{numof(Menu_ParamSet_09_en), Menu_ParamSet_09_en},	/* Flow Zero */
	{numof(Menu_ParamSet_10_en), Menu_ParamSet_10_en},	/* Flow Cutoff */
	{numof(Menu_ParamSet_11_en), Menu_ParamSet_11_en},	/* Cutoff Ena */
	{numof(Menu_ParamSet_12_en), Menu_ParamSet_12_en},	/* Total Unit */
	{numof(Menu_ParamSet_13_en), Menu_ParamSet_13_en},	/* SegmaN Ena */
	{numof(Menu_ParamSet_14_en), Menu_ParamSet_14_en},	/* Analog Type */
	{numof(Menu_ParamSet_15_en), Menu_ParamSet_15_en},	/* Pulse Type */
	{numof(Menu_ParamSet_16_en), Menu_ParamSet_16_en},	/* Pulse Fact */
	{numof(Menu_ParamSet_17_en), Menu_ParamSet_17_en},	/* Freque Max */
	{numof(Menu_ParamSet_18_en), Menu_ParamSet_18_en},	/* Mtsnsr Ena */
	{numof(Menu_ParamSet_19_en), Menu_ParamSet_19_en},	/* Mtsnsr Trip */
	{numof(Menu_ParamSet_20_zh), Menu_ParamSet_20_zh},	/* 上限报警允许 */
	{numof(Menu_ParamSet_21_en), Menu_ParamSet_21_en},	/* Alm Hi Val */
	{numof(Menu_ParamSet_22_zh), Menu_ParamSet_22_zh},	/* 下限报警允许 */
	{numof(Menu_ParamSet_23_zh), Menu_ParamSet_23_zh},	/* 下限报警数值 */
	{numof(Menu_ParamSet_24_zh), Menu_ParamSet_24_zh},	/* 励磁报警允许 */
	{numof(Menu_ParamSet_25_en), Menu_ParamSet_25_en},	/* Clr Sum Key */
	{numof(Menu_ParamSet_26_zh), Menu_ParamSet_26_zh},	/* 传感器编码1 */
	{numof(Menu_ParamSet_27_zh), Menu_ParamSet_27_zh},	/* 传感器编码2 */
	{numof(Menu_ParamSet_28_zh), Menu_ParamSet_28_zh},	/* 励磁方式选择 */
	{numof(Menu_ParamSet_29_zh), Menu_ParamSet_29_zh},	/* 传感器系数值 */
	{numof(Menu_ParamSet_30_zh), Menu_ParamSet_30_zh},	/* 修正系数0 */
	{numof(Menu_ParamSet_31_zh), Menu_ParamSet_31_zh},	/* 流量修正点0 */
	{numof(Menu_ParamSet_32_zh), Menu_ParamSet_32_zh},	/* 修正系数1 */
	{numof(Menu_ParamSet_33_zh), Menu_ParamSet_33_zh},	/* 流量修正点1 */
	{numof(Menu_ParamSet_34_zh), Menu_ParamSet_34_zh},	/* 修正系数2 */
	{numof(Menu_ParamSet_35_zh), Menu_ParamSet_35_zh},	/* 流量修正点2 */
	{numof(Menu_ParamSet_36_zh), Menu_ParamSet_36_zh},	/* 修正系数3 */
	{numof(Menu_ParamSet_37_zh), Menu_ParamSet_37_zh},	/* 流量修正点3 */
	{numof(Menu_ParamSet_38_zh), Menu_ParamSet_38_zh},	/* 修正系数4 */
	{numof(Menu_ParamSet_39_zh), Menu_ParamSet_39_zh},	/* 正向累计设定 */
	{numof(Menu_ParamSet_40_zh), Menu_ParamSet_40_zh},	/* 反向累计设定 */
	{numof(Menu_ParamSet_41_zh), Menu_ParamSet_41_zh},	/* 电流零点修正 */
	{numof(Menu_ParamSet_42_zh), Menu_ParamSet_42_zh},	/* 电流满度修正 */
	{numof(Menu_ParamSet_43_zh), Menu_ParamSet_43_zh},	/* 出厂标定系数 */
	{numof(Menu_ParamSet_44_zh), Menu_ParamSet_44_zh},	/* 设定密度 */
	{numof(Menu_ParamSet_45_zh), Menu_ParamSet_45_zh},	/* 远传间隔时间 */
};

MenuList_t Menu_level3_list_zh[MENU_L3_MAX] =
{
	{numof(Menu_level3_00_zh), Menu_level3_00_zh},	/* 语言_中文/English */
	{numof(Menu_level3_01_zh), Menu_level3_01_zh},	/* 仪表通讯地址_0～99 */
	{numof(Menu_level3_02_zh), Menu_level3_02_zh},	/* 仪表通讯速度_300～38400 */
	{numof(Menu_level3_03_zh), Menu_level3_03_zh},	/* 测量管道口径_3～3000 */
	{numof(Menu_level3_04_zh), Menu_level3_04_zh},	/* 流量单位 */
	{numof(Menu_level3_05_zh), Menu_level3_05_zh},	/* 仪表量程设置_0～99999 */
	{numof(Menu_level3_06_zh), Menu_level3_06_zh},	/* 测量阻尼时间_1～64 */
	{numof(Menu_level3_07_zh), Menu_level3_07_zh},	/* 流量方向择项_正向/反向 */
	{numof(Menu_level3_08_zh), Menu_level3_08_zh},	/* 流量零点修正_0～±9999 */
	{numof(Menu_level3_09_zh), Menu_level3_09_zh},	/* 小信号切除点_0～599.99% */
	{numof(Menu_level3_10_zh), Menu_level3_10_zh},	/* 允许切除显示_允许/禁止 */
	{numof(Menu_level3_11_zh), Menu_level3_11_zh},	/* 流量积算单位_0.001m3～1m3/0.001L～1L */
	{numof(Menu_level3_12_zh), Menu_level3_12_zh},	/* 反向输出允许_允许/禁止 */
	{numof(Menu_level3_13_zh), Menu_level3_13_zh},	/* 电流输出类型_0～10mA/4～20mA */
	{numof(Menu_level3_14_zh), Menu_level3_14_zh},	/* 脉冲输出方式_频率/脉冲 */
	{numof(Menu_level3_15_zh), Menu_level3_15_zh},	/* 脉冲单位当量_0.001m3～1m3/0.001L～1L */
	{numof(Menu_level3_16_zh), Menu_level3_16_zh},	/* 频率输出范围_1～ 5999 Hz */
	{numof(Menu_level3_17_zh), Menu_level3_17_zh},	/* 空管报警允许_允许/禁止 */
	{numof(Menu_level3_18_zh), Menu_level3_18_zh},	/* 空管报警阈值_59999 */
};

MenuList_t Menu_level4_list_zh[MENU_L4_MAX] =
{
	{numof(Menu_Password_zh), Menu_Password_zh},		/* 参数设置密码 */
	{numof(Menu_Password_zh), Menu_Password_zh},		/* 总量清零密码 */
	{numof(Menu_PasswordSet_zh), Menu_PasswordSet_zh},	/* 密码设定 */
};

/********************************************
 *      各层级菜单 总管理列表
 ********************************************/

MenuList_t* Menu_level0_list[] =
{
	Menu_level0_list_zh,
	Menu_level0_list_zh
};

MenuList_t* Menu_level1_list[] =
{
	Menu_level1_list_zh,
	Menu_level1_list_zh
};

MenuList_t* Menu_level2_list[] =
{
	Menu_level2_list_zh,
	Menu_level2_list_en
};

MenuList_t* Menu_level3_list[] =
{
	Menu_level3_list_zh,
	Menu_level3_list_zh
};

MenuList_t* Menu_level4_list[] =
{
	Menu_level4_list_zh,
	Menu_level4_list_zh
};

