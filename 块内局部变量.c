#include <stdio.h>

int main(void)
{
	int x = 20;

	{
	    int y = 30;  //y为在此代码块内定义的局部变量，作用域为此代码块内
	    printf("y=%d\n", y); //此处代码正确
	}

    printf("y=%d\n", y); //此处代码有问题，y在此处已经不存在，不能访问
	printf("x=%d\n", x); //此处代码无问题，x仍然存在，可以访问

	return 0;
}

