#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void caidan()
{
	printf("��ӭ����ɨ����Ϸ��\n");
	printf("*************************************\n");
	printf("*********    1.��ʼ��Ϸ     *********\n");
	printf("*********    2.�˳���Ϸ     *********\n");
	printf("*************************************\n");
}

void game()
{
	//��Ϸ����չʾ
	printf("\t*��Ϸ����*:\n\n");
	printf("\t1.'1'������ף�'0'����û�е��ף���ȫ�������ִ�����Χ8�����Ӵ��ڵĵ�������\n\n");
	printf("\t2.�����Ҫ�ڲ����׵�������ҵ�����û�е��׵ĸ��ӷ���ʤ����\n\n");
	printf("  ���ˣ���Ϸ��ʼ��\n\n");
	

	//��������
	char ming_qi[HANG][LIE] = { 0 };
	char an_qi[HANG][LIE] = { 0 };

	//��ʼ������
	chushihua(an_qi, HANG, LIE,'0');
	chushihua(ming_qi, HANG, LIE, '*');

	//��ӡ����
	//printf_qipan(an_qi, HANG - 2, LIE - 2);
	printf_qipan(ming_qi, HANG - 2, LIE - 2);

	//���õ���
	bu_lei(an_qi, HANG - 2, LIE - 2);

	//ȡ��ע�Ϳ���͵������λ��
	//printf_qipan(an_qi, HANG - 2, LIE - 2);

	//����
	pai_lei(an_qi, ming_qi, HANG - 2, LIE - 2);

	
}
void kaishi()
{
	srand((unsigned int)time(NULL));
	int yaoshi = 1;
	do
	{
		caidan();
		printf("���������ֽ���ѡ��\n");
		scanf("%d", &yaoshi);
		switch (yaoshi)
		{
		case 1:
			game();
			break;
		case 2:
			printf("��ӭ�´�������\n\n\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (yaoshi);
}
int main()
{
	kaishi();
	
	return 0;
}