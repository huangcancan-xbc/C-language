#define _CRT_SECURE_NO_WARNINGS 1

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

#include <stdio.h>

int jiecheng(int n)
{
    if (n > 1)
        return n * jiecheng(n - 1);
}

int main()
{
    int n = 0;
    printf("������һ������:");
    scanf("%d", &n);

    int b = jiecheng(n);
    printf("n�Ľ׳���:%d\n", b);
    return 0;
}



//�ǵݹ�ʵ��
//#include <stdio.h>
//
//int jiecheng(int n)
//{
//    int result = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        result *= i;
//    }
//    return result;
//}
//
//int main()
//{
//    int n = 0;
//    printf("������һ������:");
//    scanf("%d", &n);
//
//    int b = jiecheng(n);
//    printf("n�Ľ׳���:%d\n", b);
//    return 0;
//}