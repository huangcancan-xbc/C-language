#define _CRT_SECURE_NO_WARNINGS 1

#include "Contacts.h"//Contacts：通讯录

void menu()
{
	printf("*********************************************\n");//add:增加
	printf("**       1.add             2.delete        **\n");//delete：删除
	printf("**       3.search          4.modify        **\n");//search:搜索	
	printf("**       5.show            6.sort          **\n");//modify：修改	
	printf("**                0.exits                  **\n");//show：显示
	printf("*********************************************\n");//sort：排序
	//exit:退出
}

enum pick				//pick:选择
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
	int input = 0;						//input:输入
	Contact temp;						//temp:临时
	initialize(&temp);					//initialize:初始化
	do
	{
		menu();							//menu:菜单
		printf("请选择：");
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
			printf("已退出通讯录！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);

	return 0;
}