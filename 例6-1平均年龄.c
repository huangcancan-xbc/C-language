#include <stdio.h>

int main(void)
{ 
    int age;           				//临时存放输入的每个学生的年龄 
    double sum = 0;    				//存放所有学生年龄的和
    int n = 0;         				//存放学生的个数 
    while(1)   					//无条件进入循环，这种情况循环体中应该有break语句中断循环 
    {
        scanf("%d", &age);    		//输入学生的年龄 
		if(age <= 0) break;   		//没有学生了，输入一个非正数，退出循环 
		sum += age;        			//将当前学生和年龄放到累加器中求和 
		n++;             			//学生个数增加1 
	}
	if(n > 0)
    printf("%.2f\n", sum/n);    		//输出学生的平均年龄，保留小数点后两位 
	
return 0;
}
