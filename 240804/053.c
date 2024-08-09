#include <stdio.h>

int main(){
    char c=255;
    int i=-1,q=012,p=0x1f;
    printf("%o %x\n",q,p);
    printf("%u %u\n",c,i);
    // char c=255;
    // printf("%ld\n",c);

    return 0;
}
/*
printf()和scanf()只有两种整数的输出形式：int或long long
其他类型会被转化为这两种
%d:int
%u:unsigned
%ld:long long
%lu:unsigned long long

0开头的数字字面量是8进制,输出8进制用%o,
0x开头的数字字面量是16进制,输出16进制用%x，若要输出大写则用%X
*/
