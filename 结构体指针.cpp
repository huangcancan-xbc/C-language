#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

struct xinxi
{
	string xingming;
	int  nianling=11;
	string dizhi;
}arr;
int main()
{
	arr = { "����",12,"����" };
	struct xinxi* p = &arr;
	cout << "����:" << arr.xingming << endl;
	cout << "����:" << arr.nianling << endl;
	cout << "��ַ:" << arr.dizhi << endl;

	cout << "����:" << p->xingming << endl;
	cout << "����:" << p->nianling << endl;
	cout << "��ַ:" << p->dizhi << endl;
	//delete[] p;
	return 0;
}