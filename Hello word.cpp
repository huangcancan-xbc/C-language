#include <iostream>
#include <cstring> // ���ͷ�ļ���ʹ��strcmp����
using namespace std;

int main() {
    char a[10];
    cout << "������Hello��" << endl;
    cin >> a;
    
    // ʹ��strcmp�����Ƚ��ַ���
    if (strcmp(a, "Hello") == 0) { // strcmp����0��ʾ�����ַ������
        cout << "Hello world!" << endl;
    }
    
    return 0;
}
