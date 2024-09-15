#include <stdio.h>

int main(void){
    int i=0;//本地变量
    char* s="hello";//指向的字符串地址很小，位于程序的代码段，只读。指针指向某一字符串
    // char s[]="hello";//如果要修改字符串，应该用数组。字符串就在这儿
    char* s2="hello";
    // char word[]="hello";
    // char line[10]="hello";
    // s[0]='B';发生错误，只读的代码段，无法改写。，
    //如果要修改字符串，应该用数组，char s[]="hello";
    printf("&i=%p\n",&i);
    printf("s=%p\n",s);
    printf("s2=%p\n",s2);
    printf("Here!s[0]=%c\n",s[0]);

    return 0;
}



/*

char *str="hello";
char word[]="hello";
数组：这个字符串在这儿，作为本地变量自动被回收
指针：这个字符串不知道在哪，处理参数，动态分配空间

字符串可以作为char*的形式，
char*不一定是字符串，只有指向的字符数组结尾是0，才是字符串

*/
