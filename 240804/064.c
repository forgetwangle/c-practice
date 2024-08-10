#include <stdio.h>

int main(){
    int count;
    count=21;
    count=count>20?count>10:count-10;
    printf("%d\n",count);

    return 0;
}
/*
条件运算符：判断语句?运算语句:运算语句;
输出运算语句的结果。

优先级高于赋值运算符，但低于其他运算符。
条件运算符是自右向左结合的
*/
