#include <stdio.h>
#define CN 3          	//班级数
#define SN 10         	//各班级学生数

int main(void)
{
	int cs[CN+1][SN+1];                        //存放CN个班级学生的成绩
	double sum[CN+1]={0}, ave[CN+1];          //存放各班学生总分、平均分	
	for(int i = 1;i <= CN;i++)
	{	 
		for(int j = 1;j <= SN;j++)
		{
			scanf("%d", &cs[i][j]);            //输入第i个班级第j学生的成绩是cs[i][j]
			sum[i] += cs[i][j];                //将cs[i][j]加到第i个班级的总成绩sum[i]中
		}
	}
	int max[CN+1], maxk[CN+1];               //分别存放各班最高分、最高分学生的序号 
	for(int i = 1; i <= CN; i++)
	{//假设各班级的第一名学生成绩是每个班级的最高分，求各班级的平均分 
		max[i] = cs[i][1];
		maxk[i] = 1;
		ave[i] = sum[i] / SN;
	}
	for(int i = 1;i <= CN;i++)
	{//找出各班级的最高分 
		for(int j = 2;j <= SN;j++)
		{
			if(cs[i][j] > max[i])
			{
				max[i] = cs[i][j];
				maxk[i] = j;
			}
		}
	}
	//分别存放所有学生的最高分、最高分的班号、平均成绩最高的班号
	int cmax, cmaxk, avemaxk;
	//求所有同学的最高分及最高分所在的班级序号
	//同时求出平均成绩最高的班号 
	cmax=max[1], cmaxk=1, avemaxk=1;  
	for(int i = 2;i <= CN;i++)
	{
		if(max[i] > cmax)
		{
			cmax = max[i];
			cmaxk = i;
		}
		if(ave[i] > ave[avemaxk])
			avemaxk = i;
	}
	
	//输出各个班级的班号、平均成绩、最高分同学的序号及分数
	printf("班级的班号\t平均成绩\t最高分\t最高分序号\n") ;
	for(int i = 1; i <= CN; i++)
		printf(" %4d\t\t%.2f\t\t%d\t%4d\n", i, ave[i], max[i], maxk[i]);   
	 //输出几个班级中的最高分，及其在班级的序号
	printf("最高分为%d班 序号是%d 分数为%d \n", cmaxk, maxk[cmaxk], cmax);	
	 //输出平均成绩最高的班级及其平均成绩
	printf("平均成绩最高的班号是:%d 平均成绩为:%.2f\n", avemaxk, ave[avemaxk]);

	return 0;
}	
