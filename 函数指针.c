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
	//�ȼ�int ret = (*pf)(2, 3);int ret = ��****pf��(2, 3);*�����������⣬������*һ��Ҫ�����ţ�����

	printf("%d\n", ret);

	//int (*pf)(int, int) = Add;
	//&�������ͺ��������Ǻ����ĵ�ַ
	
	//pf ��һ����ź�����ַ��ָ����� -  ����ָ��
	return 0;
}