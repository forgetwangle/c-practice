#include <stdio.h>

// struct date{
//         int month;
//         int day;
//         int year;
//     };
//和本地变量一样，在函数内部声明的结构类型只能在函数内部使用
//所以通常在函数外部声明结构类型，这样就可以被多个函数使用了

int main(int argc,char const*argv[]){
    struct date{
        int month;
        int day;
        int year;
    };//一个结构就是一个复合的数据类型
    struct date today;
    today.month=07;
    today.day=31;
    today.year=2014;
    printf("today is %i-%i-%i\n",today.month,today.day,today.year);
    
    return 0;
}

/*

struct point{
    int x;
    int y;
};声明结构类型
struct point p1,p2;声明结构变量
注：p1,p2都是point，里面都有x和y的值。

struct {
    int x;
    int y;
}p1,p2;
注：p1，p2都是一种无名结构，里面都有x和y

struct point{
    int x;
    int y;
}p1,p2;
注：p1,p2都是point，里面都有x和y的值。

*/
