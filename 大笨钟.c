#include <stdio.h>
int main()
{
    int h=0;
    int m=0;
    scanf("%d:%d",&h,&m);
    if(h>12)
    {
       if(m==0)
       {
        for(int i=0;i<h%12;i++)
        {
   printf("Dang");
        }
       }
        else
      {
         for(int i=0;i<=h%12;i++)
        {
            printf("Dang");
        }
       }
    }
    else if(h==12&&m>0)
        printf("Dang");
    else
        printf("Only %02d:%02d.  Too early to Dang.\n",h,m);
    return 0;
}


/*1.定义了两个整型变量h和m分别用来存储输入的小时和分钟。

2.使用scanf函数从标准输入读取当前时间，格式为hh:mm。

3.通过一系列的条件判断来确定如何敲钟：

	如果小时h大于12（即下午），进入第一个条件分支：
	
			若分钟m为0，表示刚好是整点，通过循环for(int i=0;i<h%12;i++)输出h%12次“Dang”，因为是下午，所以用h%12得到的是1到11之间的数值，符合钟的敲击次数。
			
			若分钟m大于0，表示已经过了该整点，应该敲下一点的次数，所以循环次数变为for(int i=0;i<=h%12;i++)，多敲一次钟。
			
	如果小时h等于12且分钟m大于0，单独处理这个边界情况，输出一次“Dang”。
	
在其他情况下（即小时小于等于12或者时间在午夜到中午之间），输出提示信息：“Only hh:mm. Too early to Dang.”，其中hh:mm是输入的时间，使用%02d格式化为两位数，不足两位前面补0。

4.最后，return 0;表示程序正常结束。*/
