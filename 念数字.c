#include <stdio.h>
#include <string.h>
int main(){
    char a[10000];
    int size;
    scanf("%s",a);
    if(a[0]=='-'){
        printf("fu ");
    }
    size=strlen(a);

    for(int i=0;i<size-1;i++){
        switch(a[i]){
            case '0':printf("ling ");break;
            case '1':printf("yi ");break;
            case '2':printf("er ");break;
            case '3':printf("san ");break;
            case '4':printf("si ");break;
            case '5':printf("wu ");break;
            case '6':printf("liu ");break;
            case '7':printf("qi ");break;
            case '8':printf("ba ");break;
            case '9':printf("jiu ");break;}
        }switch(a[size-1]){
            case '0':printf("ling");break;
            case '1':printf("yi");break;
            case '2':printf("er");break;
            case '3':printf("san");break;
            case '4':printf("si");break;
            case '5':printf("wu");break;
            case '6':printf("liu");break;
            case '7':printf("qi");break;
            case '8':printf("ba");break;
            case '9':printf("jiu");break;}
    return 0;
}
