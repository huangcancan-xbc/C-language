#include <stdio.h>

int main(void)
{
	int A, B, C, D;   	//�ֱ��ʾA,B,C,D�Ƿ����ﷸ������ǣ���ֵΪ1������Ϊ0 
	int la, lb, lc, ld;  	//�ֱ��ʾA,B,C,D��˵�Ļ��Ƿ�Ϊ�棬������棬��Ϊ1������Ϊ0
		
	for(A = 0; A <= 1; A++)
	{
		for(B = 0; B <= 1; B++)
		{
			for(C = 0; C <= 1; C++)
			{
				for(D = 0; D <= 1; D++)
				{
					la = B || C || D;     		//�ﷸ��B��C��D����֮�� 
					lb = !B && C;     		//��û����������C͵��
					lc = (A + D == 1);   		//��A��D�м���һ�����ﷸ
					ld = lb;          		//B˵������ʵ
					if(la + lb + lc + ld == 2 && A + B + C + D == 1)
					//la+lb+lc+ld==2��ʾA,B,C,D��������˵�Ļ������ 
					 //A+B+C+D==1������ʾA,B,C,D��ֻ��һ���ﷸ 
					{	
						if(la) printf("A˵�Ļ�����\n");  		//�����A˵�滰�� 
						if(lb) printf("B˵�Ļ�����\n"); 
						if(lc) printf("C˵�Ļ�����\n"); 
						if(ld) printf("D˵�Ļ�����\n"); 
						if(A) printf("A���ﷸ\n");		//���A��ֵΪ1����ӡ��A���ﷸ��   
						else if(B) printf("B���ﷸ\n");   		//�����B���ﷸ��
						else if(C) printf("C���ﷸ\n");  		//�����C���ﷸ��
						else        printf("D���ﷸ\n");   		//�����D���ﷸ��
					}				
				}
			}
		}
	}	
	
	return 0;
}
