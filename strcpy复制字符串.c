#include <string.h>//strcpy(目标字符串的地址, 源字符串的地址);
#include <stdio.h>

int main() {

char src[] = "我喜欢编程"; // 这是源字符串，相当于装满苹果的篮子
char dest[20]; // 这是目标字符串，一个空篮子，需要足够大来装下"我喜欢编程"以及结尾的'\0'

strcpy(dest, src); // 调用strcpy函数，将src的内容复制到dest中
 printf("复制的字符串: %s\n", dest);
 
char a[] = "Source String"; // 源字符串
char b[20]; // 目标字符串，需要足够大
strcpy(b, a); // 正确地从a复制到b
printf("复制的字符串: %s\n", b);
}
