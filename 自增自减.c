int main()
{
	int a = 100;
	//int b = (a++);//����++����ʹ�ã���++
	//int b=a,a=a+1;

	//int b = ++a;//ǰ��++����++����ʹ��
	//a=a+1,b=a;

	//int b = a--;
	//int b = a,a=a-1;

	int b = --a;
	//a=a-1,b=a;
	printf("a=%d b=%d\n", a, b);

	return 0;
}
