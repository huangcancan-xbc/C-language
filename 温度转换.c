#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main4()
{
	double huashi=0, sheshi=0;
	scanf("%lf", &huashi);

	sheshi = 5.0 / 9.0 * (huashi - 32);
	//��C�����У��������������ʱ�����Ĭ�ϻᱻ�ض�Ϊ��������ˣ�5 / 9 �Ľ������0
	//Ҫ�õ���ȷ�ĸ�����������ȷ������һ�����Ǹ�������
	
	printf("%.2lf", sheshi);
	return 0;
}