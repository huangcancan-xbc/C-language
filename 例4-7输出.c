#include <stdio.h>

int main(void)
{
	for(int i = 1;i <= 100;i++)
	{
		if(i % 2 != 0)   continue;    	//�����ѭ����䲻ִ�У�ֱ��ִ��i++
		printf("%3d ", i);
	}
	
	return 0;
}
