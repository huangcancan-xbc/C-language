#define _CRT_SECURE_NO_WARNINGS 1
//дһ�������������ӡ������ˡ���
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳�������!\n");
			break;
		default:
			printf("ѡ�����!\n");
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
////����ָ�����������������ĵ�ַ
////ת�Ʊ�
//int (*p[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������!\n");
//			return 0;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d %d",&x, &y);
//			int result = p[input](x, y);
//			printf("������Ϊ��%d\n\n", result);
//		}
//		else
//		{
//			printf("�������!\n");
//		}
//	} while (input);
//	return 0;
//}






//3		����֪ʶ�㣺
// int main()
//{
//	int arr[10];
//	int (*p)[10] = &arr;	//ָ�����飬���ҵȼ�int (*p)[10] = arr;
//
//	int (* p[5])(int, int);		//����ָ������
//
//	int (*(* pp)[5])(int, int) = &p;	//pp��ָ����ָ�������ָ��
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
//	printf("������������������");
//	scanf("%d %d", &x, &y);
//	int result = p(x, y);
//	printf("������Ϊ��%d\n\n", result);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳�������!\n");
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
//			printf("�������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}