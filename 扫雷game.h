#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//棋盘大小
#define HANG 11
#define LIE 11

#define lei_shu 20//修改数字可以改变雷数

void caidan();

void kaishi();

//初始化棋盘
void chushihua(char qizi[HANG][LIE], int hang, int lie, char lei);

//打印棋盘
void printf_qipan(char qizi[HANG][LIE], int hang , int lie );

//布置雷
//void bu_lei(char an_qi[HANG][LIE], int hang, int lie);
void bu_lei(char qi_zi[HANG][LIE], int hang, int lie);


//排雷
void pai_lei(char an_qi[HANG][LIE], char ming_qi[HANG][LIE], int hang, int lie);

//雷数提示
int ti_shi(char an_qi[HANG][LIE], int x, int y);
