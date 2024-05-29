int main()
{
	int a = 100;
	//int b = (a++);//后置++，先使用，后++
	//int b=a,a=a+1;

	//int b = ++a;//前置++，先++，后使用
	//a=a+1,b=a;

	//int b = a--;
	//int b = a,a=a-1;

	int b = --a;
	//a=a-1,b=a;
	printf("a=%d b=%d\n", a, b);

	return 0;
}
