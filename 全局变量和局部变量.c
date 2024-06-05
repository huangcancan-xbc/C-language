#include <stdio.h>

int x = 20; //任何函数之外定义的变量为全局变量，作用域为定义处到文件结束

void test(int n)//形式参数也是局部变量，作用域为该函数内部
{
    int y = 30; //在函数内定义的变量为局部变量，作用域为定义它的函数内部

    printf("x=%d, n=%d, y=%d\n", x, n, y);
}

int main(void)
{
    int z = 20; //在函数内定义的变量为局部变量，作用域为定义它的函数内部

    test(z);
    printf("x=%d, z=%d", x, z); //此处的x为全局变量，main函数内仍可访问
    
    //变量y为函数test内定义的局部变量，main函数内不能访问
    printf("y=%d", y); //此处编译出错，将此行删除或注释掉即可正常编译

    return 0;
}

