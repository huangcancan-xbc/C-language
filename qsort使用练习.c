#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��ϰʹ�ÿ⺯����qsort����������͵�����
//
//void qsort(void* base, //��������������ʼ��ַ
//	      size_t num,    //Ԫ�ظ���
//	      size_t width,  //һ��Ԫ�صĴ�С
//	      int (*cmp)(const void* e1, const void* e2)//����Ԫ�صıȽϺ���
//          );


int com_par(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int arr[] = { 68,84,49,88,74,46,547,66,49,70,43,62,64,77 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_par);
	
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}





//struct stu
//{
//	char name[10];
//	int age;
//};
//
//int com_par(const void* a, const void* b)
//{
//	return ((struct stu*)a)->age - ((struct stu*)b)->age;
//	// ���Ҫ���������򣬿���ȡ��ע���������У���ע�͵���������
//	// return strcmp(((struct stu*)a)->name, ((struct stu*)b)->name);
//}
//
//int main()
//{
//	struct stu a[2] = { {"zhangsan",11},{"lisi",15} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), com_par);
//	
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", a[i].name, a[i].age);
//	}
//
//	return 0;
//}
