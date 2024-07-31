#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//练习使用库函数，qsort排序各种类型的数据
//
//void qsort(void* base, //待排序的数组的起始地址
//	      size_t num,    //元素个数
//	      size_t width,  //一个元素的大小
//	      int (*cmp)(const void* e1, const void* e2)//两个元素的比较函数
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
//	// 如果要按名字排序，可以取消注释下面这行，并注释掉上面那行
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
