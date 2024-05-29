#define _CRT_SECURE_NO_WARNINGS 1
//C语言提供了非常丰富的操作符，使得C语言非常的灵活
//
//
//%d - 十进制的整型
//%c - 字符
//%s  - 字符串
//%f - 打印float类型的浮点数
//%lf - 打印double类型的浮点数
//
//
//   / 除号的两端如果都是整数，执行的是整数除法
//   / 除号的两端至少有一个数是浮点数，才能执行浮点数的除法
//
// / 除号
// % 取模（取余）,%操作的两个操作数必须都是整数


int main()
{
	float n = 10 % 4;
	printf("%f\n", n);

	return 0;
}

int main()
{
	int a = 0;//初始化，创建变量的同时给一个值，这叫初始化
	a = 20;//赋值

	a = a + 5;
	a += 5;

	a = a * 10;
	a *= 10;

	return 0;
}

//
//真假
//C语言中
//0就是假
//非0表示真
//
//int main()
//{
//	int flag = 5;
//
//	//如果flag为真，就打印hehe
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	//
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
