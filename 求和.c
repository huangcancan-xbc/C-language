#define _CRT_SECURE_NO_WARNINGS 1

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#include <stdio.h>

int main()
{
	int a = 0, sum = 0;
	printf("������һ�����֣�");
	scanf("%d", &a);
	sum = a + a * 11 + a * 111 + a * 1111 + a * 11111;
	printf("Sn = %d\n", sum);

	return 0;
}
//
///*
//˼·��
//ͨ���۲���Է��֣��ñ��ʽ�ĵ�i������i��a���֣���ˣ�
//�����i��Ϊtemp�����i+1��Ϊtemp*10+a
//����ο����´���
//*/
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}