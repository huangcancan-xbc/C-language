#define _CRT_SECURE_NO_WARNINGS 1
// strlen�ǿ⺯�����Ǽ����ַ����ĳ��ȵģ�ͳ�Ƶ����ַ�����\0֮ǰ���ֵ��ַ�����
//sizeof�ǲ�����, �Ǽ��������ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
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

