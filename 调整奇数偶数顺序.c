#define _CRT_SECURE_NO_WARNINGS 1

//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

#include <stdio.h>

void move(int arr[], int sz)
{
	int qian = 0;
	int hou = sz - 1;
	while (qian < hou)
	{
		while (qian < hou && (arr[qian] % 2 == 1))
		{
			qian++;
		}

		while (qian < hou && (arr[hou] % 2 == 0))
		{
			hou--;
		}

		if (qian < hou)
		{
			int temp = arr[qian];
			arr[qian] = arr[hou];
			arr[hou] = temp;
			qian++;
			hou--;
		}
	}
}
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//
///*
//˼·��
//1. ���������±�left��right��left�����������ʼλ�ã�right�������������һ��Ԫ�ص�λ��
//2. ѭ������һ�²���
// a. ���left��right��ʾ������[left, right]��Ч������b���������ѭ��
// b. left��ǰ�����ң��ҵ�һ��ż����ֹͣ
// c. right�Ӻ���ǰ�ң��ҵ�һ��������ֹͣ
// d. ���left��right���ҵ��˶�Ӧ�����ݣ��򽻻�������a��
//*/
//void swap_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//
//	while (left < right)
//	{
//		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//
//		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// ���ż�����������ҵ����������������ݵ�λ��
//		// Ȼ������ң�ֱ������ָ������
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}