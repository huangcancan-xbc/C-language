#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//
//char arr[] = "abcdef";
//
//����֮����������ݱ�ɣ�fedcba
#include <stdio.h>
#include <string.h>
void reverse_string(char* shou, char* mo)
{
    if (shou >= mo)
    {
        return;
    }

    char temp = *shou;
    *shou = *mo;
    *mo = temp;

    reverse_string(shou + 1, mo - 1);
}
    
int main() {
    char a[100];
    printf("������һ���ַ�����");
    scanf("%s", a);

    printf("����ַ����������ǣ�");
    reverse_string(a, a + strlen(a) - 1);
    printf("%s", a);
    return 0;
}

//�߼��汾��
//#include <stdio.h>
//
//void reverse_string(char* shou, char* mo) {
//    if (shou >= mo) { // �޸���ֹ����
//        return;
//    }
//
//    char temp = *shou;
//    *shou = *mo;
//    *mo = temp;
//
//    reverse_string(shou + 1, mo - 1);
//}
//
//int main() {
//    char a[100];
//    printf("������һ���ַ�����");
//    scanf("%s", a);
//
//    int len = 0;
//    for (; a[len] != '\0'; len++); // �ֶ������ַ�������
//
//    printf("����ַ����������ǣ�");
//    reverse_string(a, a + len - 1); // ʹ���ֶ�����ĳ���
//
//    printf("%s\n", a);
//    return 0;
//}