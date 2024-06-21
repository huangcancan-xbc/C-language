#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

int main() {
    std::string a;
    a = "Hello, World!\nThis is a test.\tWith tabs and spaces.";

    std::cout << a << std::endl;
    // 输出包含空格、制表符和换行的字符串
    //std::string可以存储任何有效的UTF-8编码的字符序列，包括空格、制表符、回车、换行等特殊字符，
    // 以及普通的字母数字字符。
    // 这意味着你可以自由地构造和处理包含各种字符的字符串。

    return 0;
}