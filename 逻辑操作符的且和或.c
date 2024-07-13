#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//知识点：
//&&操作符，左边为假，右边无需计算，直接返回假；
//||操作符，左边为真，右边无需计算，直接返回真；
//++操作符，先自增，再返回值；
//&&和||的优先级相同，但左边为假时，右边不计算；
//++的优先级低于&&和||，但先自增再返回值；

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