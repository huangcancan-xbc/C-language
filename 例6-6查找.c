#include <stdio.h>
#define N 10

void Input(int a[], int n);         			//输入数组的n个元素 
int Search ( int a[], int n, int x );

int main (void)
{
	int cScore[N], x, t;        				//定义一个有10个元素的数组cScore
	printf("输入数组cScore的%d个元素：\n", N);
	Input(cScore, N);         				//输入数组cScore的N个元素 	
	printf("输入要查找的数据x："); 
	scanf("%d", &x);        					//输入要查找的元素x	
	//在有N个元素的数组cScore中查找x，如找到将其序号返回，否则返回-1 
	t = Search(cScore, N, x);   				//调用顺序查找函数
	if(t != -1) 
	    printf("查找%d成功，它的序号为%d\n", x, t);
	else 
	    printf("查找%d失败\n");
		
  return 0;
}
void Input(int a[], int n)
{//输入数组a的n个元素
    int i;
    for(i = 0; i < n; i++) 
        scanf("%d", &a[ i ]);
}
int Search(int a[], int n, int x)  
{//在含有n个元素的数组a中查找x，如果找到，则返回其序号 
 //如果查找不成功，则返回-1
    int  i;
    i = 0;
    while(i < n)
    {
        if (a[i] == x)  break;
        i++;
    } 
    if ( i < n ) return  i+1;    				//查找成功，返回其序号
    return  -1;             					//查找不成功，返回-1
}
