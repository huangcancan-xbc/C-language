#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void caidan()
{
	printf("**************************\n");
	printf("******   1. play   *******\n");
	printf("******   0. exit   *******\n");
	printf("**************************\n");
}

//rand函数是专门用来生成随机数的
//rand函数返回的是0~RAND_MAX(32767)之间的一个随机数
//#define RAND_MAX 0x7fff

//rand函数在使用之前要使用一个srand函数来设置随机数的生成器
//srand函数在程序中只要调用一次就可以了，不需要频繁调用

//时间戳
//C语言中，time函数会返回时间戳
//
//NULL - 空指针

void game()
{
	int a = 0;
	//1. 生成随机数
	int ret = rand()%1000+1;
	//printf("%d\n", ret);
	//2. 猜数字
		printf ("我已经想好了一个1到1000之间的数。\n");
		printf ("请猜猜这个1到1000之间的数：");
		int count=0;
	while (1)
	{
		
		scanf("%d", &a);
		count++;
		if (a < ret)
		{
			printf("你猜的数小了\n");
		}
		else if (a > ret)
		{
			printf("你猜的数大了\n");
		}
		else
		{
			printf ("太好了，你用了%d次就猜到了答案。\n",count);
			break;
		}
	}
}
int main()
{
	int kaishi = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//打印菜单
		caidan();
		printf("请选择:");
		scanf("%d", &kaishi);
		switch (kaishi)
		{
		case 1:
			game();//game函数中是猜数字的整个路基逻辑
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (kaishi);

	return 0;
}
