#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;



struct xinxi
{
	string xingming[5];
	int  nianling = 11;
	string dizhi[5];
}s1;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout<<"�������"<<i+1<<"��ѧ����������";
		cin>>s1.xingming[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout<<"�������"<<i+1<<"��ѧ���ĵ�ַ��";
		cin>>s1.dizhi[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << "������" << s1.xingming[i]<<" ";
		cout << "���䣺" << s1.nianling << " ";
		cout << "��ַ��" << s1.dizhi[i] << " " << endl;
	}
	return 0;
}