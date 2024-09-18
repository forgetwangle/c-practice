#include <stdio.h>//stdio.h里只有printf的原型，printf的代码在某个.lib(win)或.a(Unix)
#include "max.h"//头文件

int main(int argc,char const *argv[]){
    int a=5,b=6;
    printf("%d\n",max(a,b));

    return 0;
}
/*
max.c文件,同一个文件夹下，多个源代码文件一起编译
#include "max.h"
int max(int a,int b){
    return a>b?a:b;
}
main.h文件，头文件
int max(int a,int b);
*/

/*

把函数原型放到一个头文件中(.h结尾)，在需要调用这个函数的
源代码文件中(.c结尾)#include这个头文件，就能让编译器在
编译时知道函数的原型

#include编译预处理指令，将文件的全部文本原封不动地插入他所在的地方。
不一定在.c文件的最前面#include

#include插入文件的两种形式
    ""要求首先在.c所在的目录寻找，再到编译器指定目录寻找
    <>让编译器只在指定目录寻找
环境变量和编译器命令行参数也可以指定寻找头文件的目录

现在c语言编译器默认引入所有的标准库

在使用和定义这个函数的地方都应该#include这个头文件
一般的做法是任何的.c都有对应的同名的.h，把所有公开的
函数原型和全局变量声明都放进去

在函数前面加上static就使得它成为只能在所在的编译单元
中被使用的函数
在全局变量前面加上static就使得它成为只能在所在的编译单元
中被使用的全局变量

*/
