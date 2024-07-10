#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void chushihua(char qizi[HANG][LIE], int hang, int lie,char lei)
{
	for ( int i = 0; i < hang; i++)
	{
		for (int j = 0; j < lie; j++)
		{
			qizi[i][j] = lei;
		}
	}
}

void printf_qipan(char qizi[HANG][LIE], int hang, int lie)
{
	printf("----------ɨ����Ϸ----------\n");
	for (int i = 0; i < lie+1; i++)
	{
		printf("%d ", i);
	}

	printf("\n");
	for (int i = 1; i < hang+1; i++)
	{
		printf("%d ", i);
		for (int j = 1; j < lie+1; j++)
		{
			printf("%c ", qizi[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void bu_lei(char qi_zi[HANG][LIE], int hang, int lie)
{
	int count = lei_shu;
	while (count) 
	{
		int x = rand() % hang + 1;
		int y = rand() % lie + 1;
		if (qi_zi[x][y] == '0')
		{
			qi_zi[x][y] = '1';
			count--;
		}
	}
}

int ti_shi(char an_qi[HANG][LIE], int x, int y)
{
	return (an_qi[x - 1][y] + an_qi[x - 1][y - 1] +
		an_qi[x - 1][y + 1] + an_qi[x][y - 1] + an_qi[x][y + 1]
		+ an_qi[x + 1][y - 1] + an_qi[x + 1][y]
		+ an_qi[x + 1][y + 1] - 8 * '0');
}


void pai_lei(char an_qi[HANG][LIE], char ming_qi[HANG][LIE], int hang, int lie)
{
	printf("������Ҫ�Ų��׵�����(��ʽ���� ��)\n");
	int x = 0, y = 0;
	int win = 0;
	while (win<((HANG-2)*(LIE-2)-lei_shu))
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x < hang + 1 && y >= 1 && y < lie + 1)
		{
			if (an_qi[x][y] == '1')
			{
				printf("���ź����㷢�����ף������㱻ը���ˣ�\n");
				printf_qipan(an_qi, HANG - 2, LIE - 2);
				break;
			}
			else
			{
				int n = ti_shi(an_qi, x, y);
				ming_qi[x][y] = n +'0';
				printf_qipan(ming_qi, HANG - 2, LIE - 2);
				win++;
			}
		}
		else
		{
			printf("��������곬����Χ�����������룡\n");
		}
	}
	if (win == ((HANG - 2) * (LIE - 2) - lei_shu))
	{
		printf("��ϲ�㣬���׳ɹ���\n\n\n");
	}
}