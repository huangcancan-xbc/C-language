#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
// 2�˵�
void caidan()
{
	printf("*******************************\n");
	printf("********* 1.��ʼ��Ϸ  *********\n");
	printf("********* 2.�˳���Ϸ  *********\n");
	printf("*******************************\n");
}

void game()
{
	char qizi[HANG][LIE];
	char temp = 0;
	//��ʼ������
	qipan(qizi, HANG, LIE);
	printf_jiemian(qizi, HANG, LIE);
	while (1)
	{
		//�������
		wanjia(qizi, HANG, LIE);
		printf_jiemian(qizi, HANG, LIE);
		//�ж���Ӯ
		temp = ying(qizi, HANG, LIE);
		if (temp != 'C')
		{
			break;
		}
		
		//��������
		computer(qizi, HANG, LIE);
		printf_jiemian(qizi, HANG, LIE);
		//�ж���Ӯ
		temp = ying(qizi, HANG, LIE);
		if (temp != 'C')
		{
			break;
		}
	}
	if (temp == '#')
		printf("����Ӯ�ˣ�\n");
	else if (temp == 'X')
		printf("��Ӯ�ˣ�\n");
	else if (temp == 'P')
		printf("ƽ�֣�\n");
}

void kaishi()
{
	srand((unsigned int)time(NULL));
	int yaoshi = 2;
	do
	{
	caidan();
	printf("��ѡ��");
	scanf("%d", &yaoshi);
		switch (yaoshi)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (yaoshi);
}

int main()
{
	kaishi();

	return 0;
}