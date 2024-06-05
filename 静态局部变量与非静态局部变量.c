#include <stdio.h>

void test()
{
	static int x = 10; //x为静态局部变量
	int y = 10;         //y为非静态局部变量，即auto型的自动变量

	printf("x=%d, y=%d\n", x, y);
	x = x + 10;
	y = y + 10;
}

int main(void)
{
	test();
	test();
	test();
	return 0;
}

