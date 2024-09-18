#include <stdio.h>

int f(void);

int gAll=12;

int main(int argc,char const *argv[]){
    f();
    f();
    f();

    return 0;
}

int f(void){
    int k=0;
    static int all=1;

    printf("&gAll=%p    ",&gAll);
    printf("&all=%p     ",&all);
    printf("&k=%p\n",&k);

    printf("in %s all=%d\n",__func__,all);
    all+=2;
    printf("agn in %s all=%d\n",__func__,all);
    return all;
}

/*

静态本地变量：本地变量定义时加上static修饰符

当函数离开时，静态本地变量会继续存在并保持其值
静态本地变量的初始化只会在第一次进入这个函数时做，
以后进入函数会保持上次离开时的值

静态本地变量，全局的生存期，函数内的局部作用域

*/
