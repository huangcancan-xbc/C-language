#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
// 2菜单
void caidan()
{
	printf("*******************************\n");
	printf("********* 1.开始游戏  *********\n");
	printf("********* 2.退出游戏  *********\n");
	printf("*******************************\n");
}

void game()
{
	char qizi[HANG][LIE];
	char temp = 0;
	//初始化棋盘
	qipan(qizi, HANG, LIE);
	printf_jiemian(qizi, HANG, LIE);
	while (1)
	{
		//玩家下棋
		wanjia(qizi, HANG, LIE);
		printf_jiemian(qizi, HANG, LIE);
		//判断输赢
		temp = ying(qizi, HANG, LIE);
		if (temp != 'C')
		{
			break;
		}
		
		//电脑下棋
		computer(qizi, HANG, LIE);
		printf_jiemian(qizi, HANG, LIE);
		//判断输赢
		temp = ying(qizi, HANG, LIE);
		if (temp != 'C')
		{
			break;
		}
	}
	if (temp == '#')
		printf("电脑赢了！\n");
	else if (temp == 'X')
		printf("你赢了！\n");
	else if (temp == 'P')
		printf("平局！\n");
}

void kaishi()
{
	srand((unsigned int)time(NULL));
	int yaoshi = 2;
	do
	{
	caidan();
	printf("请选择：");
	scanf("%d", &yaoshi);
		switch (yaoshi)
		{
		case 1:
			printf("开始游戏！\n");
			game();
			break;
		case 2:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误！\n");
			break;
		}
	} while (yaoshi);
}

int main()
{
	kaishi();

	return 0;
}