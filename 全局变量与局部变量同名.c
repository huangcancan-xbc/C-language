#include <stdio.h>

int x = 20; //ȫ�ֱ���x

void test()
{
	int x = 30; //�ֲ�����x

	printf("x=%d\n", x); //��ʱ���ʵ��Ǿֲ�����x��ȫ�ֱ���x������
}

int main(void)
{
	test();

	printf("x=%d\n", x); 
	//��ʱ���ʵ���ȫ�ֱ���x��test�����еľֲ�����x�Ѿ�����

	return 0;
}

