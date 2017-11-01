#ifndef __DYNAMIC_AID_XXXX_H
#define __DYNAMIC_AID_XXXX_H __FILE__

#include "dynamic_aid.h"
#include "dynamic_aid_gamma_curve.h"

enum {
	IV_VT,
	IV_0,
	IV_3,
	IV_11,
	IV_23,
	IV_35,
	IV_51,
	IV_87,
	IV_151,
	IV_203,
	IV_255,
	IV_MAX
};

enum {
	IBRIGHTNESS_005NIT,
	IBRIGHTNESS_006NIT,
	IBRIGHTNESS_007NIT,
	IBRIGHTNESS_008NIT,
	IBRIGHTNESS_009NIT,
	IBRIGHTNESS_010NIT,
	IBRIGHTNESS_011NIT,
	IBRIGHTNESS_012NIT,
	IBRIGHTNESS_013NIT,
	IBRIGHTNESS_014NIT,
	IBRIGHTNESS_015NIT,
	IBRIGHTNESS_016NIT,
	IBRIGHTNESS_017NIT,
	IBRIGHTNESS_019NIT,
	IBRIGHTNESS_020NIT,
	IBRIGHTNESS_021NIT,
	IBRIGHTNESS_022NIT,
	IBRIGHTNESS_024NIT,
	IBRIGHTNESS_025NIT,
	IBRIGHTNESS_027NIT,
	IBRIGHTNESS_029NIT,
	IBRIGHTNESS_030NIT,
	IBRIGHTNESS_032NIT,
	IBRIGHTNESS_034NIT,
	IBRIGHTNESS_037NIT,
	IBRIGHTNESS_039NIT,
	IBRIGHTNESS_041NIT,
	IBRIGHTNESS_044NIT,
	IBRIGHTNESS_047NIT,
	IBRIGHTNESS_050NIT,
	IBRIGHTNESS_053NIT,
	IBRIGHTNESS_056NIT,
	IBRIGHTNESS_060NIT,
	IBRIGHTNESS_064NIT,
	IBRIGHTNESS_068NIT,
	IBRIGHTNESS_072NIT,
	IBRIGHTNESS_077NIT,
	IBRIGHTNESS_082NIT,
	IBRIGHTNESS_087NIT,
	IBRIGHTNESS_093NIT,
	IBRIGHTNESS_098NIT,
	IBRIGHTNESS_105NIT,
	IBRIGHTNESS_111NIT,
	IBRIGHTNESS_119NIT,
	IBRIGHTNESS_126NIT,
	IBRIGHTNESS_134NIT,
	IBRIGHTNESS_143NIT,
	IBRIGHTNESS_152NIT,
	IBRIGHTNESS_162NIT,
	IBRIGHTNESS_172NIT,
	IBRIGHTNESS_183NIT,
	IBRIGHTNESS_195NIT,
	IBRIGHTNESS_207NIT,
	IBRIGHTNESS_220NIT,
	IBRIGHTNESS_234NIT,
	IBRIGHTNESS_249NIT,
	IBRIGHTNESS_265NIT,
	IBRIGHTNESS_282NIT,
	IBRIGHTNESS_300NIT,
	IBRIGHTNESS_316NIT,
	IBRIGHTNESS_333NIT,
	IBRIGHTNESS_360NIT,
	IBRIGHTNESS_MAX,
	IBRIGHTNESS_500NIT = IBRIGHTNESS_MAX,
	IBRIGHTNESS_HBM_MAX
};

#define VREG_OUT_X1000		6500	/* VREG_OUT x 1000 */

static const int index_voltage_table[IV_MAX] = {
	0,	/* IV_VT */
	0,	/* IV_0 */
	3,	/* IV_3 */
	11,	/* IV_11 */
	23,	/* IV_23 */
	35,	/* IV_35 */
	51,	/* IV_51 */
	87,	/* IV_87 */
	151,	/* IV_151 */
	203,	/* IV_203 */
	255	/* IV_255 */
};

static int index_voltage_reference[IV_MAX] = {
	VREG_OUT_X1000,		/* IV_VT */
	VREG_OUT_X1000,
	VREG_OUT_X1000,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	VREG_OUT_X1000		/* IV_255 */
};

static struct m_gray_limit_t m_gray_limit[IV_MAX] = {
	{0,	0},	/* IV_VT */
	{0,	0},
	{-1,	-1},
	{-1,	-1},
	{-1,	-1},
	{-1,	-1},
	{-1,	-1},
	{-1,	-1},
	{-1,	-1},
	{-1,	-1},
	{-1,	-1}	/* IV_255 */
};

static const int index_brightness_table[IBRIGHTNESS_HBM_MAX] = {
	5,	/* IBRIGHTNESS_005NIT */
	6,	/* IBRIGHTNESS_006NIT */
	7,	/* IBRIGHTNESS_007NIT */
	8,	/* IBRIGHTNESS_008NIT */
	9,	/* IBRIGHTNESS_009NIT */
	10,	/* IBRIGHTNESS_010NIT */
	11,	/* IBRIGHTNESS_011NIT */
	12,	/* IBRIGHTNESS_012NIT */
	13,	/* IBRIGHTNESS_013NIT */
	14,	/* IBRIGHTNESS_014NIT */
	15,	/* IBRIGHTNESS_015NIT */
	16,	/* IBRIGHTNESS_016NIT */
	17,	/* IBRIGHTNESS_017NIT */
	19,	/* IBRIGHTNESS_019NIT */
	20,	/* IBRIGHTNESS_020NIT */
	21,	/* IBRIGHTNESS_021NIT */
	22,	/* IBRIGHTNESS_022NIT */
	24,	/* IBRIGHTNESS_024NIT */
	25,	/* IBRIGHTNESS_025NIT */
	27,	/* IBRIGHTNESS_027NIT */
	29,	/* IBRIGHTNESS_029NIT */
	30,	/* IBRIGHTNESS_030NIT */
	32,	/* IBRIGHTNESS_032NIT */
	34,	/* IBRIGHTNESS_034NIT */
	37,	/* IBRIGHTNESS_037NIT */
	39,	/* IBRIGHTNESS_039NIT */
	41,	/* IBRIGHTNESS_041NIT */
	44,	/* IBRIGHTNESS_044NIT */
	47,	/* IBRIGHTNESS_047NIT */
	50,	/* IBRIGHTNESS_050NIT */
	53,	/* IBRIGHTNESS_053NIT */
	56,	/* IBRIGHTNESS_056NIT */
	60,	/* IBRIGHTNESS_060NIT */
	64,	/* IBRIGHTNESS_064NIT */
	68,	/* IBRIGHTNESS_068NIT */
	72,	/* IBRIGHTNESS_072NIT */
	77,	/* IBRIGHTNESS_077NIT */
	82,	/* IBRIGHTNESS_082NIT */
	87,	/* IBRIGHTNESS_087NIT */
	93,	/* IBRIGHTNESS_093NIT */
	98,	/* IBRIGHTNESS_098NIT */
	105,	/* IBRIGHTNESS_105NIT */
	111,	/* IBRIGHTNESS_111NIT */
	119,	/* IBRIGHTNESS_119NIT */
	126,	/* IBRIGHTNESS_126NIT */
	134,	/* IBRIGHTNESS_134NIT */
	143,	/* IBRIGHTNESS_143NIT */
	152,	/* IBRIGHTNESS_152NIT */
	162,	/* IBRIGHTNESS_162NIT */
	172,	/* IBRIGHTNESS_172NIT */
	183,	/* IBRIGHTNESS_183NIT */
	195,	/* IBRIGHTNESS_195NIT */
	207,	/* IBRIGHTNESS_207NIT */
	220,	/* IBRIGHTNESS_220NIT */
	234,	/* IBRIGHTNESS_234NIT */
	249,	/* IBRIGHTNESS_249NIT */
	265,	/* IBRIGHTNESS_265NIT */
	282,	/* IBRIGHTNESS_282NIT */
	300,	/* IBRIGHTNESS_300NIT */
	316,	/* IBRIGHTNESS_316NIT */
	333,	/* IBRIGHTNESS_333NIT */
	360,	/* IBRIGHTNESS_360NIT */
};

static const int gamma_default_0[IV_MAX*CI_MAX] = {
	0x00, 0x00, 0x00,	/* IV_VT */
	0x00, 0x00, 0x00,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x100, 0x100, 0x100	/* IV_255 */
};

static const int *gamma_default = gamma_default_0;

static const struct formular_t gamma_formula[IV_MAX] = {
	{0, 860},	/* IV_VT */
	{0, 256},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{72, 860}	/* IV_255 */
};

static const int vt_voltage_value[] = {
	0, 12, 24, 36, 48, 60, 72, 84, 96, 108, 138, 148, 158, 168, 178, 186
};

static const int brightness_base_table[IBRIGHTNESS_MAX] = {
	124,	/* IBRIGHTNESS_005NIT */
	124,	/* IBRIGHTNESS_006NIT */
	124,	/* IBRIGHTNESS_007NIT */
	124,	/* IBRIGHTNESS_008NIT */
	124,	/* IBRIGHTNESS_009NIT */
	124,	/* IBRIGHTNESS_010NIT */
	124,	/* IBRIGHTNESS_011NIT */
	124,	/* IBRIGHTNESS_012NIT */
	124,	/* IBRIGHTNESS_013NIT */
	124,	/* IBRIGHTNESS_014NIT */
	124,	/* IBRIGHTNESS_015NIT */
	124,	/* IBRIGHTNESS_016NIT */
	124,	/* IBRIGHTNESS_017NIT */
	124,	/* IBRIGHTNESS_019NIT */
	124,	/* IBRIGHTNESS_020NIT */
	124,	/* IBRIGHTNESS_021NIT */
	124,	/* IBRIGHTNESS_022NIT */
	124,	/* IBRIGHTNESS_024NIT */
	124,	/* IBRIGHTNESS_025NIT */
	124,	/* IBRIGHTNESS_027NIT */
	124,	/* IBRIGHTNESS_029NIT */
	124,	/* IBRIGHTNESS_030NIT */
	124,	/* IBRIGHTNESS_032NIT */
	124,	/* IBRIGHTNESS_034NIT */
	124,	/* IBRIGHTNESS_037NIT */
	124,	/* IBRIGHTNESS_039NIT */
	124,	/* IBRIGHTNESS_041NIT */
	124,	/* IBRIGHTNESS_044NIT */
	124,	/* IBRIGHTNESS_047NIT */
	124,	/* IBRIGHTNESS_050NIT */
	124,	/* IBRIGHTNESS_053NIT */
	124,	/* IBRIGHTNESS_056NIT */
	124,	/* IBRIGHTNESS_060NIT */
	124,	/* IBRIGHTNESS_064NIT */
	131,	/* IBRIGHTNESS_068NIT */
	138,	/* IBRIGHTNESS_072NIT */
	146,	/* IBRIGHTNESS_077NIT */
	152,	/* IBRIGHTNESS_082NIT */
	159,	/* IBRIGHTNESS_087NIT */
	171,	/* IBRIGHTNESS_093NIT */
	178,	/* IBRIGHTNESS_098NIT */
	188,	/* IBRIGHTNESS_105NIT */
	197,	/* IBRIGHTNESS_111NIT */
	208,	/* IBRIGHTNESS_119NIT */
	219,	/* IBRIGHTNESS_126NIT */
	230,	/* IBRIGHTNESS_134NIT */
	244,	/* IBRIGHTNESS_143NIT */
	254,	/* IBRIGHTNESS_152NIT */
	268,	/* IBRIGHTNESS_162NIT */
	268,	/* IBRIGHTNESS_172NIT */
	268,	/* IBRIGHTNESS_183NIT */
	268,	/* IBRIGHTNESS_195NIT */
	268,	/* IBRIGHTNESS_207NIT */
	268,	/* IBRIGHTNESS_220NIT */
	268,	/* IBRIGHTNESS_234NIT */
	270,	/* IBRIGHTNESS_249NIT */
	278,	/* IBRIGHTNESS_265NIT */
	297,	/* IBRIGHTNESS_282NIT */
	308,	/* IBRIGHTNESS_300NIT */
	324,	/* IBRIGHTNESS_316NIT */
	339,	/* IBRIGHTNESS_333NIT */
	360 	/* IBRIGHTNESS_360NIT */
};

static const int *gamma_curve_tables[IBRIGHTNESS_MAX] = {
	gamma_curve_2p15_table,	/* IBRIGHTNESS_005NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_006NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_007NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_008NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_009NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_010NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_011NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_012NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_013NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_014NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_015NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_016NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_017NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_019NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_020NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_021NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_022NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_024NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_025NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_027NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_029NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_030NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_032NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_034NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_037NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_039NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_041NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_044NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_047NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_050NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_053NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_056NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_060NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_064NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_068NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_072NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_077NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_082NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_087NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_093NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_098NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_105NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_111NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_119NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_126NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_134NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_143NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_152NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_162NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_172NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_183NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_195NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_207NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_220NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_234NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_249NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_265NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_282NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_300NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_316NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_333NIT */
	gamma_curve_2p20_table,	/* IBRIGHTNESS_360NIT */
};

static const int *gamma_curve_lut = gamma_curve_2p20_table;

static const int offset_gradation[IBRIGHTNESS_MAX][IV_MAX] = {
		 /*VT ~ V255*/
		 {0,0,11,10,7,7, 6, 6,6,6,0},
		 {0,0,9,6,5,4, 3,3, 3,5,0},  
		 {0,0,7,6,3,1, 0,-1, 0,3,0},  
		 {0,0,8,6,4,3, 2,1, 1,3,0},  
		 {0,0,6,4,2,0,-1,-1,-1,3,0},  
		 {0,0,6,5,3,2, 2,2, 2,4,0},  
		 {0,0,6,4,2,1, 1,2, 3,4,0},  
		 {0,0,6,3,0,-1,-1,-1, 0,3,0},  
		 {0,0,5,3,1,0,-1,-1, 1,3,0},  
		 {0,0,5,3,1,0, 0,0, 2,4,0},  
		 {0,0,5,3,1,0, 0,1, 2,4,0},  
		 {0,0,6,4,2,1, 1,2, 3,4,0},  
		 {0,0,5,3,1,0,-1,0, 1,3,0},  
		 {0,0,5,3,1,0, 0,0, 1,3,0},  
		 {0,0,5,3,2,1, 1,2, 4,5,0},  
		 {0,0,5,3,1,0,-1,0, 1,3,0},  
		 {0,0,5,4,2,1, 1,2, 3,4,0},  
		 {0,0,5,4,2,1, 1,2, 4,4,0},  
		 {0,0,4,7,4,4, 4,5, 6,6,0},  
		 {0,0,4,7,4,3, 2,4, 5,5,0},  
		 {0,0,3,0,4,3, 2,2, 3,5,0},  
		 {0,0,3,8,5,4, 4,5, 6,6,0},  
		 {0,0,3,1,5,4, 3,5, 6,6,0},  
		 {0,0,3,7,4,3, 3,4, 5,5,0},  
		 {0,0,3,0,4,3, 3,5, 4,5,0},  
		 {0,0,3,0,4,4, 4,5, 4,5,0},  
		 {0,0,8,6,4,3, 3,5, 6,5,0},  
		 {0,0,8,6,4,4, 4,5, 6,5,0},  
		 {0,0,8,6,4,3, 3,4, 5,5,0},  
		 {0,0,8,5,3,3, 3,4, 5,5,0},  
		 {0,0,7,5,3,3, 3,4, 5,5,0},  
		 {0,0,7,5,3,3, 3,4, 5,5,0},  
		 {0,0,7,5,3,2, 3,4, 6,6,0},  
		 {0,0,7,4,3,2, 3,5, 7,4,0},  
		 {0,0,7,5,4,3, 4,5, 6,4,0},  
		 {0,0,7,4,3,3, 4,6, 7,5,0},  
		 {0,0,7,4,3,3, 3,4, 5,4,0},  
		 {0,0,6,3,2,1, 2,3, 5,3,0},  
		 {0,0,6,3,1,1, 2,3, 4,2,0},  
		 {0,0,6,3,2,2, 3,5, 7,5,0},  
		 {0,0,6,2,1,0, 2,3, 6,3,0},  
		 {0,0,7,4,3,3, 4,5, 7,4,0},  
		 {0,0,6,3,3,3, 4,6, 7,4,0},  
		 {0,0,4,2,1,1, 2,5, 7,3,0},  
		 {0,0,4,2,0,0, 1,2, 3,1,0},  
		 {0,0,5,2,1,1, 3,4, 6,4,0},  
		 {0,0,4,2,1,1, 4,5, 6,4,0},  
		 {0,0,4,2,1,2, 3,4, 5,4,0},  
		 {0,0,4,3,2,2, 3,5, 6,5,0},  
		 {0,0,4,2,1,2, 3,5, 6,5,0},  
		 {0,0,4,2,1,2, 3,4, 5,5,0},  
		 {0,0,3,2,1,2, 4,5, 6,5,0},  
		 {0,0,2,1,1,1, 2,4, 5,5,0},  
		 {0,0,2,1,1,1, 2,3, 4,3,0},  
		 {0,0,1,0,0,1, 2,4, 4,3,0},  
		 {0,0,5,3,3,3, 4,4, 4,3,0},  
		 {0,0,4,3,1,2, 2,3, 3,2,0},  
		 {0,0,4,2,2,2, 2,2, 2,1,0},  
		 {0,0,3,1,1,1, 2,2, 3,3,0},  
		 {0,0,3,1,0,0, 1,0, 0,0,0},  
		 {0,0,3,1,0,0, 1,0, 0,1,0},  
		 {0,0,0,0,0,0, 0,0, 0,0,0}	 
	};

static const int offset_color[IBRIGHTNESS_MAX][CI_MAX * IV_MAX] = {
	 /*VT ~ V255*/ 
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 7,-7, 5,  6, 0,  5,  1, -2,  3, 1,	 1,  2, 0,	 0,  1, -1, -1,  0,-2,	-3, -2,  -2, -3,-1}, 
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 7,-7, 5,  4, 0,  4,  3,  0,  5, 1,	 1,  1, 1,	 1,  2,  0,  0,  1, 0,	 0,  0,  -1, -2, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-7, 4,  2,-1,  3,  3,  1,  4, 4,	 4,  4, 3,	 3,  3,  1,  1,  2, 1,	 1,  1,   1, -1, 1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 8,-3, 6,  4, 0,  5,  1,  0,  3, 1,	 1,  1, 1,	 1,  2,  1,  1,  1, 1,	 0,  1,   0, -1, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 9,-2, 6,  2, 0,  3,  4,  2,  4, 4,	 5,  3, 2,	 2,  2,  3,  3,  4, 1,	 0,  1,   1,  0, 1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-3, 5,  5, 1,  5,  5,  2,  4, 1,	 2,  1, 1,	 0,  2,  0,  0,  1, 0,	 0,  1,   0, -1, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 7,-2, 5,  4, 3,  5,  4,  2,  4, 3,	 4,  2, 1,	 1,  2,  1,  0,  1,-1,	-1,  0,   0, -1, 0}, 
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-7, 5,  5, 4,  5,  6,  5,  5, 4,	 5,  3, 3,	 3,  3,  2,  2,  3, 0,	 0,  0,   1,  0, 1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0,10,-2, 9,  5, 3,  5,  2,  1,  3, 3,	 4,  2, 3,	 3,  4,  1,  1,  1, 1,	 0,  1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 9,-2, 9,  4, 1,  3,  4,  4,  5, 3,	 4,  2, 2,	 2,  3,  1,  1,  2, 0,	 0,  1,   0, -1,-1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 8,-2, 8,  5, 2,  4,  3,  3,  4, 4,	 5,  3, 1,	 1,  2,  1,  1,  2, 0,	 0,  1,   0, -1,-1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2,-6, 1,  3, 2,  3,  3,  2,  4, 2,	 3,  1, 1,	 1,  2,  1,  0,  1,-1,	-1,  0,   0, -1,-1}, 
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 8,-3, 8,  3, 1,  2,  1,  0,  2, 4,	 5,  3, 2,	 2,  3,  1,  1,  2, 0,	 0,  0,   1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-4, 7,  4, 1,  3,  3,  3,  4, 1,	 3,  0, 2,	 2,  3,  0,  0,  1, 1,	 1,  1,   1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-4, 7,  2, 1,  2,  2,  1,  3, 1,	 3,  1, 1,	 1,  2,  0,  1,  1, 0,	 0,  0,  -1, -2,-2},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 1, 7,  4, 2,  2,  2,  0,  2, 3,	 6,  3, 2,	 2,  3,  1,  1,  1, 2,	 1,  1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 1,  4, 4,  2,  2,  2,  3, 3,	 4,  1, 2,	 2,  3,  1,  0,  1, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 1,  4, 4,  2,  4,  3,  4, 2,	 4,  0, 3,	 3,  4,  1,  0,  1, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0,-1,-1,-3,  4, 4,  2,  3,  2,  3, 1,	 2,  0, 0,	 1,  1,  1,  1,  1,-1,	-1, -1,  -1, -1,-1}, 
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,-2,  1, 2,  0,  1,  1,  1, 3,	 4,  1, 2,	 2,  3,  1,  1,  1, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,-2,  3, 3,  1,  1,  1,  1, 1,	 2, -1, 2,	 3,  3,  3,  3,  3, 1,	 1,  1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,-3,  1, 2, -1,  4,  4,  4, 1,	 3, -1, 2,	 3,  3,  1,  1,  1, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,-3,  2, 2,  0,  1,  1,  1, 2,	 5,  0, 2,	 3,  3,  1,  1,  1, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,-2,  2, 2,  0,  4,  4,  3, 1,	 3, -1, 3,	 3,  4,  1,  1,  1, 1,	 1,  1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,-2,  1, 2, -1,  3,  4,  3, 3,	 4,  0, 1,	 1,  2,  2,  2,  3, 0,	 1,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,-2,  3, 4,  1,  4,  3,  3, 1,	 2, -1, 1,	 1,  2,  2,  2,  3, 0,	 1,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0,  0, 1, -1,  4,  4,  4, 2,	 4, -1, 3,	 3,  4,  0,  0,  1, 0,	 1,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0,  4, 4,  2,  2,  2,  2, 1,	 2, -2, 3,	 3,  4,  0,  0,  1, 0,	 1,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3,-1,  0, 0, -1,  3,  3,  3, 1,	 2, -1, 3,	 3,  4,  1,  1,  1, 0,	 1,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,-2,  5, 5,  2,  3,  3,  3, 1,	 2, -1, 3,	 3,  4,  1,  1,  1, 0,	 1,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,-1,  4, 4,  1,  3,  3,  3, 1,	 2, -1, 3,	 3,  4,  1,  1,  1, 0,	 1,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-2,  4, 5,  2,  2,  2,  2, 1,	 2, -1, 3,	 3,  4,  1,  1,  1, 0,	 1,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0,-1,-1,-2,  0, 1, -1,  4,  5,  4, 2,	 3, -1, 3,	 3,  4,  1,  2,  2, 0,	 0, -1,  -1, -1,-1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0,  3, 4,  1,  4,  4,  4, 3,	 4,  1, 2,	 3,  4,  0,  0,  0, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0,  1, 2,  0,  3,  3,  3, 2,	 2,  0, 3,	 4,  4,  1,  1,  1, 0,	 0, -1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0,  4, 5,  2,  2,  3,  2, 3,	 4,  1, 1,	 1,  2,  1,  1,  2,-1,	 0, -1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,-1,  3, 4,  1,  2,  2,  2, 1,	 4,  0, 2,	 2,  2,  3,  3,  3, 0,	 0,  0,   1,  1, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,-1,  4, 5,  1,  4,  5,  4, 2,	 3,  0, 3,	 3,  4,  2,  2,  2, 1,	 1,  1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-2,  4, 5,  2,  3,  4,  3, 3,	 4,  1, 3,	 3,  3,  2,  2,  2, 1,	 1,  1,   0,  1, 1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 2,  5, 6,  2,  4,  4,  4, 3,	 4,  2, 2,	 2,  2,  1,  2,  2, 0,	 0, -1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 2,  2, 3,  0,  5,  5,  4, 4,	 5,  2, 3,	 3,  4,  2,  2,  2, 0,	 0,  0,   1,  1, 1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 0,  1, 1,  0,  2,  3,  1, 1,	 2,  1, 4,	 4,  5,  1,  1,  1, 0,	 0, -1,   0,  0, 1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 1,  4, 5,  2,  2,  2,  2, 4,	 4,  2, 1,	 1,  2,  1,  1,  1, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 2,  5, 6,  3,  2,  2,  1, 3,	 6,  4, 3,	 3,  3,  1,  1,  1, 1,	 0,  0,  -1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0,-1, 0,-2,  6, 6,  4,  5,  5,  4, 3,	 4,  3, 3,	 3,  3,  3,  2,  2, 1,	 1,  1,   1,  1, 2},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0,  4, 4,  2,  5,  5,  4, 2,	 3,  2, 3,	 3,  3,  1,  1,  1, 1,	 0,  0,   0,  1, 1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0,  5, 5,  3,  6,  6,  4, 2,	 2,  2, 2,	 2,  2,  1,  1,  1, 1,	 1,  1,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 2,  4, 4,  2,  4,  4,  2, 1,	 2,  2, 2,	 2,  2,  2,  2,  2, 1,	 1,  0,   1,  1, 1},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 1,  2, 1,  1,  2,  3,  2, 2,	 3,  2, 2,	 2,  2,  1,  1,  2, 1,	 1,  0,  -1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0,  5, 5,  5,  2,  3,  2, 2,	 3,  2, 2,	 2,  2,  1,  0,  1, 0,	 1,  0,  -1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0,  5, 5,  5,  1,  2,  1, 2,	 3,  2, 2,	 2,  2,  2,  1,  1, 0,	 1,  0,  -1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 0,  4, 5,  4,  4,  4,  3, 2,	 2,  2, 1,	 1,  1,  1,  1,  2, 0,	 0, -1,  -1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 5,  3, 3,  1,  3,  3,  2, 3,	 3,  3, 2,	 2,  2,  1,  1,  1, 0,	 0, -1,  -1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 4,  2, 2,  1,  3,  3,  2, 2,	 2,  2, 2,	 2,  2,  1,  1,  1, 1,	 1,  1,  -1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 7,  5, 6,  5,  3,  3,  2, 2,	 3,  3, 2,	 2,  2,  1,  1,  1, 0,	 0,  0,  -1,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0,  0,  0,  0,  0, 0,	 0,  0, 0,	 0,  0,  0,  0,  0, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0,  0,  0,  0,  0, 0,	 0,  0, 0,	 0,  0,  0,  0,  0, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0,  0,  0,  0,  0, 0,	 0,  0, 0,	 0,  0,  0,  0,  0, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0,  0,  0,  0,  0, 0,	 0,  0, 0,	 0,  0,  0,  0,  0, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0,  0,  0,  0,  0, 0,	 0,  0, 0,	 0,  0,  0,  0,  0, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0,  0,  0,  0,  0, 0,	 0,  0, 0,	 0,  0,  0,  0,  0, 0,	 0,  0,   0,  0, 0},   
	 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0,  0,  0,  0,  0, 0,	 0,  0, 0,	 0,  0,  0,  0,  0, 0,	 0,  0,   0,  0, 0},   
};

#ifdef CONFIG_LCD_HMT
enum {
	IBRIGHTNESS_HMT_010NIT,
	IBRIGHTNESS_HMT_011NIT,
	IBRIGHTNESS_HMT_012NIT,
	IBRIGHTNESS_HMT_013NIT,
	IBRIGHTNESS_HMT_014NIT,
	IBRIGHTNESS_HMT_015NIT,
	IBRIGHTNESS_HMT_016NIT,
	IBRIGHTNESS_HMT_017NIT,
	IBRIGHTNESS_HMT_019NIT,
	IBRIGHTNESS_HMT_020NIT,
	IBRIGHTNESS_HMT_021NIT,
	IBRIGHTNESS_HMT_022NIT,
	IBRIGHTNESS_HMT_023NIT,
	IBRIGHTNESS_HMT_025NIT,
	IBRIGHTNESS_HMT_027NIT,
	IBRIGHTNESS_HMT_029NIT,
	IBRIGHTNESS_HMT_031NIT,
	IBRIGHTNESS_HMT_033NIT,
	IBRIGHTNESS_HMT_035NIT,
	IBRIGHTNESS_HMT_037NIT,
	IBRIGHTNESS_HMT_039NIT,
	IBRIGHTNESS_HMT_041NIT,
	IBRIGHTNESS_HMT_044NIT,
	IBRIGHTNESS_HMT_047NIT,
	IBRIGHTNESS_HMT_050NIT,
	IBRIGHTNESS_HMT_053NIT,
	IBRIGHTNESS_HMT_056NIT,
	IBRIGHTNESS_HMT_060NIT,
	IBRIGHTNESS_HMT_064NIT,
	IBRIGHTNESS_HMT_068NIT,
	IBRIGHTNESS_HMT_072NIT,
	IBRIGHTNESS_HMT_077NIT,
	IBRIGHTNESS_HMT_082NIT,
	IBRIGHTNESS_HMT_087NIT,
	IBRIGHTNESS_HMT_093NIT,
	IBRIGHTNESS_HMT_099NIT,
	IBRIGHTNESS_HMT_105NIT,
	IBRIGHTNESS_HMT_420NIT,
	IBRIGHTNESS_HMT_MAX
};

static const int index_brightness_table_hmt[IBRIGHTNESS_HMT_MAX] = {
	10,	/* IBRIGHTNESS_HMT_010NIT */
	11,	/* IBRIGHTNESS_HMT_011NIT */
	12,	/* IBRIGHTNESS_HMT_012NIT */
	13,	/* IBRIGHTNESS_HMT_013NIT */
	14,	/* IBRIGHTNESS_HMT_014NIT */
	15,	/* IBRIGHTNESS_HMT_015NIT */
	16,	/* IBRIGHTNESS_HMT_016NIT */
	17,	/* IBRIGHTNESS_HMT_017NIT */
	19,	/* IBRIGHTNESS_HMT_019NIT */
	20,	/* IBRIGHTNESS_HMT_020NIT */
	21,	/* IBRIGHTNESS_HMT_021NIT */
	22,	/* IBRIGHTNESS_HMT_022NIT */
	23,	/* IBRIGHTNESS_HMT_023NIT */
	25,	/* IBRIGHTNESS_HMT_025NIT */
	27,	/* IBRIGHTNESS_HMT_027NIT */
	29,	/* IBRIGHTNESS_HMT_029NIT */
	31,	/* IBRIGHTNESS_HMT_031NIT */
	33,	/* IBRIGHTNESS_HMT_033NIT */
	35,	/* IBRIGHTNESS_HMT_035NIT */
	37,	/* IBRIGHTNESS_HMT_037NIT */
	39,	/* IBRIGHTNESS_HMT_039NIT */
	41,	/* IBRIGHTNESS_HMT_041NIT */
	44,	/* IBRIGHTNESS_HMT_044NIT */
	47,	/* IBRIGHTNESS_HMT_047NIT */
	50,	/* IBRIGHTNESS_HMT_050NIT */
	53,	/* IBRIGHTNESS_HMT_053NIT */
	56,	/* IBRIGHTNESS_HMT_056NIT */
	60,	/* IBRIGHTNESS_HMT_060NIT */
	64,	/* IBRIGHTNESS_HMT_064NIT */
	68,	/* IBRIGHTNESS_HMT_068NIT */
	72,	/* IBRIGHTNESS_HMT_072NIT */
	77,	/* IBRIGHTNESS_HMT_077NIT */
	82,	/* IBRIGHTNESS_HMT_082NIT */
	87,	/* IBRIGHTNESS_HMT_087NIT */
	93,	/* IBRIGHTNESS_HMT_093NIT */
	99,	/* IBRIGHTNESS_HMT_099NIT */
	105,	/* IBRIGHTNESS_HMT_105NIT */
	420	/* IBRIGHTNESS_HMT_420NIT */
};

static const int brightness_base_table_hmt[IBRIGHTNESS_HMT_MAX] = {
	49,	/* IBRIGHTNESS_HMT_010NIT */
	53,	/* IBRIGHTNESS_HMT_011NIT */
	60,	/* IBRIGHTNESS_HMT_012NIT */
	64,	/* IBRIGHTNESS_HMT_013NIT */
	67,	/* IBRIGHTNESS_HMT_014NIT */
	73,	/* IBRIGHTNESS_HMT_015NIT */
	77,	/* IBRIGHTNESS_HMT_016NIT */
	81,	/* IBRIGHTNESS_HMT_017NIT */
	91,	/* IBRIGHTNESS_HMT_019NIT */
	93,	/* IBRIGHTNESS_HMT_020NIT */
	99,	/* IBRIGHTNESS_HMT_021NIT */
	100,	/* IBRIGHTNESS_HMT_022NIT */
	106,	/* IBRIGHTNESS_HMT_023NIT */
	114,	/* IBRIGHTNESS_HMT_025NIT */
	121,	/* IBRIGHTNESS_HMT_027NIT */
	129,	/* IBRIGHTNESS_HMT_029NIT */
	136,	/* IBRIGHTNESS_HMT_031NIT */
	144,	/* IBRIGHTNESS_HMT_033NIT */
	152,	/* IBRIGHTNESS_HMT_035NIT */
	161,	/* IBRIGHTNESS_HMT_037NIT */
	169,	/* IBRIGHTNESS_HMT_039NIT */
	177,	/* IBRIGHTNESS_HMT_041NIT */
	187,	/* IBRIGHTNESS_HMT_044NIT */
	200,	/* IBRIGHTNESS_HMT_047NIT */
	209,	/* IBRIGHTNESS_HMT_050NIT */
	222,	/* IBRIGHTNESS_HMT_053NIT */
	233,	/* IBRIGHTNESS_HMT_056NIT */
	245,	/* IBRIGHTNESS_HMT_060NIT */
	264,	/* IBRIGHTNESS_HMT_064NIT */
	273,	/* IBRIGHTNESS_HMT_068NIT */
	292,	/* IBRIGHTNESS_HMT_072NIT */
	217,	/* IBRIGHTNESS_HMT_077NIT */
	230,	/* IBRIGHTNESS_HMT_082NIT */
	244,	/* IBRIGHTNESS_HMT_087NIT */
	255,	/* IBRIGHTNESS_HMT_093NIT */
	271,	/* IBRIGHTNESS_HMT_099NIT */
	286,	/* IBRIGHTNESS_HMT_105NIT */
	420	/* IBRIGHTNESS_HMT_420NIT */
};

static const int *gamma_curve_tables_hmt[IBRIGHTNESS_HMT_MAX] = {
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_010NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_011NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_012NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_013NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_014NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_015NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_016NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_017NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_019NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_020NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_021NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_022NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_023NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_025NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_027NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_029NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_031NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_033NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_035NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_037NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_039NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_041NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_044NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_047NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_050NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_053NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_056NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_060NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_064NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_068NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_072NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_077NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_082NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_087NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_093NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_099NIT */
	gamma_curve_2p15_table,	/* IBRIGHTNESS_HMT_105NIT */
	gamma_curve_2p20_table	/* IBRIGHTNESS_HMT_420NIT */
};

static const int offset_gradation_hmt[IBRIGHTNESS_HMT_MAX][IV_MAX] = {
	/* VT ~ V255 */
	{0, 0, 11, 9, 7, 5, 4, 2, 2, 1, 0},
	{0, 0, 13, 8, 7, 6, 3, 2, 2, 1, 0},
	{0, 0, 10, 8, 7, 5, 3, 2, 2, 1, 0},
	{0, 0, 11, 8, 7, 4, 4, 2, 2, 0, 0},
	{0, 0, 14, 8, 6, 5, 4, 2, 3, 1, 0},
	{0, 0, 1, 9, 6, 4, 3, 3, 3, 2, 0},
	{0, 0, 2, 8, 7, 4, 4, 2, 2, 2, 0},
	{0, 0, 0, 7, 7, 5, 4, 3, 3, 1, 0},
	{0, 0, 5, 7, 6, 5, 4, 3, 3, 2, 0},
	{0, 0, 13, 7, 6, 5, 3, 3, 3, 3, 0},
	{0, 0, 9, 8, 6, 4, 4, 2, 3, 2, 0},
	{0, 0, 8, 7, 5, 4, 3, 3, 2, 3, 0},
	{0, 0, 8, 8, 6, 3, 4, 2, 2, 2, 0},
	{0, 0, 0, 7, 6, 4, 4, 3, 3, 3, 0},
	{0, 0, 9, 7, 6, 4, 4, 2, 3, 3, 0},
	{0, 0, 9, 7, 6, 4, 3, 3, 4, 4, 0},
	{0, 0, 9, 7, 5, 4, 3, 4, 3, 3, 0},
	{0, 0, 9, 8, 6, 4, 3, 4, 5, 4, 0},
	{0, 0, 8, 8, 6, 4, 4, 4, 4, 3, 0},
	{0, 0, 10, 7, 5, 4, 4, 4, 5, 4, 0},
	{0, 0, 10, 7, 6, 5, 4, 5, 6, 4, 0},
	{0, 0, 8, 7, 5, 4, 3, 4, 5, 3, 0},
	{0, 0, 10, 7, 5, 5, 4, 5, 6, 4, 0},
	{0, 0, 10, 8, 6, 5, 4, 5, 6, 3, 0},
	{0, 0, 9, 7, 5, 4, 3, 5, 6, 3, 0},
	{0, 0, 10, 7, 5, 5, 4, 6, 7, 3, 0},
	{0, 0, 10, 7, 5, 5, 5, 6, 7, 4, 0},
	{0, 0, 9, 7, 5, 4, 5, 5, 6, 4, 0},
	{0, 0, 9, 7, 5, 4, 4, 6, 6, 4, 0},
	{0, 0, 9, 7, 5, 5, 5, 7, 7, 4, 0},
	{0, 0, 9, 7, 5, 4, 4, 5, 6, 4, 0},
	{0, 0, 6, 4, 3, 2, 3, 4, 6, 3, 0},
	{0, 0, 7, 4, 4, 3, 3, 5, 6, 3, 0},
	{0, 0, 5, 5, 3, 3, 4, 5, 7, 3, 0},
	{0, 0, 6, 4, 3, 3, 3, 5, 6, 3, 0},
	{0, 0, 5, 4, 3, 3, 3, 5, 7, 4, 0},
	{0, 0, 5, 4, 3, 2, 3, 4, 6, 4, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

static const int offset_color_hmt[IBRIGHTNESS_HMT_MAX][CI_MAX * IV_MAX] = {
	/* VT ~ V255 */
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -18, 2, -5, -9, 3, -7, -8, 3, -7, -5, 2, -6, -1, 1, -4, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -21, 2, -6, -10, 3, -8, -6, 2, -6, -5, 2, -6, 0, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -19, 3, -6, -6, 2, -6, -7, 2, -5, -5, 2, -6, 0, 1, -2, -1, 0, 0, 0, 0, -1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -19, 3, -6, -6, 3, -6, -8, 2, -6, -4, 2, -6, -1, 1, -2, 0, 0, 0, 0, 0, -1, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -18, 3, -6, -8, 4, -8, -7, 2, -6, -3, 2, -5, -1, 0, -2, 0, 0, 0, -1, 0, -2, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 2, -5, -9, 3, -7, -7, 2, -5, -3, 2, -6, 0, 1, -2, 0, 0, -1, 0, 0, -1, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -25, 3, -6, -6, 2, -5, -7, 2, -5, -4, 2, -6, -1, 0, -2, 0, 0, 0, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -26, 3, -7, -7, 2, -6, -7, 2, -5, -3, 2, -5, 0, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -24, 3, -6, -8, 3, -7, -5, 2, -4, -2, 2, -5, -1, 0, -2, 0, 0, 0, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -25, 3, -7, -7, 3, -7, -6, 2, -4, -2, 2, -5, 0, 0, -2, -1, 0, 0, 0, 0, -1, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -18, 4, -8, -6, 2, -5, -6, 2, -5, -2, 2, -4, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -24, 3, -7, -7, 3, -7, -4, 2, -4, -2, 2, -5, -2, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -19, 4, -8, -7, 2, -6, -5, 2, -5, -1, 2, -4, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -18, 4, -8, -6, 3, -6, -4, 2, -4, -2, 2, -4, -1, 0, -1, 1, 0, 0, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -20, 4, -9, -5, 2, -5, -4, 2, -4, -2, 2, -5, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -20, 4, -9, -5, 2, -5, -4, 2, -4, -2, 2, -4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -19, 4, -9, -6, 3, -6, -4, 1, -4, -1, 2, -4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 2},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -17, 4, -10, -5, 2, -5, -5, 1, -4, -2, 2, -5, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 2},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -16, 4, -9, -4, 2, -5, -3, 2, -4, -2, 2, -4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 2},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -16, 4, -9, -5, 2, -6, -3, 2, -4, -1, 1, -3, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -18, 4, -10, -4, 2, -5, -3, 2, -4, -2, 1, -3, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 2},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 4, -8, -5, 2, -5, -3, 2, -4, 0, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 4, -8, -4, 2, -5, -4, 1, -4, -1, 1, -3, -1, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 4, -8, -4, 2, -5, -3, 1, -4, -1, 1, -3, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -13, 3, -8, -4, 2, -5, -3, 1, -4, -1, 1, -3, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 3, -8, -5, 2, -6, -3, 1, -4, 0, 1, -2, 0, 0, 0, 0, 0, -2, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -13, 4, -9, -4, 2, -5, -3, 1, -4, -1, 1, -2, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, 3, -8, -4, 2, -5, -3, 1, -4, -1, 0, -2, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 3, -8, -3, 2, -4, -3, 1, -4, -2, 0, -2, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 3, -8, -5, 2, -6, -2, 1, -4, -1, 0, -2, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 3, -8, -3, 2, -4, -1, 1, -3, -1, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 3, -8, -2, 1, -3, -1, 1, -3, 0, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 4, -9, -4, 1, -3, -1, 1, -2, -1, 0, -2, 0, 0, 0, 0, 0, -1, 0, 0, -1, 1, 0, 4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 3, -8, -3, 1, -3, -1, 1, -2, 0, 0, -2, 0, 0, 0, 0, 0, -2, 0, 0, -1, 0, 0, 4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 4, -9, -4, 1, -3, 0, 1, -2, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 1, 0, 4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 3, -8, -2, 1, -2, -1, 1, -3, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 3, -8, -2, 1, -2, -1, 1, -2, 0, 0, -2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
#endif
#endif /* __DYNAMIC_AID_XXXX_H */
