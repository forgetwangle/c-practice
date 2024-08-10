#include <stdio.h>

//void pp(int i);//函数头，函数的原型声明，如果不声明则需要把函数放在main函数之前
void pp(int);//函数的原型声明是可以不写参数名的，因为编译器不检查参数名

int main(){
    pp(4);

    return 0;
}

void pp(int i){//对之前的函数原型声明进行定义
    printf("%d\n",i);
    return;
}

/*
return停止函数的运行，并返回一个值

return;//不返回任何东西
return 表达式;

void函数不能包括带值的return。
*/
