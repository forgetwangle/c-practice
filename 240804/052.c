#include <stdio.h>

int main(){
    int a=0,order=1;
    // for(a=1;a>0;a++);
    while(++a>0);
    a-=1;
    printf("int类型最大的数为%d\n",a);
    // for(;a!=0;a/=10)order++;
    while(a=a/10)order++;
    printf("其位数为%d",order);

    return 0;
}
//=运算输出赋值的结果。
