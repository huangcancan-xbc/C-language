#define _CRT_SECURE_NO_WARNINGS 1

//¥Ú”°¡‚–Œ
#include <stdio.h>

void print(char a[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		a[i] = ' ';
	}

	int i = 6;
	a[i] = '*';
	printf("      *      \n");

	for (int j = 1; j < sz / 2 + 1; j++)
	{
		a[i - j] = a[i + j] = '*';
		for (int j = 0; j < sz; j++)
		{
			printf("%c", a[j]);
		}
		printf("\n");
	}

	for (int j = 1; j < sz / 2; j++)
	{
		a[13 - j] = a[j - 1] = ' ';
		for (int j = 0; j < sz; j++)
		{
			printf("%c", a[j]);
		}
		printf("\n");
	}
	printf("      *      \n");

}

int main()
{
	int sz = 13;
	char a[13];
	char* p = a;
	print(a, sz);
	return 0;
}