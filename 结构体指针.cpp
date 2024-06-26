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
	arr = { "张三",12,"陕西" };
	struct xinxi* p = &arr;
	cout << "姓名:" << arr.xingming << endl;
	cout << "年龄:" << arr.nianling << endl;
	cout << "地址:" << arr.dizhi << endl;

	cout << "姓名:" << p->xingming << endl;
	cout << "年龄:" << p->nianling << endl;
	cout << "地址:" << p->dizhi << endl;
	//delete[] p;
	return 0;
}