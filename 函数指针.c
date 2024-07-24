#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//printf("%p\n", &Add);
	//int arr[10];
	//int (*pa)[10] = &arr;

	//int (*pf)(int, int) = &Add;
	int (* pf)(int, int) = Add;
	//int ret = Add(2, 3);

	int ret = pf(2, 3);
	//等价int ret = (*pf)(2, 3);int ret = （****pf）(2, 3);*的数量可随意，但是有*一定要加括号！！！

	printf("%d\n", ret);

	//int (*pf)(int, int) = Add;
	//&函数名和函数名都是函数的地址
	
	//pf 是一个存放函数地址的指针变量 -  函数指针
	return 0;
}