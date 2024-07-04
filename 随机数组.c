#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* GetNumber() {
    static int array[10];
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i) {
        array[i] = rand();
        printf("%d\n", array[i]);
    }
    return array;
}

int main() {
    int* p = GetNumber();
    printf("===================================\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", p[i]);
    }
}
//这段是C语言代码实现了一个生成并打印随机数数组的功能。下面是对代码的逐行解释：
//
//1. `#include <stdio.h>`：引入标准输入输出库，用于文件和屏幕的输入输出操作。
//
//2. `#include <stdlib.h>`：引入标准库函数，包括内存分配、字符串处理、数学运算等，这里主要是为了使用`rand()`和`srand()`函数。
//
//3. `#include <time.h>`：引入时间相关的库，这里是为了设置随机数种子，让每次运行程序时生成不同的随机数序列。
//
//4. `int* GetNumber() { ... }`：定义一个函数`GetNumber`，返回类型为`int* `（即整型指针），这个函数的作用是生成一个包含10个随机数的数组。
//
//5. `static int array[10]; `：声明一个静态数组`array`，大小为10，静态变量在整个程序运行期间都存在。
//
//6. `srand((unsigned)time(NULL)); `：设置随机数生成器的种子，`time(NULL)`返回当前时间，转换成无符号整数后作为种子，确保每次运行程序时都能产生不同的随机数序列。
//
//7. 接下来是一个循环，使用`rand()`函数生成随机数，并存储到`array`中，同时打印每个生成的随机数。
//
//8. `return array; `：返回数组`array`的首地址。
//
//9. `int main() { ... }`：主函数，程序的入口点。
//
//10. `int* p = GetNumber(); `：调用`GetNumber`函数，将返回的数组首地址赋给指针`p`。
//
//11. 下面的两行代码打印一条分割线，便于区分两次打印的输出。
//
//12. 最后的循环通过指针`p`再次打印之前生成的随机数数组。
//
//总的来说，这段代码的主要功能是生成并两次打印一个包含10个随机数的数组。