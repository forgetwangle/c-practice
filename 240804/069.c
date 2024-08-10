#include <stdio.h>

// void swap(void);//如果确定函数是没有任何参数的，在()内加上void
void swap();//未声明参数个数和类型，亦未申明是否有参数。

int main(){
    int a=5,b=6;
    swap(a,b);//默认int

    printf("%d %d\n",a,b);

    return 0;
}

void swap(double a,double b){//默认的int与double冲突，造成错误。
    int t=a;
    printf("in swap:a=%f,b=%f\n",a,b);
    a=b;
    b=t;
}

/*
调用函数时，f(a,b),圆括号里的是标点符号，不是逗号运算符
f((a,b)),圆括号里的是逗号运算符

c语言不允许函数的嵌套定义，
可以在函数体里面放另一个函数的原型声明，但不能放另一个函数的body

某一个函数内：
int i,j,sum(int,int);//声明sum()里面是两个整型的参数。
return (i);//不要这么写，虽然最后还是输出i，但让人误以为是个函数

main函数的()里面也可以加void，
main函数的return 0;也是给人看的，怎么看？
windows:if errorlevel 1…
Unix Bash:echo $
Csh:echo $status
*/
