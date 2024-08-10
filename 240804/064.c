#include <stdio.h>

int main(){
    int i,j;
    i=(3+4,5+6);
    j=3+4,5+6;
    printf("%d %d",i,j);

    return 0;
}
/*
逗号运算符，连接两个表达式，以右边表达式的值作为结果
优先级为所有运算符中最低
组合关系从左向右

主要在for循环中使用
for(i=0,j=10;i<j;i++,j--){}
*/
