#include <stdio.h>

int main(void)
{
	int m, g, s, b;    	//�ֱ�������m��m�ĸ�λ��ʮλ����λ����	
	for( m = 100; m < 1000; m++)
	{
		g = m % 10;     	//m�ĸ�λ���� 
		s = m / 10 % 10;  	//m��ʮλ���� 
		b = m / 100 % 10; 	//m�İ�λ���֣���Ϊ��֪m����λ��������b=m/100Ҳ��ȷ
		if(m == g * g * g + s * s * s + b * b * b)
			printf("%4d ", m); 
	}	
	
	return 0;
}
