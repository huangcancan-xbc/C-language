#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#include <stdio.h>
#include <string.h>
int judgment(char* arr1, char* arr2)
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(arr1, arr1, len1);
	if (strstr(arr1, arr2) != NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr1[30] = "AABCD";
	char arr2[] = "DAABC";
	int flag = judgment(arr1, arr2);//judgment�ж�
	if (flag == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}


//���⵱Ȼ���Խ�������ת��Ľ���ŵ�һ�������Ȼ����в��ң��������������Ȳ��ò�����Ҳ̫���£�
//����������һ���ܼ򵥵�������
//��ʵABCDE������ô������ת������н��������������ABCDEABCD����ַ������ˡ�
//���������ܼ򵥣�ֻ��Ҫ��ԭ�ַ�������һ����ں��棬Ȼ����һ�Ҵ����ҵ��ַ����ǲ�������ԭ�ַ������Ӽ����ɡ�
//
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src); //�ȿ���һ��
//	strcat(tmp, src); //������һ��
//	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
//}
