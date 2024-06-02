#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[80];
	int len;              					//存放串text的长度 	
	printf("输入要加密的字符串：");
	gets(text);           					//输入可能含有空格的字符串
	len = strlen(text);     					//求字符串的长度
	int i;
	for(i = 0; i < len; i++)
	{//加密处理 
		if(text[i] >= 'a'&&text[i] < 'z' || text[i] >= 'A' && text[i] < 'Z') 
			text[i]++;
		else if(text[i] == 'z') 
			text[i] = 'a';
		else if(text[i] == 'Z') 
			text[i] = 'A';
	} 	
	printf("加密后字符串为：    %s\n", text);
	
	return 0;	 
}
