#include "mht11MatrixLED.h"

const byte rusCharA[8] = {
  B00001110,  // Строка 1
  B00011110,  // Строка 2
  B00110110,  // Строка 3
  B01100110,  // Строка 4
  B01111110,  // Строка 5
  B01100110,  // Строка 6
  B01100110,  // Строка 7
  B00000000   // Строка 8 (пустая)
};

const byte rusCharB[8] = {
  B01111100,  // Строка 1
  B01100000,  // Строка 2
  B01100000,  // Строка 3
  B01111100,  // Строка 4
  B01100110,  // Строка 5
  B01100110,  // Строка 6
  B01111100,  // Строка 7
  B00000000   // Строка 8 (пустая)
};

byte rusCharV[8] = {
 B01111100,
	B01100110,
	B01100110,
	B01111100,
	B01100110,
	B01100110,
	B01111100,
	B00000000
};

byte rusCharG[8] = {
 B01111110,
	B01100000,
	B01100000,
	B01100000,
	B01100000,
	B01100000,
	B01100000,
	B00000000
};

byte rusCharD[8] = {
 B00011100,
	B00111100,
	B01101100,
	B01101100,
	B01101100,
	B01101100,
	B11111110,
	B11000110
};

byte rusCharE[8] = {
 B01111110,
	B01100000,
	B01100000,
	B01111100,
	B01100000,
	B01100000,
	B01111110,
	B00000000
};

byte rusCharJ[8] = {
 B11011011,
	B11011011,
	B01111110,
	B00111100,
	B01111110,
	B11011011,
	B11011011,
	B00000000
};

byte rusCharZ[8] = {
 B00111100,
	B01100110,
	B00000110,
	B00011100,
	B00000110,
	B01100110,
	B00111100,
	B00000000
};

byte rusCharI[8] = {
 B01100110,
	B01100110,
	B01101110,
	B01111110,
	B01110110,
	B01100110,
	B01100110,
	B00000000
};

byte rusCharIK[8] = {
 B00111100,
	B01100110,
	B01101110,
	B01111110,
	B01110110,
	B01100110,
	B01100110,
	B00000000
};

byte rusCharK[8] = {
 B01100110,
	B01101100,
	B01111000,
	B01110000,
	B01111000,
	B01101100,
	B01100110,
	B00000000
};

byte rusCharL[8] = {
 B00001110,
	B00011110,
	B00110110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00000000
};

byte rusCharM[8] = {
 B11000110,
	B11101110,
	B11111110,
	B11111110,
	B11010110,
	B11010110,
	B11000110,
	B00000000
};

byte rusCharN[8] = {
 B01100110,
	B01100110,
	B01100110,
	B01111110,
	B01100110,
	B01100110,
	B01100110,
	B00000000
};

byte rusCharO[8] = {
 B00111100,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00111100,
	B00000000
};

byte rusCharII[8] = {
 B01111110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00000000
};

byte rusCharR[8] = {
 B01111100,
	B01100110,
	B01100110,
	B01100110,
	B01111100,
	B01100000,
	B01100000,
	B00000000
};

byte rusCharS[8] = {
 B00111100,
	B01100110,
	B01100000,
	B01100000,
	B01100000,
	B01100110,
	B00111100,
	B00000000
};

byte rusCharT[8] = {
 B01111110,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00000000
};

byte rusCharY[8] = {
 B01100110,
	B01100110,
	B01100110,
	B00111110,
	B00000110,
	B01100110,
	B00111100,
	B00000000
};

byte rusCharF[8] = {
 B01111110,
	B11011011,
	B11011011,
	B11011011,
	B01111110,
	B00011000,
	B00011000,
	B00000000
};

byte rusCharX[8] = {
 B01100110,
	B01100110,
	B00111100,
	B00011000,
	B00111100,
	B01100110,
	B01100110,
	B00000000
};

byte rusCharCE[8] = {
 B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01111111,
	B00000011
};

byte rusCharCHE[8] = {
 B01100110,
	B01100110,
	B01100110,
	B00111110,
	B00000110,
	B00000110,
	B00000110,
	B00000000
};

byte rusCharSHA[8] = {
 B11011011,
	B11011011,
	B11011011,
	B11011011,
	B11011011,
	B11011011,
	B11111111,
	B00000000
};

byte rusCharSHA2[8] = {
 B11011011,
	B11011011,
	B11011011,
	B11011011,
	B11011011,
	B11011011,
	B11111111,
	B00000011
};

byte rusCharEP[8] = {
 B11100000,
	B01100000,
	B01100000,
	B01111100,
	B01100110,
	B01100110,
	B01111100,
	B00000000
};

byte rusCharbI[8] = {
 B11000110,
	B11000110,
	B11000110,
	B11110110,
	B11011110,
	B11011110,
	B11110110,
	B00000000
};

byte rusCharb2[8] = {
 B01100000,
	B01100000,
	B01100000,
	B01111100,
	B01100110,
	B01100110,
	B01111100,
	B00000000
};

byte rusCharE2[8] = {
 B01111000,
	B10001100,
	B00000110,
	B00111110,
	B00000110,
	B10001100,
	B01111000,
	B00000000
};

byte rusCharIY[8] = {
 B11001110,
	B11011011,
	B11011011,
	B11111011,
	B11011011,
	B11011011,
	B11001110,
	B00000000
};

byte rusCharIA[8] = {
 B00111110,
	B01100110,
	B01100110,
	B01100110,
	B00111110,
	B00110110,
	B01100110,
	B00000000
};
//////////////////////

byte rusChar_aSmall[8] = {
 B00000000,
	B00000000,
	B00111100,
	B00000110,
	B00111110,
	B01100110,
	B00111010,
	B00000000
};

byte rusChar_BSmall[8] = {
 B00000000,
	B00111100,
	B01100000,
	B00111100,
	B01100110,
	B01100110,
	B00111100,
	B00000000
};

byte rusChar_vSmall[8] = {
 B00000000,
	B00000000,
	B01111100,
	B01100110,
	B01111100,
	B01100110,
	B01111100,
	B00000000
};

byte rusChar_gSmall[8] = {
 B00000000,
	B00000000,
	B01111110,
	B01100000,
	B01100000,
	B01100000,
	B01100000,
	B00000000
};

byte rusChar_dSmall[8] = {
 B00000000,
	B00000000,
	B00011100,
	B00111100,
	B01101100,
	B01101100,
	B11111110,
	B10000010
};

byte rusChar_eSmall[8] = {
 B00000000,
	B00000000,
	B00111100,
	B01100110,
	B01111110,
	B01100000,
	B00111100,
	B00000000
};

byte rusChar_jSmall[8] = {
 B00000000,
	B00000000,
	B11011011,
	B01111110,
	B00111100,
	B01111110,
	B11011011,
	B00000000
};

byte rusChar_zSmall[8] = {
 B00000000,
	B00000000,
	B00111100,
	B01100110,
	B00001100,
	B01100110,
	B00111100,
	B00000000
};

byte rusChar_iSmall[8] = {
 B00000000,
	B00000000,
	B01100110,
	B01101110,
	B01111110,
	B01110110,
	B01100110,
	B00000000
};

byte rusChar_ikSmall[8] = {
 B00000000,
	B00011000,
	B01100110,
	B01101110,
	B01111110,
	B01110110,
	B01100110,
	B00000000
};

byte rusChar_kSmall[8] = {
B00000000,
	B00000000,
	B01100110,
	B01101100,
	B01111000,
	B01101100,
	B01100110,
	B00000000
};

byte rusChar_lSmall[8] = {
B00000000,
	B00000000,
	B00001110,
	B00011110,
	B00110110,
	B01100110,
	B01100110,
	B00000000
};

byte rusChar_mSmall[8] = {
B00000000,
	B00000000,
	B11000110,
	B11111110,
	B11111110,
	B11010110,
	B11010110,
	B00000000
};

byte rusChar_nSmall[8] = {
B00000000,
	B00000000,
	B01100110,
	B01100110,
	B01111110,
	B01100110,
	B01100110,
	B00000000
};

byte rusChar_oSmall[8] = {
B00000000,
	B00000000,
	B00111100,
	B01100110,
	B01100110,
	B01100110,
	B00111100,
	B00000000
};

byte rusChar_peSmall[8] = {
B00000000,
	B00000000,
	B01111110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00000000
};

byte rusChar_rSmall[8] = {
B00000000,
	B00000000,
	B01111100,
	B01100110,
	B01100110,
	B01111100,
	B01100000,
	B00000000
};

byte rusChar_sSmall[8] = {
B00000000,
	B00000000,
	B00111100,
	B01100110,
	B01100000,
	B01100110,
	B00111100,
	B00000000
};

byte rusChar_tSmall[8] = {
B00000000,
	B00000000,
	B01111110,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00000000
};

byte rusChar_ySmall[8] = {
B00000000,
	B00000000,
	B01100110,
	B01100110,
	B00111110,
	B00000110,
	B01111100,
	B00000000
};

byte rusChar_fSmall[8] = {
B00000000,
	B00000000,
	B01111110,
	B11011011,
	B11011011,
	B01111110,
	B00011000,
	B00000000
};

byte rusChar_xSmall[8] = {
B00000000,
	B00000000,
	B01100110,
	B00111100,
	B00011000,
	B00111100,
	B01100110,
	B00000000
};

byte rusChar_ceSmall[8] = {
B00000000,
	B00000000,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01111111,
	B00000011
};

byte rusChar_cheSmall[8] = {
B00000000,
	B00000000,
	B01100110,
	B01100110,
	B00111110,
	B00000110,
	B00000110,
	B00000000
};

byte rusChar_shaSmall[8] = {
B00000000,
	B00000000,
	B11011011,
	B11011011,
	B11011011,
	B11011011,
	B11111111,
	B00000000
};


byte rusChar_sha2Small[8] = {
B00000000,
	B00000000,
	B11011011,
	B11011011,
	B11011011,
	B11011011,
	B11111111,
	B00000011
};

byte rusChar_tvzSmall[8] = {
B00000000,
	B00000000,
	B11100000,
	B01100000,
	B01111100,
	B01100110,
	B01111100,
	B00000000
};

byte rusChar_iiiSmall[8] = {
B00000000,
	B00000000,
	B11000110,
	B11000110,
	B11110110,
	B11011110,
	B11110110,
	B00000000
};

byte rusChar_mgzSmall[8] = {
B01100000,
	B01100000,
	B01100000,
	B01111100,
	B01100110,
	B01100110,
	B01111100,
	B00000000
};

byte rusChar_eeeSmall[8] = {
B00000000,
	B00000000,
	B01111100,
	B00000110,
	B00111110,
	B00000110,
	B01111100,
	B00000000
};

byte rusChar_youSmall[8] = {
B00000000,
	B00000000,
	B11001110,
	B11011011,
	B11111011,
	B11011011,
	B11001110,
	B00000000
};

byte rusChar_yaSmall[8] = {
B00000000,
	B00000000,
	B00111110,
	B01100110,
	B00111110,
	B00110110,
	B01100110,
	B00000000
};


byte digit_zero[8] = {
B01111100,
	B11000110,
	B11001110,
	B11011110,
	B11110110,
	B11100110,
	B01111100,
	B00000000
};

byte digit_one[8] = {
B00110000,
	B01110000,
	B00110000,
	B00110000,
	B00110000,
	B00110000,
	B00110000,
	B00000000
};

byte digit_two[8] = {
B01111000,
	B11001100,
	B00001100,
	B00111000,
	B01100000,
	B11000000,
	B11111100,
	B00000000
};

byte digit_three[8] = {
B01111000,
	B11001100,
	B00001100,
	B00111000,
	B00001100,
	B11001100,
	B01111000,
	B00000000
};

byte digit_four[8] = {
B00011100,
	B00111100,
	B01101100,
	B11001100,
	B11111110,
	B00001100,
	B00001100,
	B00000000
};

byte digit_five[8] = {
B11111100,
	B11000000,
	B11111000,
	B00001100,
	B00001100,
	B11001100,
	B01111000,
	B00000000
};

byte digit_six[8] = {
B00111000,
	B01100000,
	B11000000,
	B11111000,
	B11001100,
	B11001100,
	B01111000,
	B00000000
};

byte digit_seven[8] = {
B11111100,
	B00001100,
	B00001100,
	B00011000,
	B00110000,
	B00110000,
	B00110000,
	B00000000
};

byte digit_eight[8] = {
B01111000,
	B11001100,
	B11001100,
	B01111000,
	B11001100,
	B11001100,
	B01111000,
	B00000000
};

byte digit_nine[8] = {
B01111000,
	B11001100,
	B11001100,
	B01111100,
	B00001100,
	B00011000,
	B01110000,
	B00000000
};

byte engChar_A_big[8] = {
B00011000,
	B00111100,
	B01100110,
	B01100110,
	B01111110,
	B01100110,
	B01100110,
	B00000000
};

byte engChar_B_big[8] = {
B01111100,
	B01100110,
	B01100110,
	B01111100,
	B01100110,
	B01100110,
	B01111100,
	B00000000
};

byte engChar_C_big[8] = {
B00111100,
	B01100110,
	B11000000,
	B11000000,
	B11000000,
	B01100110,
	B00111100,
	B00000000
};

byte engChar_D_big[8] = {
B01111000,
	B01101100,
	B01100110,
	B01100110,
	B01100110,
	B01101100,
	B01111000,
	B00000000
};

byte engChar_E_big[8] = {
B01111110,
	B01100000,
	B01100000,
	B01111000,
	B01100000,
	B01100000,
	B01111110,
	B00000000
};

byte engChar_F_big[8] = {
B01111110,
	B01100000,
	B01100000,
	B01111000,
	B01100000,
	B01100000,
	B01100000,
	B00000000
};

byte engChar_G_big[8] = {
B00111100,
	B01100110,
	B11000000,
	B11000000,
	B11001110,
	B01100110,
	B00111110,
	B00000000
};


byte engChar_H_big[8] = {
B01100110,
	B01100110,
	B01100110,
	B01111110,
	B01100110,
	B01100110,
	B01100110,
	B00000000
};

byte engChar_I_big[8] = {
B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00000000
};

byte engChar_J_big[8] = {
B00000110,
	B00000110,
	B00000110,
	B00000110,
	B01100110,
	B01100110,
	B00111100,
	B00000000
};

byte engChar_K_big[8] = {
B01100110,
	B01100110,
	B01101100,
	B01111000,
	B01101100,
	B01100110,
	B01100110,
	B00000000
};

byte engChar_L_big[8] = {
B01100000,
	B01100000,
	B01100000,
	B01100000,
	B01100000,
	B01100000,
	B01111110,
	B00000000
};

byte engChar_M_big[8] = {
B11000110,
	B11101110,
	B11111110,
	B11111110,
	B11010110,
	B11000110,
	B11000110,
	B00000000
};

byte engChar_N_big[8] = {
B11000110,
	B11100110,
	B11110110,
	B11011110,
	B11001110,
	B11000110,
	B11000110,
	B00000000
};

byte engChar_O_big[8] = {
B00111100,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00111100,
	B00000000
};

byte engChar_P_big[8] = {
B01111100,
	B01100110,
	B01100110,
	B01111100,
	B01100000,
	B01100000,
	B01100000,
	B00000000
};


byte engChar_Q_big[8] = {
B00111100,
	B01100110,
	B01100110,
	B01100110,
	B01101110,
	B00111100,
	B00001110,
	B00000000
};


byte engChar_R_big[8] = {
B01111100,
	B01100110,
	B01100110,
	B01111100,
	B01101100,
	B01100110,
	B01100110,
	B00000000
};

byte engChar_S_big[8] = {
B00111100,
	B01100110,
	B01110000,
	B00111000,
	B00001110,
	B01100110,
	B00111100,
	B00000000
};

byte engChar_T_big[8] = {
B01111110,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00000000
};

byte engChar_U_big[8] = {
B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00111110,
	B00000000
};

byte engChar_V_big[8] = {
B01100110,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00111100,
	B00011000,
	B00000000
};

byte engChar_W_big[8] = {
B11000110,
	B11000110,
	B11000110,
	B11010110,
	B11111110,
	B11101110,
	B11000110,
	B00000000
};

byte engChar_X_big[8] = {
B01100110,
	B01100110,
	B00111100,
	B00011000,
	B00111100,
	B01100110,
	B01100110,
	B00000000
};

byte engChar_Y_big[8] = {
B01100110,
	B01100110,
	B01100110,
	B00111100,
	B00011000,
	B00011000,
	B00011000,
	B00000000
};

byte engChar_Z_big[8] = {
B11111110,
	B00000110,
	B00001100,
	B00011000,
	B00110000,
	B01100000,
	B11111110,
	B00000000
};

const byte engChar_a_small[8] = {
  B00000000,
	B00000000,
	B00111100,
	B00000110,
	B00111110,
	B01100110,
	B00111010,
	B00000000
};

const byte engChar_b_small[8] = {
  B01100000,
	B01100000,
	B01100000,
	B01111100,
	B01100110,
	B01100110,
	B01011100,
	B00000000
};

const byte engChar_c_small[8] = {
  B00000000,
	B00000000,
	B00111100,
	B01100110,
	B01100000,
	B01100110,
	B00111100,
	B00000000
};

const byte engChar_d_small[8] = {
  B00000110,
	B00000110,
	B00000110,
	B00111110,
	B01100110,
	B01100110,
	B00111010,
	B00000000
};

const byte engChar_e_small[8] = {
  B00000000,
	B00000000,
	B00111100,
	B01100110,
	B01111110,
	B01100000,
	B00111100,
	B00000000
};

const byte engChar_f_small[8] = {
  B00011100,
	B00110110,
	B00110000,
	B01111000,
	B00110000,
	B00110000,
	B00110000,
	B00000000
};

const byte engChar_g_small[8] = {
  B00000000,
	B00000000,
	B00111010,
	B01100110,
	B01100110,
	B00111110,
	B00000110,
	B00111100
};

const byte engChar_h_small[8] = {
  B01100000,
	B01100000,
	B01101100,
	B01110110,
	B01100110,
	B01100110,
	B01100110,
	B00000000
};

const byte engChar_i_small[8] = {
  B00011000,
	B00000000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00000000
};

const byte engChar_j_small[8] = {
  B00001100,
	B00000000,
	B00001100,
	B00001100,
	B00001100,
	B11001100,
	B11001100,
	B01111000
};

const byte engChar_k_small[8] = {
  B01100000,
	B01100000,
	B01100110,
	B01101100,
	B01111000,
	B01101100,
	B01100110,
	B00000000
};

const byte engChar_l_small[8] = {
  B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00000000
};

const byte engChar_m_small[8] = {
  B00000000,
	B00000000,
	B11000110,
	B11101110,
	B11111110,
	B11010110,
	B11000110,
	B00000000
};

const byte engChar_n_small[8] = {
  B00000000,
	B00000000,
	B01111100,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00000000
};

const byte engChar_o_small[8] = {
  B00000000,
	B00000000,
	B00111100,
	B01100110,
	B01100110,
	B01100110,
	B00111100,
	B00000000
};

const byte engChar_p_small[8] = {
  B00000000,
	B00000000,
	B01011100,
	B01100110,
	B01100110,
	B01111100,
	B01100000,
	B01100000
};

const byte engChar_q_small[8] = {
  B00000000,
	B00000000,
	B00111010,
	B01100110,
	B01100110,
	B00111110,
	B00000110,
	B00000110
};

const byte engChar_r_small[8] = {
  B00000000,
	B00000000,
	B01011100,
	B01110110,
	B01100000,
	B01100000,
	B01100000,
	B00000000
};

const byte engChar_s_small[8] = {
  B00000000,
	B00000000,
	B00111110,
	B01100000,
	B00111100,
	B00000110,
	B01111100,
	B00000000
};

const byte engChar_t_small[8] = {
  B00110000,
	B00110000,
	B01111100,
	B00110000,
	B00110000,
	B00110100,
	B00011000,
	B00000000
};

const byte engChar_u_small[8] = {
  B00000000,
	B00000000,
	B01100110,
	B01100110,
	B01100110,
	B01100110,
	B00111010,
	B00000000
};

const byte engChar_v_small[8] = {
  B00000000,
	B00000000,
	B01100110,
	B01100110,
	B01100110,
	B00111100,
	B00011000,
	B00000000
};

const byte engChar_w_small[8] = {
  B00000000,
	B00000000,
	B11000110,
	B11010110,
	B11111110,
	B11111110,
	B01101100,
	B00000000
};

const byte engChar_x_small[8] = {
  B00000000,
	B00000000,
	B11000110,
	B01101100,
	B00111000,
	B01101100,
	B11000110,
	B00000000
};

const byte engChar_y_small[8] = {
  B00000000,
	B00000000,
	B01100110,
	B01100110,
	B01100110,
	B00111110,
	B00000110,
	B00111100
};

const byte engChar_z_small[8] = {
  B00000000,
	B00000000,
	B01111110,
	B00001100,
	B00011000,
	B00110000,
	B01111110,
	B00000000
};

const byte right_arrowLED[8] = {
  B00000000,
	B00011000,
	B00001100,
	B11111110,
	B00001100,
	B00011000,
	B00000000,
	B00000000
};

const byte left_arrowLED[8] = {
  B00000000,
	B00110000,
	B01100000,
	B11111110,
	B01100000,
	B00110000,
	B00000000,
	B00000000
};

const byte divideLED[8] = {
  B00000110,
	B00001100,
	B00011000,
	B00110000,
	B01100000,
	B11000000,
	B10000000,
	B00000000
};

const byte plusLED[8] = {
  B00000000, 
  B00011000, 
  B00011000, 
  B01111110, 
  B00011000, 
  B00011000, 
  B00000000, 
  B00000000
};

const byte question_markLED[8] = {
  B01111000,
	B11001100,
	B00001100,
	B00011000,
	B00110000,
	B00000000,
	B00110000,
	B00000000
};

const byte commaLED[8] = {
  B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00110000,
	B00110000,
	B01100000
};

const byte equal_signLED[8] = {
  B00000000, 
  B00000000, 
  B01111110, 
  B00000000, 
  B00000000, 
  B01111110, 
  B00000000, 
  B00000000
};

const byte minusLED[8] = {
  B00000000, 
  B00000000, 
  B00000000, 
  B01111110, 
  B00000000, 
  B00000000, 
  B00000000, 
  B00000000
};

const byte dotLED[8] = {
  B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00110000,
	B00110000,
	B00000000
};

const byte exclamation_markLED[8] = {
  B00000000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00000000,
	B00011000
};

// Определение массива letterMap
const LetterMapping letterMap[] = {
  {'А', rusCharA},
  {'Б', rusCharB},
  {'В', rusCharV},
  {'Г', rusCharG},
  {'Д', rusCharD},
  {'Е', rusCharE},
  {'Ж', rusCharJ},
  {'З', rusCharZ},
  {'И', rusCharI},
  {'Й', rusCharIK},
  {'К', rusCharK},
  {'Л', rusCharL},
  {'М', rusCharM},
  {'Н', rusCharN},
  {'О', rusCharO},
  {'П', rusCharII},
  {'Р', rusCharR},
  {'С', rusCharS},
  {'Т', rusCharT},
  {'У', rusCharY},
  {'Ф', rusCharF},
  {'Х', rusCharX},
  {'Ц', rusCharCE},
  {'Ч', rusCharCHE},
  {'Ш', rusCharSHA},
  {'Щ', rusCharSHA2},
  {'Ъ', rusCharEP},
  {'Ы', rusCharbI},
  {'Ь', rusCharb2},
  {'Э', rusCharE2},
  {'Ю', rusCharIY},
  {'Я', rusCharIA},

  {'а', rusChar_aSmall},
  {'б', rusChar_BSmall},
  {'в', rusChar_vSmall},
  {'г', rusChar_gSmall},
  {'д', rusChar_dSmall},
  {'е', rusChar_eSmall},
  {'ж', rusChar_jSmall},
  {'з', rusChar_zSmall},
  {'и', rusChar_iSmall},
  {'й', rusChar_ikSmall},
  {'к', rusChar_kSmall},
  {'л', rusChar_lSmall},
  {'м', rusChar_mSmall},
  {'н', rusChar_nSmall},
  {'о', rusChar_oSmall},
  {'п', rusChar_peSmall},
  {'р', rusChar_rSmall},
  {'с', rusChar_sSmall},
  {'т', rusChar_tSmall},
  {'у', rusChar_ySmall},
  {'ф', rusChar_fSmall},
  {'х', rusChar_xSmall},
  {'ц', rusChar_ceSmall},
  {'ч', rusChar_cheSmall},
  {'ш', rusChar_shaSmall},
  {'щ', rusChar_sha2Small},
  {'ъ', rusChar_tvzSmall},
  {'ы', rusChar_iiiSmall},
  {'ь', rusChar_mgzSmall},
  {'э', rusChar_eeeSmall},
  {'ю', rusChar_youSmall},
  {'я', rusChar_yaSmall},

  {'0', digit_zero},
  {'1', digit_one},
  {'2', digit_two},
  {'3', digit_three},
  {'4', digit_four},
  {'5', digit_five},
  {'6', digit_six},
  {'7', digit_seven},
  {'8', digit_eight},
  {'9', digit_nine},

  {'A', engChar_A_big},
  {'B', engChar_B_big},
  {'C', engChar_C_big},
  {'D', engChar_D_big},
  {'E', engChar_E_big},
  {'F', engChar_F_big},
  {'G', engChar_G_big},
  {'H', engChar_H_big},
  {'I', engChar_I_big},
  {'J', engChar_J_big},
  {'K', engChar_K_big},
  {'L', engChar_L_big},
  {'M', engChar_M_big},
  {'N', engChar_N_big},
  {'O', engChar_O_big},
  {'P', engChar_P_big},
  {'Q', engChar_Q_big},
  {'R', engChar_R_big},
  {'S', engChar_S_big},
  {'T', engChar_T_big},
  {'U', engChar_U_big},
  {'V', engChar_V_big},
  {'W', engChar_W_big},
  {'X', engChar_X_big},
  {'Y', engChar_Y_big},
  {'Z', engChar_Z_big},

  {'a', engChar_a_small},
  {'b', engChar_b_small},
  {'c', engChar_c_small},
  {'d', engChar_d_small},
  {'e', engChar_e_small},
  {'f', engChar_f_small},
  {'g', engChar_g_small},
  {'h', engChar_h_small},
  {'i', engChar_i_small},
  {'j', engChar_j_small},
  {'k', engChar_k_small},
  {'l', engChar_l_small},
  {'m', engChar_m_small},
  {'n', engChar_n_small},
  {'o', engChar_o_small},
  {'p', engChar_p_small},
  {'q', engChar_q_small},
  {'r', engChar_r_small},
  {'s', engChar_s_small},
  {'t', engChar_t_small},
  {'u', engChar_u_small},
  {'v', engChar_v_small},
  {'w', engChar_w_small},
  {'x', engChar_x_small},
  {'y', engChar_y_small},
  {'z', engChar_z_small},

  {'>', right_arrowLED}, // Стрелка вправо
  {'<', left_arrowLED},  // Стрелка влево
  {'/', divideLED},      // Знак деления
  {'+', plusLED},        // Знак плюса
  {'=', equal_signLED},   //знак равно
  {'?', question_markLED}, // Знак вопроса
  {',', commaLED},       // Запятая
  {'-', minusLED},       // Знак минуса
  {'.', dotLED},         // Точка
  {'!', exclamation_markLED},
};


// Конструктор класса, инициализируем массивы пинов
mht11MatrixLED::mht11MatrixLED(const int rowPins[8], const int colPins[8]) {
    _rowPins = rowPins;
    _colPins = colPins;
}

// Инициализация матрицы
void mht11MatrixLED::setup() {
    for (int i = 0; i < 8; i++) {
        pinMode(_rowPins[i], OUTPUT);
        pinMode(_colPins[i], OUTPUT);
        digitalWrite(_rowPins[i], HIGH); // Отключаем строки
        digitalWrite(_colPins[i], LOW);  // Отключаем столбцы
    }
}

// Очистка матрицы
void mht11MatrixLED::clearMatrix() {
    for (int i = 0; i < 8; i++) {
        digitalWrite(_rowPins[i], HIGH);
        digitalWrite(_colPins[i], LOW);
    }
}

// Отображение паттерна на матрице
void mht11MatrixLED::lightMatrix(const byte pattern[8]) {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            if (bitRead(pattern[row], 7 - col)) {
                digitalWrite(_rowPins[row], LOW);
                digitalWrite(_colPins[col], HIGH);
                delayMicroseconds(100);
                digitalWrite(_rowPins[row], HIGH);
                digitalWrite(_colPins[col], LOW);
            }
        }
    }
}

// Отображение одного символа
void mht11MatrixLED::displayCharacter(const char letter, int displayTime) {
  // Поиск символа в массиве letterMap
  for (int i = 0; i < sizeof(letterMap) / sizeof(letterMap[0]); i++) {
    if (letterMap[i].character == letter) { // Если символ найден
      unsigned long startTime = millis();    // Фиксируем текущее время
      while (millis() - startTime < displayTime) { // Отображаем символ в течение заданного времени
        lightMatrix(letterMap[i].matrix);    // Зажигаем светодиоды по паттерну символа
      }
      clearMatrix();  // Очищаем матрицу после отображения символа
      break;          // Выходим из цикла, как только символ найден и отображен
    }
  }
}

// Отображение текста
void mht11MatrixLED::displayText(const char* text, int displayTime) {
    for (int i = 0; text[i] != '\0'; i++) { // Проходим по каждому символу строки
    displayCharacter(text[i], displayTime); // Отображаем каждый символ
    delay(100); // Задержка между символами для плавности перехода
  }
}