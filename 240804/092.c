#include <stdio.h>

int main(void){
    char a[][10]={
        "Hello",
        "assddfasgdas"
    };
    //列数必须要给出，因为列相当于数组中元素的类型
    //a[0]-->char [10]
    //元素不能过长，会报错
    char*a[]={
        "Hello",
        "assddfasgdas"
    };
    //a[0]-->char*
    //元素可以很长

    return 0;
}


/*

char**a;
a是一个指针，指向另一个指针，那个指针指向一个字符(串)
char a[][];

程序参数
int main(int argc,char const*argv[])
argv[0]是命令本身
    当使用Unix的符号链接时，显示符号链接的名字

int main(int argc,char const *argv[]){
    int i;
    for(i=0;i<argc;i++){
        printf("%d:%s\n",i,argv[i]);
    }

    return 0;
}


*/
