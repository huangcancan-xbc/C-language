#include <stdio.h>

int main(void)
{
	int m, i ;
	printf("��������m: ");
	scanf("%d", &m) ;
	//�����ж�m�Ƿ��ܱ�2~m-1֮����������� 
	for(i = 2;i < m;i++)
	{
	  if(m % i == 0)    	//���m��i�ı�������m�ܱ�i����
	    break;      
	}   
	if(i == m)          	//˵����ͨ�� for��i<mΪ��ʱ��ֹѭ����
	  printf("%d������!\n", m);
	else             	//˵������ѭ������ִ����break������ֹѭ����
	  printf("%d��������!\n", m);
	
	return 0;
}
