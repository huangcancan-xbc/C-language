#include <stdio.h>
#define CN 3          	//�༶��
#define SN 10         	//���༶ѧ����

int main(void)
{
	int cs[CN+1][SN+1];                        //���CN���༶ѧ���ĳɼ�
	double sum[CN+1]={0}, ave[CN+1];          //��Ÿ���ѧ���ܷ֡�ƽ����	
	for(int i = 1;i <= CN;i++)
	{	 
		for(int j = 1;j <= SN;j++)
		{
			scanf("%d", &cs[i][j]);            //�����i���༶��jѧ���ĳɼ���cs[i][j]
			sum[i] += cs[i][j];                //��cs[i][j]�ӵ���i���༶���ܳɼ�sum[i]��
		}
	}
	int max[CN+1], maxk[CN+1];               //�ֱ��Ÿ�����߷֡���߷�ѧ������� 
	for(int i = 1; i <= CN; i++)
	{//������༶�ĵ�һ��ѧ���ɼ���ÿ���༶����߷֣�����༶��ƽ���� 
		max[i] = cs[i][1];
		maxk[i] = 1;
		ave[i] = sum[i] / SN;
	}
	for(int i = 1;i <= CN;i++)
	{//�ҳ����༶����߷� 
		for(int j = 2;j <= SN;j++)
		{
			if(cs[i][j] > max[i])
			{
				max[i] = cs[i][j];
				maxk[i] = j;
			}
		}
	}
	//�ֱ�������ѧ������߷֡���߷ֵİ�š�ƽ���ɼ���ߵİ��
	int cmax, cmaxk, avemaxk;
	//������ͬѧ����߷ּ���߷����ڵİ༶���
	//ͬʱ���ƽ���ɼ���ߵİ�� 
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
	
	//��������༶�İ�š�ƽ���ɼ�����߷�ͬѧ����ż�����
	printf("�༶�İ��\tƽ���ɼ�\t��߷�\t��߷����\n") ;
	for(int i = 1; i <= CN; i++)
		printf(" %4d\t\t%.2f\t\t%d\t%4d\n", i, ave[i], max[i], maxk[i]);   
	 //��������༶�е���߷֣������ڰ༶�����
	printf("��߷�Ϊ%d�� �����%d ����Ϊ%d \n", cmaxk, maxk[cmaxk], cmax);	
	 //���ƽ���ɼ���ߵİ༶����ƽ���ɼ�
	printf("ƽ���ɼ���ߵİ����:%d ƽ���ɼ�Ϊ:%.2f\n", avemaxk, ave[avemaxk]);

	return 0;
}	
