#include <stdio.h>

int f(void){
    // char *t="title";
    // char *s;
    // s=t;//并没有产生新的字符串，只是让指针s指向了t所在的字符串，对s的任何操作就是对t做的

    char string[8],word[8];
    // scanf("%s",&string);//读入一个单词，到空格、tab、回车为止。
    // scanf("%s",&word);
    scanf("%7s",&string);//限制只读7个字符
    scanf("%7s",&word);
    printf("%s##%s##\n",string,word);
}

int main(void){
    f();

    return 0;
}


/*

常见错误：
char* string;
scanf("%s",&string);
以为char*是字符串类型，定义了一个字符串类型的变量string就可以直接用了
    由于没有对string初始化为0，所以不一定每一次都出错。

空字符串：
char buffer[100]="";
这是一个空字符串，buffer[0]='\0'

char buffer[]="";这个数组长度为1

*/
