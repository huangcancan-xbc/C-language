#include <stdio.h>

int main(void)
{
	int x = 20;

	{
	    int y = 30;  //yΪ�ڴ˴�����ڶ���ľֲ�������������Ϊ�˴������
	    printf("y=%d\n", y); //�˴�������ȷ
	}

    printf("y=%d\n", y); //�˴����������⣬y�ڴ˴��Ѿ������ڣ����ܷ���
	printf("x=%d\n", x); //�˴����������⣬x��Ȼ���ڣ����Է���

	return 0;
}

