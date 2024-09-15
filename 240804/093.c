#include <stdio.h>

int main(){
    int ch;
    while((ch=getchar())!=EOF){
        putchar(ch);
    }
    printf("EOF\n");
    return 0;
}


/*

int putchar(int c);
向标准输出写一个字符
返回写了几个字符，EOF(-1)表示写失败

int getchar(void);
从标准输入读一个字符
返回类型是int是为了返回EOF(-1)
    windows->ctrl+c
    Unix->ctrl+d

*/
