#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[80];
	int len;              					//��Ŵ�text�ĳ��� 	
	printf("����Ҫ���ܵ��ַ�����");
	gets(text);           					//������ܺ��пո���ַ���
	len = strlen(text);     					//���ַ����ĳ���
	int i;
	for(i = 0; i < len; i++)
	{//���ܴ��� 
		if(text[i] >= 'a'&&text[i] < 'z' || text[i] >= 'A' && text[i] < 'Z') 
			text[i]++;
		else if(text[i] == 'z') 
			text[i] = 'a';
		else if(text[i] == 'Z') 
			text[i] = 'A';
	} 	
	printf("���ܺ��ַ���Ϊ��    %s\n", text);
	
	return 0;	 
}
