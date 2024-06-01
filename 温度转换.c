#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main4()
{
	double huashi=0, sheshi=0;
	scanf("%lf", &huashi);

	sheshi = 5.0 / 9.0 * (huashi - 32);
	//在C语言中，当两个整数相除时，结果默认会被截断为整数。因此，5 / 9 的结果将是0
	//要得到正确的浮点结果，至少确保其中一个数是浮点数。
	
	printf("%.2lf", sheshi);
	return 0;
}