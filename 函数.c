#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//���̳�ʼ��
void qipan(char qizi[HANG][LIE], int hang, int lie)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < lie; j++)
		{
			qizi[i][j] = ' ';
		}
	}
}
// ��Ϸ����
void printf_jiemian(char qizi[HANG][LIE], int hang, int lie)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < lie; j++)
		{
			printf(" %c ", qizi[i][j]);
			if (j < lie - 1)
				printf("|");
		}
		printf("\n");
		if (i < hang - 1)
		{
			for (int k = 0; k < lie; k++)
			{
				printf("---");
				if (k < lie - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//4����
void wanjia(char qizi[HANG][LIE], int hang, int lie)
{
	//�������
	while (1)
	{
		printf("�������,������Ҫ��������꣺");
		int x = 0, y = 0;
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= hang && y >= 1 && y <= lie)
		{
			if (qizi[x - 1][y - 1] = ' '&& qizi[x - 1][y - 1] != '#'&& qizi[x - 1][y - 1] != 'X')
			{
				qizi[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ�ã����������룡\n");
			}
		}
		else
		{
			printf("������Ч��\n");
		}
	}
}

//5��������
void computer(char qizi[HANG][LIE], int hang, int lie)
{
	printf("����������...\n");
	while (1)
	{
		int x = rand() % hang ;
		int y = rand() % lie ;

		if (qizi[x][y] == ' '&& qizi[x][y] != 'X')
		{
			qizi[x][y] = '#';
			printf("�����������꣺%d %d\n", x+1, y+1);
			break;
		}
	}
}


//7�ж��Ƿ���
static int is_full(char qizi[HANG][LIE], int hang, int lie)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < lie; j++)
		{
			if (qizi[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//6�ж���Ӯ
char ying(char qizi[HANG][LIE], int hang, int lie)
{
	//�ж�����
	for (int i = 0; i < hang; i++)
	{
		if (qizi[i][0] == qizi[i][1] && qizi[i][1] == qizi[i][2] && qizi[i][0] != ' ')
		{
			return qizi[i][0];
		}
	}
	//�ж�����
	for (int i = 0; i < lie; i++)
	{
		if (qizi[0][i] == qizi[1][i] && qizi[1][i] == qizi[2][i] && qizi[0][i] != ' ')
		{
			return qizi[0][i];
		}
	}
	//�ж϶Խ���
	if (qizi[0][0] == qizi[1][1] && qizi[1][1] == qizi[2][2] && qizi[1][1] != ' ')
	{
		return qizi[1][1];
	}
	if (qizi[0][2] == qizi[1][1] && qizi[1][1] == qizi[2][0] && qizi[1][1] != ' ')
	{
		return qizi[1][1];
	}
	//�Ƿ�ƽ��
	if (is_full(qizi, hang, lie) == 1)
	{
		return 'P';
	}
	//����
	return 'C';
}
