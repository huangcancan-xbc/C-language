#include <iostream>
#include <cstring> // 添加头文件以使用strcmp函数
using namespace std;

int main() {
    char a[10];
    cout << "请输入Hello：" << endl;
    cin >> a;
    
    // 使用strcmp函数比较字符串
    if (strcmp(a, "Hello") == 0) { // strcmp返回0表示两个字符串相等
        cout << "Hello world!" << endl;
    }
    
    return 0;
}
