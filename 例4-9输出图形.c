#include <stdio.h>

int main(void)
{
	int i, j;
	char ch = '*';	
	for(i = 1; i <= 3; i++)         	//i�����к�
	{ //Ҫ�������*������i�ӳ�ֵ����ֵ��֤�ڲ�ѭ��ִ��3�� 
		for(j = 1;j <= 2 * i - 1; j++)   	//j��������ÿ���ǺŸ���
			printf("%c", ch);
		printf("\n");             	//ÿ��*����껻�� 
	}
	
	return 0;
}
