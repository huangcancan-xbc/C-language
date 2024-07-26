#define _CRT_SECURE_NO_WARNINGS 1
//写一个计算器整数加、减、乘、除
//a&b a|b a^b a>>b a<<b

#include <stdio.h>

void menu()
{
	printf("*******************************\n");
	printf("****** 1. add   2. sub    *****\n");
	printf("****** 3. mul   4. div    *****\n");
	printf("****** 0. exit            *****\n");
	printf("*******************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出计算器!\n");
			break;
		default:
			printf("选择错误!\n");
			break;
		}
	} while (input);

	return 0;
}





//2.
//void menu()
//{
//	printf("*******************************\n");
//	printf("****** 1. add   2. sub    *****\n");
//	printf("****** 3. mul   4. div    *****\n");
//	printf("****** 0. exit            *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////函数指针数组存放上述函数的地址
////转移表
//int (*p[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器!\n");
//			return 0;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d",&x, &y);
//			int result = p[input](x, y);
//			printf("计算结果为：%d\n\n", result);
//		}
//		else
//		{
//			printf("输入错误!\n");
//		}
//	} while (input);
//	return 0;
//}






//3		所用知识点：
// int main()
//{
//	int arr[10];
//	int (*p)[10] = &arr;	//指针数组，并且等价int (*p)[10] = arr;
//
//	int (* p[5])(int, int);		//函数指针数组
//
//	int (*(* pp)[5])(int, int) = &p;	//pp是指向函数指针数组的指针
//
//	return 0;
//}


//void menu()
//{
//	printf("*******************************\n");
//	printf("****** 1. add   2. sub    *****\n");
//	printf("****** 3. mul   4. div    *****\n");
//	printf("****** 0. exit            *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void Callback(int(*p) (int, int))
//{
//	int x = 0, y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	int result = p(x, y);
//	printf("计算结果为：%d\n\n", result);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出计算器!\n");
//			break;
//		case 1:
//			Callback(Add);
//			break;
//		case 2:
//			Callback(Sub);
//			break;
//		case 3:
//			Callback(Mul);
//			break;
//		case 4:
//			Callback(Div);
//			break;
//		default:
//			printf("输入错误!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}