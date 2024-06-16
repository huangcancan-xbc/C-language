#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main() {
    char a[10];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        scanf("%c", &a[i]);
    }

    for (char i : a)
    {
        cout  << i;
    }
    return 0;
}