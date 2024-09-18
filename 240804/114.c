#include <stdio.h>

int*f(void);
void g(void);

int main(int argc,char const *argv[]){
    int *p=f();
    printf("*p=%d\n",*p);
    g();
    printf("*p=%d\n",*p);

    return 0;
}

int*f(void){
    int i=12;
    return &i;
}

void g(void){
    int k=24;
    printf("k=%d\n",k);
}

/*

返回指针的函数

返回本地变量的地址是危险的
返回全局变量的地址是安全的
返回函数内malloc的内存是安全的，但是容易造成问题
最好的做法是返回传入的指针

不要使用全局变量来在函数间传递参数和结果
使用全局变量和静态本地变量的函数是线程不安全的

*/
