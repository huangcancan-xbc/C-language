#include <stdio.h>

int main(void)
{
	int m, g, s, b;    	//分别存放整数m及m的个位、十位、百位数字	
	for( m = 100; m < 1000; m++)
	{
		g = m % 10;     	//m的个位数字 
		s = m / 10 % 10;  	//m的十位数字 
		b = m / 100 % 10; 	//m的百位数字，因为已知m是三位数，所以b=m/100也正确
		if(m == g * g * g + s * s * s + b * b * b)
			printf("%4d ", m); 
	}	
	
	return 0;
}
