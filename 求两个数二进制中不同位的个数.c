#define _CRT_SECURE_NO_WARNINGS 1

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 

//��������:
//
//1999 2299
//
//������� : 7



//
//˼·��
//1. �Ƚ�m��n���а�λ��򣬴�ʱm��n��ͬ�Ķ����Ʊ���λ���㣬��ͬ�Ķ����Ʊ���λΪ1
//2. ͳ�������ɺ����Ķ����Ʊ���λ���ж��ٸ�1����
//

#include <stdio.h>
int calc_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}


int main()
{
	int m, n;
	while (scanf("%d %d", &m, &n) == 2)
	{
		printf("%d\n", calc_diff_bit(m, n));
	}
	return 0;
}

//#include <stdio.h>
//int main() {
//
//	int n = 0, m = 0;
//
//	scanf("%d%d", &n, &m);
//
//	int a = n ^ m;
//
//	int count = 0;
//
//	while (a)
//
//	{
//
//		if (a & 1)
//
//		{
//
//			count++;
//
//		}
//
//		a >>= 1;
//
//	}
//
//	printf("%d", count);
//
//	return 0;
//
//}