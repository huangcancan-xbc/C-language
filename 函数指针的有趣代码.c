#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	( *( void (*)() ) 0 )();
	//�ô�����һ�κ�������
	//����0��ַ����һ������
	//���ȴ����н�0ǿ������ת��Ϊ����Ϊvoid (*)()�ĺ���ָ��
	//Ȼ��ȥ����0��ַ���ĺ���
	
	//���ԡ�C�����ȱ�ݡ�

	





	void (* signal( int, void(*)(int) ) )(int);
	//�ô�����һ�κ���������
	//�����ĺ������ֽ�signal
	//signal�����Ĳ�����2������һ����int���ͣ��ڶ����Ǻ���ָ�����ͣ��ú���ָ���ܹ�ָ����Ǹ������Ĳ�����int
	//����������void
	//signal�����ķ���������һ������ָ�룬�ú���ָ���ܹ�ָ����Ǹ������Ĳ�����int,����������void
	// 
	//void (*)(int) signal(int, void(*)(int));���ڰ�����⣬д������
	


	//����������ⷽʽ��
	typedef unsigned int uint;

	typedef void(*pf_t)(int) ;
	pf_t signal(int, pf_t);

	return 0;
}