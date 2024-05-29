#define _CRT_SECURE_NO_WARNINGS 1
// strlen是库函数，是计算字符串的长度的，统计的是字符串中\0之前出现的字符个数
//sizeof是操作符, 是计算变量所占内存空间的大小，单位是字节
int main()
{
	int a = 10;
	float f = 5.5f;

	printf("%d\n", sizeof(a));//1
	printf("%d\n", sizeof(int));//2

	printf("%d\n", sizeof(f));//3
	printf("%d\n", sizeof(float));//4

	return 0;
}

