#include <string.h>//strcpy(Ŀ���ַ����ĵ�ַ, Դ�ַ����ĵ�ַ);
#include <stdio.h>

int main() {

char src[] = "��ϲ�����"; // ����Դ�ַ������൱��װ��ƻ��������
char dest[20]; // ����Ŀ���ַ�����һ�������ӣ���Ҫ�㹻����װ��"��ϲ�����"�Լ���β��'\0'

strcpy(dest, src); // ����strcpy��������src�����ݸ��Ƶ�dest��
 printf("���Ƶ��ַ���: %s\n", dest);
 
char a[] = "Source String"; // Դ�ַ���
char b[20]; // Ŀ���ַ�������Ҫ�㹻��
strcpy(b, a); // ��ȷ�ش�a���Ƶ�b
printf("���Ƶ��ַ���: %s\n", b);
}
