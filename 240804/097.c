#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char const*argv[]){
    char s[]="hello";//特别注意，指针字符串不可修改，数组字符串可修改。
    char *p=strchr(s,'l');
    // p=strchr(p+1,'l');
    // printf("%s\n",p);

    char c=*p;
    *p = '\0';//s[]="he\0lo\0"

    char*t=(char*)malloc(strlen(s)+1);
    // char*t=(char*)malloc(strlen(p)+1);
    // strcpy(t,p);
    strcpy(t,s);
    printf("%s\n",t);
    free(t);

    return 0;
}


/*

字符串中找字符
char*strchr(const char*s,int c);从左向右找字符串s中c第一次出现的位置
输出字符串：从此位置到字符串末尾
char*strrchr(const char*s,int c);从右向左找字符串s中c第一次出现的位置

字符串中找字符串
char*strstr(const char*s1,const char*s2);
char*strcasestr(const char*s1,const char*s2);忽略大小写

*/
