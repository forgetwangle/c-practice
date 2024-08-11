#include <stdio.h>

void swap(int a,int b);

int main(){
    int a=5,b=6;
    swap(a,b);

    {                        //通常在代码块中加入大括号来调试代码
        
        int a=0;            //变量的生存期和作用域，在函数块或语句块中
        printf("%d\n",a);   //{}以内就是一个语句块
    }                       //块外面定义的变量在块里面依然生效
                            //块里面定义了同名的变量便掩盖外面的
                            //不能在一个块内定义同名变量
    printf("%d %d\n",a,b);

    return 0;
}

void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
}

/*
定义的交换函数并不能实现交换，因为变量有其作用域
函数只能输出printf后的值，或是返回return后的值。
*/
