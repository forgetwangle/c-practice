#include <stdio.h>

int main(){
    // printf("%d\n",(short)32768);

    // int i=32768;
    // short s=(short)i;
    // printf("%d\n",i);强制类型转换不影响原本的变量和值
    int a=5,b=6;
    printf("%f %f\n",(double)(a/b),(double)a/b);

    return 0;
}
/*
printf()会将小于int的类型转换成int，float转换成double
scanf()不会，输入short,需要%hd;int,%d;long long,%ld

强制类型转换，(类型)值
(int)10.2,(short)32

强制类型转换的运算优先级比加减乘除要高
*/
