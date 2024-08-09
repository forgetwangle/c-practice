#include <stdio.h>

int main(){
    printf("%ld",sizeof(long double));
    unsigned char i=255;
    printf("\n%d",i);

    return 0;
}
//整数：char,short,int,long,long long
//浮点数：float,double,long double
//逻辑：bool
//指针 
//
//输入输出时格式化，%d-int,%ld-long,%lf-double
//内存中大小：1至16字节，内存中形式：二进制数(补码)，编码。
//sizeof()是静态运算符，不会对括号里的做运算

//1111 1111表示-1，1111 1111~1000 0000表示-1~-128；0000 0000~0111 1111表示0~127
//2^15=32768,short:-32768~32767
//1111 1111被当作二进制来看是255，当作补码来看是-1
//-a的补码是0-a,实际上是2^n-a，n为类型的位数
//补码和原码可以加出一个溢出的0

//后面加u或者U，255u表示自己是unsigned
//后面加l或者L,表示自己是long(long)
//
