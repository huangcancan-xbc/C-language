#include <stdio.h>
//scanf函数返回的是：实际读到的数据的个数
//scanf 函数读取失败的时候，返回的是EOF
//EOF - end of file 文件结束标志
int main() {
   int iq = 0;
   //输入
while (scanf("%d",&iq)==1){
      //输出
      if (iq >= 140)
          printf("Genius\n");
  }

    return 0;}
//或者： 
//int main() {
//    int iq = 0;
//    //输入
//    while (scanf("%d", &iq) != EOF) {
//        //输出
//        if (iq >= 140)
//            printf("Genius\n");
//    }
//
//    return 0;
