#include <stdio.h>
#include "max.h"
#include "min.h"//min.h和max.h中都声明了同一个结构

int main(int argc,char const *argv[]){
    int a=5,b=6;
    printf("%d\n",max(a,gAll));

    return 0;
}
/*
min.h文件
#include "max.h"

max.h文件
#ifndef _MAX_H_   如果没有定义宏命令_MAX_H_，则定义其
#define _MAX_H_
int max(int a,int b);
extern int gAll;//声明全局变量
struct Node{
    int value;
    char*name;
};
#endif      结束条件判断

max.c文件
#include "max.h"
int gAll=12;//所在编译单元的全局变量
int max(int a,int b){
    return a>b?a:b;
}
*/

/*

int i;//函数的定义
extern int i;//函数的声明

声明是不产生代码的东西：
函数原型，变量声明，结构声明，宏声明，枚举声明，类型声明，inline函数
定义是产生代码的东西

一般规定只有声明可以放进头文件中
否则一个项目中多个编译单元有重名的实体
    有些编译器用weak修饰符强调这种存在

重复声明
同一个编译单元中，同名的结构不能被重复声明
如果头文件有结构的声明，很难这个头文件不会在一个编译单元里被#include多次
所以需要标准头文件结构

#ifndef 宏//如果没定义宏
#define 宏
省略
#endif //结束条件判断

#pragma once也能起到同样的作用，但不是所有编译器都支持

*/
