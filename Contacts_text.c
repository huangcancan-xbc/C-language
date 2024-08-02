#define _CRT_SECURE_NO_WARNINGS 1

#include "Contacts.h"//Contacts��ͨѶ¼

void menu()
{
	printf("*********************************************\n");//add:����
	printf("**       1.add             2.delete        **\n");//delete��ɾ��
	printf("**       3.search          4.modify        **\n");//search:����	
	printf("**       5.show            6.sort          **\n");//modify���޸�	
	printf("**                0.exits                  **\n");//show����ʾ
	printf("*********************************************\n");//sort������
	//exit:�˳�
}

enum pick				//pick:ѡ��
{
	exits = 0,
	add,
	delete,
	search,
	modify,
	show,
	sort
};

int main()
{
	int input = 0;						//input:����
	Contact temp;						//temp:��ʱ
	initialize(&temp);					//initialize:��ʼ��
	do
	{
		menu();							//menu:�˵�
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContacts(&temp);
			break;
		case delete:
			DeleteContacts(&temp);
			break;
		case search:
			SearchContacts(&temp);
			break;
		case modify:
			ModifyContacts(&temp);
			break;
		case show:
			ShowContacts(&temp);
			break;
		case sort:
			SortContacts(&temp);
			break;
		case exits:
			printf("���˳�ͨѶ¼��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);

	return 0;
}