#include <stdio.h>

int f(void);

int gAll=12;

int main(int argc,char const *argv[]){
    printf("in %s gAll=%d\n",__func__,gAll);
    f();
    printf("agn in %s gAll=%d\n",__func__,gAll);

    return 0;
}

int f(void){
    int gAll=1;
    printf("in %s gAll=%d\n",__func__,gAll);
    gAll+=2;
    printf("agn in %s gAll=%d\n",__func__,gAll);
    return gAll;
}

/*

全局变量：定义在函数外面的变量，全局的生存期和作用域

__func__   是当前所在的函数的函数名

没有做初始化的全局变量会得到0值，指针会得到NULL值
只能用编译时刻已知的值来初始化全局变量
初始化发生在main函数之前

如果函数内部存在与全局变量同名的变量，则全局变量被隐藏

*/
