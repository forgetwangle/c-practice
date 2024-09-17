#include <stdio.h>

struct date{
    int month;
    int day;
    int year;
};

int main(int argc,char const*argv[]){
    struct date today={07,31,2014};//第一种初始化
    struct date thismonth={.month=07,.year=2014};//第二种初始化
    printf("Today is %i-%i-%i\n",
        today.month,today.day,today.year);
    printf("This month is %i-%i-%i\n",
        thismonth.month,thismonth.day,thismonth.year);

    struct date today2;
    today2=(struct date){06,31,2014};//赋值
    struct date day;
    day=today2;//复制
    struct date *pDate=&today;//结构指针
    printf("today2'date is %i-%i-%i\n",today2.year,today2.month,today2.day);
    printf("the day'date is %i-%i-%i\n",day.year,day.month,day.day);

    printf("address of today is %p\n",pDate);
    
    return 0;
}

/*

结构的初始化

结构成员，用.运算符和名字访问其成员

结构运算，赋值、取地址、传递给函数参数
p1=(struct point){5,10};相当于p1.x=5,p1.y=10;
p1=p2;相当于p1.x=p2.x;p1.y=p2.y;

结构指针
struct date *pDate=&today;

*/
