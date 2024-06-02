#include <stdio.h>

int Input(int arr[]);                  		//输入数组arr的元素，返回元素个数 
double GetAverage(int arr[], int size);   	//返回数组中size个元素的平均值 
int Count(int arr[], int size, double ave);  	//返回数组中size个元素中大于ave的元素个数 
const int N=10;

int main (void)
{
    int age[N], n, k;     					//分别存储年龄、实际学生数，以及大于平均年龄的学生数
    double ave;                				//存放学生的平均年龄	

    n=Input(age);              				//输入学生年龄，并求学生数n
    ave = GetAverage(age, n);    			//求n个学生平均年龄
    k=Count(age, n, ave);        				//求大于平均年龄的学生数
    printf("平均年龄是:%.1f\n大于平均年龄的学生数是:%d\n", ave, k); 

    return 0;
}
int Input(int arr[])
{
    int n = 0, a;               				//存储学生个数及学生的年龄
	
    while(1)
    {
	    scanf("%d", &a);
	    if(a <= 0 ) break;   				//年龄不合法，结束输入 
	    arr[n++] = a;     					//将a赋值给下标为n的元素，同时学生数加1
    }

    return n;	
} 
double GetAverage(int arr[], int size)
{
    int  i;
    double ave, sum = 0;
		
    for (i = 0; i < size; ++i)
    {
	    sum += arr[i];
    }	
    ave = sum / size;
	
    return ave;
}
int Count(int arr[], int size, double ave)
{
	int k = 0, i;	            				//存储值大于ave的元素个数
	for(i = 0; i < size; i++)
	{
		if(arr[i] > ave)     k++;      		//元素值大于ave时，k增加1 
	}

	return k;                      			//返回k
}
