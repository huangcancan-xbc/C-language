#include <stdio.h>

void test()
{
	static int x = 10; //xΪ��̬�ֲ�����
	int y = 10;         //yΪ�Ǿ�̬�ֲ���������auto�͵��Զ�����

	printf("x=%d, y=%d\n", x, y);
	x = x + 10;
	y = y + 10;
}

int main(void)
{
	test();
	test();
	test();
	return 0;
}

