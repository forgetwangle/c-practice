#include <stdio.h>

int main(int argc,char const *argv[]){
    // printf("%+9d\n",123);
    // printf("%+-9d\n",-123);
    // printf("%0 9d\n",123);
    // printf("%09d\n",123);
    // printf("%09.2f\n",123.0);
    // printf("%09f\n",123.0);
    // printf("%0*d\n",6,123);
    // printf("%9.2f\n",123.0);
    // printf("%hhd\n",12345);

    // int num;
    // printf("%hhd%n\n",(char)12345,&num);//%n读取其之前有多少字符，存入num
    // // printf("%d%n\n",12345,&num);输出5
    // // printf("%dty%n\n",12345,&num);输出7
    // printf("%d\n",num);//输出1

    // int num;
    // scanf("%*d%d",&num);输入123 456
    // printf("%d\n",num);输出456

    // int num;
    // scanf("%i",&num);//输入0x12,输出18，输入012，输出10
    // printf("%d\n",num);

    // char stime[8];
    // scanf("%*[^,],%[^,]",stime);//输入//$gp,145,
    // printf("%s\n",stime);//输出145

    int num;
    int i1=scanf("%i",&num);//1234
    int i2=printf("%d\n",num);//1234
    printf("%d %d\n",i1,i2);//1 5

    return 0;
}

/*

格式化的输入输出
printf
    %[flags][width][.prec][hlL]type
scanf
    %[flags]type

flag
    '-'左对齐
    '+'在前面放+或-
    '(space)'正数留空
    '0'0填充
width或prec
    'number'最小字符数
    '*'下一个参数是字符数
    '.number'小数点后的位数
    '.*'下一个参数是小数点后的位数
hlL     类型修饰    对于一个整数
    'hh'单个字节
    'h'short
    'l'long
    'll'long long
    'L'long double
type
    'i'或'd'int
    'u'unsigned int
    'o'八进制
    'x'十六进制
    'X'字母大写的十六进制
    'f'或'F'float,6
    'e'或'E'指数
    'g'或'G'float
    'a'或'A'十六进制浮点
    'c'char
    's'字符串
    'p'指针
    'n'读入/写出的个数
(scanf)flag
    '*'跳过
    '数字'最大字符数
    'hh'char
    'h'short
    'l'long,double
    'll'long long
    'L'long double
(scanf)type
    'd'int
    'i'整数，可读取16进制或8进制
    'u'unsigned int
    'o'八进制
    'x'十六进制
    'a''e''f''g'float
    'c'char
    's'字符串(单词)
    '[…]'所允许的字符
    'p'指针

scanf()返回值是读取了几个项目
printf()返回值是输出了几个字符

*/
