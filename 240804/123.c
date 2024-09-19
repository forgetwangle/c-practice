#include <stdio.h>

int main(int argc,char const *argv[]){
    unsigned char c=0xAA;
    printf(" c=%hhx\n",c);
    printf("~c=%hhx\n",(char)~c);
    printf("-c=%hhx\n",(char)-c);

    return 0;
}

/*

C有这些按位运算的运算符
&  按位的与
        (x)i==1且(y)i==1,那么(x&y)i=1,否则(x&y)i=0
        让某一位或某些位为0：x & 0xFE
        取一个数中的某一段：x & 0xFF
|  按位的或
        使得一位或者几个位为1：x | 0x01
        把两个数拼起来：0x00FF | 0xFF00
~  按位取反
        (~x)i=1-(x)i
        把1变成0，把0变成1
        想要得到全部为1的数：~0
        7的二进制为0111，x | 7使得x的低三位为1
        而x & ~7使得低三位为0
^  按位的异或
        (x)i==(y)i,则(x^y)i=0
        否则，(x^y)i=1
        两个位相等为0，不相等为1
        对一个变量用同一个值异或两次，等于什么都没做
            x^y^y->x
<< 左移
        i<<j
        i中所有的位向左移动j个位置，而右边填入0
        所有小于int的类型，移位以int的方式来做，结果是int
        x<<=1等价于x*=2
        x<<=n等价于x*=2^n
>> 右移

*/
