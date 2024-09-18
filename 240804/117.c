#include <stdio.h>

int max(int a,int b);

int main(int argc,char const *argv[]){
    int a=5,b=6;
    printf("%d\n",max(a,b));

    return 0;
}
/*
max.c文件,同一个文件夹下，多个源代码文件一起编译
int max(int a,int b){
    return a>b?a:b;
}
*/
