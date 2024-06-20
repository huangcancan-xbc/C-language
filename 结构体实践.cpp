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
		cout<<"请输入第"<<i+1<<"个学生的姓名：";
		cin>>s1.xingming[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout<<"请输入第"<<i+1<<"个学生的地址：";
		cin>>s1.dizhi[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << "姓名：" << s1.xingming[i]<<" ";
		cout << "年龄：" << s1.nianling << " ";
		cout << "地址：" << s1.dizhi[i] << " " << endl;
	}
	return 0;
}