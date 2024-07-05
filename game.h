#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HANG 3
#define LIE 3

// 1开始游戏
void kaishi();

// 2菜单
void caidan();

// 3游戏
void game();

//棋盘
void qipan(char qizi[HANG][LIE], int hang, int lie);

//打印界面
void printf_jiemian(char qizi[HANG][LIE], int hang, int lie);

//玩家落子
void wanjia(char qizi[HANG][LIE], int hang, int lie);

//电脑落子
void computer(char qizi[HANG][LIE], int x, int y);

//棋盘是否满了
static int is_full(char qizi[HANG][LIE], int hang, int lie);

//判断输赢
char ying(char qizi[HANG][LIE], int hang, int lie);