#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	enum xingqi
	{
		星期一=1, 星期二, 星期三, 星期四, 星期五, 星期六, 星期日
		//默认从零开始，可以手动设置，从设置的数字开始，后面的数字自动+1
	};
	int a = 0;
	cout << "请输入数字（例1-7）：";
	cin >> a;

	switch (a)
	{
		case 星期一:
		case 星期二:
		case 星期三:
		case 星期四:
		case 星期五:
			cout << "上班"; break;
		case 星期六:
		case 星期日:
			cout << "放假";break;
		default:
			cout << "输入错误"; break;
	}
}