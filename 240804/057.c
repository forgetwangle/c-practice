#include <stdio.h>

int main(){
    char c,d;
    c=1;d='1';
    if(c==d)printf("相等\n");
    else printf("不相等\n");
    printf("c=%d,d=%d\n",c,d);

    return 0;
}
/*
char是一种整数，也是一种特殊的类型，输入输出%c
单引号表示字符字面量，如'a'
' '也是一个字符

'1':49,'A':65,'a':97,' ':32
*/
