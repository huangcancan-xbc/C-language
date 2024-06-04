#include<stdio.h>
struct employee
{
	char name[20];
	char identity[20];
	int work_year;
	int salary;
 } ;
 int main()
 {
	 struct employee a[5];
	 int i,max_salary;
	 for(i=0;i<5;i++)
	 scanf("%s%s%d%d",a[i].name,a[i].identity,&a[i].work_year,&a[i].salary);
	max_salary=a[0].salary;
	for(i=1;i<5;i++)
	if(a[i].salary>max_salary)
	max_salary=a[i].salary;
	printf("max_salary=%d",max_salary);
	return 0;
}
