#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;


int main()
{
    int* pArr = new int[10] {133, 551, 14, 98, 87, 641, 212, 149, 99, 87};

    int min=0;//��¼��Сֵ��Ҳ������Сֵ�Ƚ�
    int min_xiabiao=0;//��¼��Сֵ��Ӧ���±�
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (j == i)
            {
                min = pArr[j];
                min_xiabiao = j;
            }

            if (pArr[j] < min)
            {
                min = pArr[j];
                min_xiabiao = j;
            }
        }

        //������Сֵ�͵�ǰԪ��
        int temp = pArr[i];
        pArr[i] = pArr[min_xiabiao];
        pArr[min_xiabiao] = temp;
    }

    //�������������
    for (int i = 0; i < 10; i++)
    {
        cout << pArr[i] << " ";
    }

    delete[] pArr;
    return 0;
}