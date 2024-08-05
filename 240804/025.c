#include <stdio.h>

int main(){
    int type;
    // const int MRN=1;c99才能用.
    scanf("%d",&type);
    switch(type){
        case 0:
        case 1:printf("早上好！\n");break;
        case 1+1:printf("中午好！\n");
        case 3:printf("晚上好！\n");break;
        default:printf("不好！\n");
    }
    return 0;
}
//switch(可以是变量的整数型){}
//case 常量表达式:语句;break;
//default:语句;
//switch会将所有语句执行完，除非遇到break。case表示开始执行的位置。
