#include <stdio.h>
#include <string.h>

int mylen(const char* s){
    //int i,cnt=0;
    // for(i=0,s[i]!=0,i++){
    //     cnt++;
    // }
    int idx=0;
    while(s[idx]!='\0'){
        idx++;
    }

    return idx;
}

int main(int argc,char const*argv[]){
    char line[]="hello";
    printf("strlen=%lu\n",mylen(line));
    printf("strlen=%lu\n",strlen(line));
    printf("sizeof=%lu\n",sizeof(line));

    return 0;
}


/*

string.h

strlen
size_t strlen(const char*s);(返回s的字符串长度，不包括结尾的0)

strcmp
strcpy
strcat
strchr
strstr

*/
