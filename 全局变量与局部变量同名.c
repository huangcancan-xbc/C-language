#include <stdio.h>

int x = 20; //全局变量x

void test()
{
	int x = 30; //局部变量x

	printf("x=%d\n", x); //此时访问的是局部变量x，全局变量x被屏蔽
}

int main(void)
{
	test();

	printf("x=%d\n", x); 
	//此时访问的是全局变量x，test函数中的局部变量x已经消亡

	return 0;
}

