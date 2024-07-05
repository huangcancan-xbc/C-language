#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//棋盘初始化
void qipan(char qizi[HANG][LIE], int hang, int lie)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < lie; j++)
		{
			qizi[i][j] = ' ';
		}
	}
}
// 游戏界面
void printf_jiemian(char qizi[HANG][LIE], int hang, int lie)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < lie; j++)
		{
			printf(" %c ", qizi[i][j]);
			if (j < lie - 1)
				printf("|");
		}
		printf("\n");
		if (i < hang - 1)
		{
			for (int k = 0; k < lie; k++)
			{
				printf("---");
				if (k < lie - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//4下棋
void wanjia(char qizi[HANG][LIE], int hang, int lie)
{
	//玩家下棋
	while (1)
	{
		printf("玩家下棋,请输入要下棋的坐标：");
		int x = 0, y = 0;
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= hang && y >= 1 && y <= lie)
		{
			if (qizi[x - 1][y - 1] = ' '&& qizi[x - 1][y - 1] != '#'&& qizi[x - 1][y - 1] != 'X')
			{
				qizi[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("该位置已被占用！请重新输入！\n");
			}
		}
		else
		{
			printf("坐标无效！\n");
		}
	}
}

//5电脑下棋
void computer(char qizi[HANG][LIE], int hang, int lie)
{
	printf("电脑下棋中...\n");
	while (1)
	{
		int x = rand() % hang ;
		int y = rand() % lie ;

		if (qizi[x][y] == ' '&& qizi[x][y] != 'X')
		{
			qizi[x][y] = '#';
			printf("电脑下棋坐标：%d %d\n", x+1, y+1);
			break;
		}
	}
}


//7判断是否满
static int is_full(char qizi[HANG][LIE], int hang, int lie)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < lie; j++)
		{
			if (qizi[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//6判断输赢
char ying(char qizi[HANG][LIE], int hang, int lie)
{
	//判断三行
	for (int i = 0; i < hang; i++)
	{
		if (qizi[i][0] == qizi[i][1] && qizi[i][1] == qizi[i][2] && qizi[i][0] != ' ')
		{
			return qizi[i][0];
		}
	}
	//判断三列
	for (int i = 0; i < lie; i++)
	{
		if (qizi[0][i] == qizi[1][i] && qizi[1][i] == qizi[2][i] && qizi[0][i] != ' ')
		{
			return qizi[0][i];
		}
	}
	//判断对角线
	if (qizi[0][0] == qizi[1][1] && qizi[1][1] == qizi[2][2] && qizi[1][1] != ' ')
	{
		return qizi[1][1];
	}
	if (qizi[0][2] == qizi[1][1] && qizi[1][1] == qizi[2][0] && qizi[1][1] != ' ')
	{
		return qizi[1][1];
	}
	//是否平局
	if (is_full(qizi, hang, lie) == 1)
	{
		return 'P';
	}
	//继续
	return 'C';
}
