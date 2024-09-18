#include <stdio.h>

//const double PI=3.14159;
#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI
#define PRT printf("%f ",PI);\
            printf("%f\n",PI2)

int main(int argc,char const *argv[]){
    printf(FORMAT,PI2*3.0);
    PRT;
    printf("%s:%d\n",__FILE__,__LINE__);
    printf("%s,%s\n",__DATE__,__TIME__);

    return 0;
}

/*

宏
#是编译预处理指令，不属于c语言的成分
#define定义宏

#define <名字> <值>
名字必须是一个单词，值可以是各种东西
完全的文本替换

如果一个宏有其他宏的名字，也会被替换
如果一个宏的值超过一行，最后一行的行末需要加\
宏后面出现的注释不会被当作宏的值的一部分

没有值的宏
#define _DEBUG
这类宏用于条件编译，后面有其他的编译预处理指令
来检查这个宏是否已经定义过了

预定义的宏
__LINE__
__FILE__
__DATE__
__TIME__
__STDC__

*/
