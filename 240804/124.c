#include <stdio.h>

int main(int argc,char const *argv[]){
    // unsigned char c=0xA5;
    // printf("   c=%hhx\n",c);
    // printf("c<<2=%x\n",c<<2);

    int a=0x80000000;
    unsigned int b=0x80000000;
    printf("a=%d\n",a);
    printf("b=%u\n",b);
    printf("a>>1=%d\n",a>>1);
    printf("b>>1=%u\n",b>>1);

    return 0;
}

/*

<< 左移
        i<<j
        i中所有的位向左移动j个位置，而右边填入0
        所有小于int的类型，移位以int的方式来做，结果是int
        x<<=1等价于x*=2
        x<<=n等价于x*=2^n
>> 右移
        i>>j
        i中所有的位向右移动j个位置
        所有小于int的类型，移位以int的方式来做，结果是int
        对于unsigned的类型，左边填入0
        对于signed的类型，左边填入原来的最高位(保持符号不变)
        x>>=1等价于x/=2
        x>>=n等价于x/=2^n

*/
