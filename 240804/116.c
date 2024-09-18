#include <stdio.h>

#define cube(x) ((x)*(x)*(x))

int main(int argc,char const *argv[]){
    int i;
    scanf("%d",&i);
    printf("%d\n",cube(i));
    // printf("%d\n",cube(5));

    return 0;
}

/*

带参数的宏
#define cube(x) ((x)*(x)*(x))
cube(x)中的参数x是没有类型的
((x)*(x)*(x))是cube(x)的值

错误
#define RADTODEG1(x) (x*57.29578)
#define RADTODEG2(x) (x)*57.29578

RADTODEG1(5+2)
180/RADTODEG2(1)
编译后：.i文件
(5+2*57.29578)
180/(1)*57.29578

正确
#define RADTODEG1(x) ((x)*57.29578)
整个值要(),参数出现的每个地方要()

可以带多个参数
#define MIN(a,b) ((a)>(b)?(b):(a))
也可以组合(嵌套)使用其他宏

部分宏会被inline函数替代
还有##运算符
条件编译
error

*/
