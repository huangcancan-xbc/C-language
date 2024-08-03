#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts_plus.h"

int main() 
{
    int input = 0;
    Contact temp;
    InitContact(&temp);

    do {
        printf("*********************************************\n");
        printf("**       1.add             2.delete        **\n");
        printf("**       3.search          4.modify        **\n");
        printf("**       5.show            6.sort          **\n");
        printf("**                0.exit                   **\n");
        printf("*********************************************\n");

        printf("请选择：");
        scanf("%d", &input);

        switch (input) 
        {
        case 1:
            AddContact(&temp);
            break;
        case 2:
            DeleteContact(&temp);
            break;
        case 3:
            SearchContacts(&temp); 
            break;
        case 4:
            ModifyContact(&temp);
            break;
        case 5:
            ShowContacts(&temp);
            break;
        case 6:
            SortContacts(&temp);
            break;
        case 0:
            printf("已退出通讯录！\n");
            break;
        default:
            printf("输入错误，请重新输入！\n");
            break;
        }
    } while (input != 0);

    DestroyContact(&temp);
    return 0;
}