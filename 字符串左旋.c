#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�����������������ַ����е�k���ַ���
//
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include <stdio.h>
#include <string.h>
void levorotation(char* arr, int k)
{
	int len = strlen(arr);
	k %= 4;//��ѭ�������ڼ���ʱ��
	for (int i = 0; i < k; i++)
	{
		char temp = arr[0];
		for (int j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = temp;
	}
}
int main()
{
	char arr[] = "ABCD";
	int k = 0;
	printf("��������Ҫ�����ַ������ַ�������");
	scanf("%d", &k);
	levorotation(arr, k);//levorotation����
	printf("%s\n", arr);
	return 0;
}




//���ѭ��ʹ�������1�Σ�Ȼ������ִ��n����һ����򵥵�˼·��
//void leftRound(char* src, int time)
//{
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len; //����Ϊ5������£���ת6��11��16...���൱��1�Σ�7��12��17...���൱��2�Σ��Դ����ơ�
//	for (i = 0; i < time; i++) //ִ��k�εĵ���ƽ��
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++) //����ƽ��
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//
//
//�Ľ�һ��
//���˼·��Ȼ���ԣ�����һ��һ��ת�Ͼ�̫�鷳���Ͳ���һ�ε�λô��
//��Ȼ���ԣ����ǿ���ѡ��ƴ�ӷ���һ�ε�λ��
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len; //�Ͽ�λ�õ��±�
//	char tmp[256] = { 0 }; //��׼ȷ�Ļ�����ѡ��malloc len + 1���ֽڵĿռ��������tmp
//
//	strcpy(tmp, src + pos); //�Ƚ������ȫ��������
//	strncat(tmp, src, pos); //Ȼ��ǰ�漸������
//	strcpy(src, tmp); //��󿽻�ȥ
//}
//
//
//�Ľ�����
//�������Ҫ�õ�һ�������γɵĸ����ռ䣬���˾����е㲻ˬ���������и��õ�ѡ��
//����ABCDEFG������3�κ���DEFGABC����һ������Ĳ�����ʽ��
//�Ƚ�Ҫ������ǰ�����һ�����CBADEFG����Ȼ�󽫺���Ҳ����CBAGFED���������������DEFGABC�����ɡ�
//����ֻ��Ҫ����ֵ�������ɣ�����дһ��������������ɾֲ����򣬴������£�
//void reverse_part(char* str, int start, int end) //���ַ�����start��end��һ������
//{
//	int i, j;
//	char tmp;
//
//	for (i = start, j = end; i < j; i++, j--)
//	{
//		tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//}
//
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len;
//	reverse_part(src, 0, pos - 1); //����ǰ��
//	reverse_part(src, pos, len - 1); //������
//	reverse_part(src, 0, len - 1); //��������
//}
//
//
//������������ˡ�
//
