#include <stdio.h>

int main(void){
    // int i;
    // int p;
    // printf("%p\n",&i);
    // printf("%p\n",&p);
    int a[10];
    printf("%p\n",&a);//F0
    printf("%p\n",a);//F0
    printf("%p\n",&a[0]);//F0
    printf("%p\n",&a[1]);//F4---与F0相隔一个int的内存大小

    return 0;
}

/*
&只能取变量的地址，不能取运算的地址&(a+b)、&(a++)等

相邻变量：堆栈，自顶向下分配变量，即后分配的变量地址比先分配的小。
数组的地址：a的地址和a[0]的地址一样，
数组单元的地址：a[0]的地址最小，a[length-1]的地址最大
相邻的数组单元的地址：
*/
