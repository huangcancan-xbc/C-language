#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

int main() {
    std::string a;
    a = "Hello, World!\nThis is a test.\tWith tabs and spaces.";

    std::cout << a << std::endl;
    // ��������ո��Ʊ���ͻ��е��ַ���
    //std::string���Դ洢�κ���Ч��UTF-8������ַ����У������ո��Ʊ�����س������е������ַ���
    // �Լ���ͨ����ĸ�����ַ���
    // ����ζ����������ɵع���ʹ�����������ַ����ַ�����

    return 0;
}