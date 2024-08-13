#include <stdio.h>

void f(int *p);

int main(void){
    // int i;
    // printf("%p\n",&i);
    // int* p=&i;
    // printf("%p\n",p);
    int i=6;
    printf("&i=%p\n",&i);
    f(&i);
    g(i);

    return 0;
}

void f(int *p){
    printf("p=%p\n",p);
    printf("*p=%d\n",*p);
    *p=26;
}

void g(int k){
    printf("k=%d\n",k);
}

/*
指针变量：是保存地址的变量
指针变量的值：(具有实际值的变量)的地址
int* p=&i;//这步是初始化，初始化之后p是i的地址，*p是i所在地址的值。

int* p,q;和int *p,q;是一样的，都是p是指针，q是普通的int型变量
*p是int，于是p是指针
不存在int*这种类型，只是经常写成这样。

作为参数的指针：
void f(int *p);在被调用时得到变量的地址
int i=0;f(&i);在函数里通过指针访问外面的i

访问地址上的变量*
*是单目运算符，用来访问指针的值所表示的地址上的变量
可以做左值，也可以做右值
ink k=*p;*p=k+1;
*/
