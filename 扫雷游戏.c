#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void caidan()
{
	printf("欢迎来到扫雷游戏！\n");
	printf("*************************************\n");
	printf("*********    1.开始游戏     *********\n");
	printf("*********    2.退出游戏     *********\n");
	printf("*************************************\n");
}

void game()
{
	//游戏规则展示
	printf("\t*游戏规则*:\n\n");
	printf("\t1.'1'代表地雷，'0'代表没有地雷（安全），数字代表周围8个格子存在的地雷数。\n\n");
	printf("\t2.玩家需要在不触雷的情况下找到所有没有地雷的格子方可胜出！\n\n");
	printf("  好了，游戏开始！\n\n");
	

	//定义棋盘
	char ming_qi[HANG][LIE] = { 0 };
	char an_qi[HANG][LIE] = { 0 };

	//初始化棋盘
	chushihua(an_qi, HANG, LIE,'0');
	chushihua(ming_qi, HANG, LIE, '*');

	//打印棋盘
	//printf_qipan(an_qi, HANG - 2, LIE - 2);
	printf_qipan(ming_qi, HANG - 2, LIE - 2);

	//布置地雷
	bu_lei(an_qi, HANG - 2, LIE - 2);

	//取消注释可以偷看地雷位置
	//printf_qipan(an_qi, HANG - 2, LIE - 2);

	//排雷
	pai_lei(an_qi, ming_qi, HANG - 2, LIE - 2);

	
}
void kaishi()
{
	srand((unsigned int)time(NULL));
	int yaoshi = 1;
	do
	{
		caidan();
		printf("请输入数字进行选择：\n");
		scanf("%d", &yaoshi);
		switch (yaoshi)
		{
		case 1:
			game();
			break;
		case 2:
			printf("欢迎下次再来！\n\n\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (yaoshi);
}
int main()
{
	kaishi();
	
	return 0;
}