#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	( *( void (*)() ) 0 )();
	//该代码是一次函数调用
	//调用0地址处的一个函数
	//首先代码中将0强制类型转换为类型为void (*)()的函数指针
	//然后去调用0地址处的函数
	
	//出自《C陷阱和缺陷》

	





	void (* signal( int, void(*)(int) ) )(int);
	//该代码是一次函数的声明
	//声明的函数名字叫signal
	//signal函数的参数有2个，第一个是int类型，第二个是函数指针类型，该函数指针能够指向的那个函数的参数是int
	//返回类型是void
	//signal函数的返回类型是一个函数指针，该函数指针能够指向的那个函数的参数是int,返回类型是void
	// 
	//void (*)(int) signal(int, void(*)(int));用于帮助理解，写法错误
	


	//其他帮助理解方式：
	typedef unsigned int uint;

	typedef void(*pf_t)(int) ;
	pf_t signal(int, pf_t);

	return 0;
}