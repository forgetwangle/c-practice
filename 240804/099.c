#include <stdio.h>

enum color{red,yellow,green};

void f(enum color c);

int main(int argc,char const*argv[]){
    enum color t=red;
    scanf("%d",&t);
    f(t);

    return 0;
}

void f(enum color c){
    printf("%d\n",c);
}

/*

枚举是用户定义的数据类型
enum 枚举类型名字{名字1,...,名字n};
类型是int，值依次从1到n

枚举量可以作为值，枚举类型可以跟上enum作为类型
实际上是以整数来做内部运算和外部输入输出的

*/

