#include <stdio.h>
//scanf�������ص��ǣ�ʵ�ʶ��������ݵĸ���
//scanf ������ȡʧ�ܵ�ʱ�򣬷��ص���EOF
//EOF - end of file �ļ�������־
int main() {
   int iq = 0;
   //����
while (scanf("%d",&iq)==1){
      //���
      if (iq >= 140)
          printf("Genius\n");
  }

    return 0;}
//���ߣ� 
//int main() {
//    int iq = 0;
//    //����
//    while (scanf("%d", &iq) != EOF) {
//        //���
//        if (iq >= 140)
//            printf("Genius\n");
//    }
//
//    return 0;
