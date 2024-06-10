#include <stdio.h>
int my_strlen(char* arr);
int main()
{
	char arr[100]; 
	printf("请输入一个字符串：");
	scanf("%s",arr);
	int len=my_strlen(arr);
	printf("%d",len);
	return 0; 
}
int my_strlen(char* arr)
{
	if(* arr!='\0')
	{
		return 1+my_strlen(arr+1);
	}else
	{
		return 0;
	}
}
/*这段代码不能计算空格和其他字符的个数，因为 scanf 函数使用% s 格式说明符时，
 它会读取直到遇到空白字符（空格、制表符、换行符等）为止的字符串，并将这些空白字符作为字符串的结束标志。
 所以，当你输入一个包含空格的字符串时，scanf 只会读取到空格之前的部分。

例如，如果你输入 "hello world"，scanf 只会读取 "hello"，而 "world" 及其后的部分将被留在输入缓冲区中。

要修复这个问题，你可以改用其他方法读取字符串，比如 fgets 函数，
它会读取一行直到遇到换行符或达到指定的最大字符数（包括最后的空字符）。
这样你就可以读取包含空格的字符串了。*/
