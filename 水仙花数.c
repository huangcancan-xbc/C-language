#define _CRT_SECURE_NO_WARNINGS 1

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 1; i <= 100000; i++)
	{
		int sum = 0;
		int temp = i;
		int n = i, count = 0;
		while (n)
		{
			n /= 10;
			count++;
		}
		while (temp > 0)
		{
			int a = temp % 10;
			sum += pow(a, count);
			temp /= 10;
		}

		if (sum == i)
		{
			printf("%d ", i);
		}
	}
}
//
///*
//˼·��
//����Ĺؼ�����ֻҪ֪���ж�һ�������Ƿ�Ϊˮ�ɻ����ķ�ʽ�������ӭ�ж��⡣�ٶ�����һ������data�������ⷽʽ���£�
//1. ��ȡdata�Ǽ�λ��
//2. ��ȡdata��ÿ��λ���ϵ����ݣ�����������������
//3. ��data��ÿ��λ�ϵ��������������ɺ��ڼ�������Ƿ���data��ȼ��ɣ�
//��ȣ���Ϊˮ�ɻ���
//���򣺲���
//����ʵ�ֲο����´��롣
//*/
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 99999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}