#include <stdio.h>
#include <string.h>

int main(void)
{//正确的id号和密码分别为："wyp", "123456" 
	char id[31], psw[21];  			//存放用户输出的id和密码
	int n=3, f=0;  					//分别存放输入id、密码的次数，以及是否输入正确，0表示不正确 
	do
	{
		n--;
		printf("输入你的id:");
		gets(id);
		printf("输入你的密码：");
		gets(psw);
		if(strcmp(id,"wyp") == 0 && strcmp(psw,"123456") == 0) 
		{ //验证id和psw与系统设定的用户和密码是否完全一致 
				printf("welcome!\n");
			f = 1;          				//标志输入正确 
			break;
		}
		else
		{
			if(n > 0)
			   printf("你还有%d机会输入id和密码哟！\n", n);
		}
					
	}while(n > 0);
	if(f == 0)              			//三次输入均不正确
		printf("sorry! bye bye!\n");	
	
	return 0;
}
