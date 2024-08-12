#include <stdio.h>

int main(void){
    int i=0;
    int p;
    p=(int)&i;
    printf("Ox%x\n",p);
    printf("%p\n",&i);
    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(&i));//64位架构下输出8，32位架构下输出4

    return 0;
}

/*
运算符and：&
获取变量的地址。

printf语句中%p是打印地址（指针地址）的，是十六进制的形式，但是会全部打完，即有多少位打印多少位。

*/
