#define _CRT_SECURE_NO_WARNINGS 1
//#define ¶¨Òå·ûºÅ / ºê

//#define M 100

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
	return (x > y ? x : y);
}
#define MAX(x, y)  (x > y ? x : y)
int main()
{
	//int a = M;
	//printf("%d\n", M);
	//printf("%d\n", a);

	int a = 10;
	int b = 20;
	int m = Max(a, b);
	//int m = MAX(a, b);
	//int m = (a > b ? a : b);
	printf("%d\n", m);

	return 0;
}
