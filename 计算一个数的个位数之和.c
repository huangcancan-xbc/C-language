#include <stdio.h>

// �ݹ麯�� DigitSum ����Ǹ����� n �ĸ�λ����֮��
// ����: �Ǹ����� n
// ����ֵ: ����֮��
int DigitSum(int n)
{
    if (n > 9)
        return DigitSum(n / 10) + n % 10;
    else
        return n;
}

int main()
{
    int n = 0;

    // ��ʾ�û����벢��ȡ������ͬʱ����Ƿ�ɹ���ȡ
    printf("������һ���Ǹ�����: ");
    if (scanf_s("%d", &n) != 1) {
        printf("��ȡ����ʧ�ܣ���ȷ���������һ��������\n");
        return -1; // �������������
    }

    // ����֤�����Ƿ�Ϊ�Ǹ���
    if (n < 0) {
        printf("����: ����Ĳ��ǷǸ�������\n");
        return -1; // �������������
    }

    int sum = DigitSum(n);
    printf("�����ĸ�λ����֮��Ϊ: %d\n", sum);

    return 0;
}