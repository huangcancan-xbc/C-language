#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	enum xingqi
	{
		����һ=1, ���ڶ�, ������, ������, ������, ������, ������
		//Ĭ�ϴ��㿪ʼ�������ֶ����ã������õ����ֿ�ʼ������������Զ�+1
	};
	int a = 0;
	cout << "���������֣���1-7����";
	cin >> a;

	switch (a)
	{
		case ����һ:
		case ���ڶ�:
		case ������:
		case ������:
		case ������:
			cout << "�ϰ�"; break;
		case ������:
		case ������:
			cout << "�ż�";break;
		default:
			cout << "�������"; break;
	}
}