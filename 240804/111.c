#include <stdio.h>

typedef union{
    int i;
    char ch[sizeof(int)];
}CHI;

int main(int argc,char const *argv[]){
    CHI chi;
    int i;
    chi.i=1234;//16进制下是00 00 04 D2
    for(i=0;i<sizeof(int);i++){
        printf("%02hhX",chi.ch[i]);//输出D2 04 00 00
    }
    printf("\n");

    return 0;
}

/*

联合union,和结构struct很像
union AnElt{
    int i;
    char c;
}elt1,elt2;
elt1.i=4;
elt2.c='a';
elt2.i=0xDEADBEEF;

sizeof(union ...)=sizeof(每个成员)的最大值

存储
    所有的成员共享一个空间
    同一时间只有一个成员是有效的
    union的大小是其最大的成员
初始化
    对第一个成员做初始化

*/
