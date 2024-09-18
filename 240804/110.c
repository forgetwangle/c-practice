#include <stdio.h>

int main(int argc,char const *argv[]){


    return 0;
}

/*

自定义数据类型
typedef声明已有数据类型的新名字

typedef int Length;
使得Length成为了int类型的别名
Length a,b,len;
Length numbers[10];

typedef long int64_t;//int64_t等价于long的别名
typedef struct ADate Date;或
typedef struct ADate{
    int month;
    int day;
    int year;
}Date;//与之前Date是结构变量不一样，这里Date是struct ADate的别名
int64_t i=10000;
Date d={9,12,2014};

typedef char* Strings[10];//String是10个字符串的数组的类型

*/
