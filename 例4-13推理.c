#include <stdio.h>

int main(void)
{
	int A, B, C, D;   	//分别表示A,B,C,D是否是罪犯，如果是，其值为1，否则为0 
	int la, lb, lc, ld;  	//分别表示A,B,C,D所说的话是否为真，如果是真，则为1，否则为0
		
	for(A = 0; A <= 1; A++)
	{
		for(B = 0; B <= 1; B++)
		{
			for(C = 0; C <= 1; C++)
			{
				for(D = 0; D <= 1; D++)
				{
					la = B || C || D;     		//罪犯在B、C、D三人之中 
					lb = !B && C;     		//我没有作案，是C偷的
					lc = (A + D == 1);   		//在A和D中间有一个是罪犯
					ld = lb;          		//B说的是事实
					if(la + lb + lc + ld == 2 && A + B + C + D == 1)
					//la+lb+lc+ld==2表示A,B,C,D有两个人说的话是真的 
					 //A+B+C+D==1成立表示A,B,C,D中只有一个罪犯 
					{	
						if(la) printf("A说的话是真\n");  		//输出“A说真话” 
						if(lb) printf("B说的话是真\n"); 
						if(lc) printf("C说的话是真\n"); 
						if(ld) printf("D说的话是真\n"); 
						if(A) printf("A是罪犯\n");		//如果A的值为1，打印“A是罪犯”   
						else if(B) printf("B是罪犯\n");   		//输出“B是罪犯”
						else if(C) printf("C是罪犯\n");  		//输出“C是罪犯”
						else        printf("D是罪犯\n");   		//输出“D是罪犯”
					}				
				}
			}
		}
	}	
	
	return 0;
}
