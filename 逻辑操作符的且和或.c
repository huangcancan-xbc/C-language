#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//֪ʶ�㣺
//&&�����������Ϊ�٣��ұ�������㣬ֱ�ӷ��ؼ٣�
//||�����������Ϊ�棬�ұ�������㣬ֱ�ӷ����棻
//++�����������������ٷ���ֵ��
//&&��||�����ȼ���ͬ�������Ϊ��ʱ���ұ߲����㣻
//++�����ȼ�����&&��||�����������ٷ���ֵ��

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	i = a++ || ++b || d++;

	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);

	return 0;
}
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ && ++b && d++;
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ && ++b && d++;
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}