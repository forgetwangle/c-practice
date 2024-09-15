#include <stdio.h>
#include <string.h>

int mycmp(const char*s1,const char*s2){
    // int idx=0;
    // // while(1){
    // //     if(s1[idx]!=s2[idx])break;
    // //     else if(s1[idx]=='\0')break;
    // //     else idx++;
    // // }
    // while(s1[idx]==s2[idx]&&s1[idx]!='\0'){
    //     idx++;
    // }
    // return s1[idx]-s2[idx];
    while(*s1==*s2&&*s1!='\0'){
        s1++;
        s2++;
    }
    return *s1-*s2;
}

int main(int argc,char const*argv[]){
    char s1[]="abc";
    char s2[]="abc ";
    printf("%d\n",s1==s2);
    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",mycmp(s1,s2));
    printf("%d\n",'a'-'A');

    return 0;
}


/*

int strcmp(const char*s1,const char*s2);
比较两个字符串，返回：
0：s1==s2
1：s1>s2
-1：s1<s2

*/
