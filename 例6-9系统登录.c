#include <stdio.h>
#include <string.h>

int main(void)
{//��ȷ��id�ź�����ֱ�Ϊ��"wyp", "123456" 
	char id[31], psw[21];  			//����û������id������
	int n=3, f=0;  					//�ֱ�������id������Ĵ������Լ��Ƿ�������ȷ��0��ʾ����ȷ 
	do
	{
		n--;
		printf("�������id:");
		gets(id);
		printf("����������룺");
		gets(psw);
		if(strcmp(id,"wyp") == 0 && strcmp(psw,"123456") == 0) 
		{ //��֤id��psw��ϵͳ�趨���û��������Ƿ���ȫһ�� 
				printf("welcome!\n");
			f = 1;          				//��־������ȷ 
			break;
		}
		else
		{
			if(n > 0)
			   printf("�㻹��%d��������id������Ӵ��\n", n);
		}
					
	}while(n > 0);
	if(f == 0)              			//�������������ȷ
		printf("sorry! bye bye!\n");	
	
	return 0;
}
