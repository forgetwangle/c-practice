#include <stdio.h>
#include <string.h>

char mycpy(char *dst,const char *src){
    int idx=0;
    // for(idx=0;idx<strlen(src);idx++){
    //     dst[idx]=src[idx];
    // }
    while(src[idx]){//src[idx]!='\0'
        dst[idx]=src[idx];
        idx++;
    }
    dst[idx]=src[idx];
        
    {//指针版本
        char*ret=dst;
        // while(*src){
        //     // *dst=*src;
        //     // dst++;
        //     // src++;
        //     *dst++=*src++;
        // }
        while(*dst++=*src++);
        *dst=*src;
    }
    return dst;
}

int main(int argc,char const*argv[]){
    char *src="abc";
    char *dst=(char*)malloc(strlen(src)+1);
    strcpy(dst,src);
    

    return 0;
}


/*

char *strcpy(char*restrict dst,const char*restrict src);
把src的字符串拷贝到dst,
restrict表明src和dst不重叠
返回dst,为了能链起代码来

*/
