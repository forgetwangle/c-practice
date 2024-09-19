#include <stdio.h>

int main(int argc,char const *argv[]){
    // //打开文件的标准代码
    // FILE *fp=fopen("file","r");
    // if (fp){
    //     fscanf(fp,…);
    //     fprintf(fp);
    // }else{
    //     …
    // }
    FILE *fp=fopen("12.in","r");
    if (fp){
        int num;
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
    }else{
        printf("文件无法打开\n");
    }

    return 0;
}

/*
12.in文件
12345
*/

/*

文件的输入输出
用>和<做重定向
<指定一个文件作为它的输入
>指定把它的输出写到另一个文件里

FILE
FILE*fopen(const char*restrict path,const char*restrict mode);
int fclose(FILE *stream);
fscanf(FILE*,…)
fprintf(FILE*,…)

fopen
    r   只读
    r+  打开读写，从文件头开始
    w   打开只写，如果不存在则新建，如果存在则清空
    w+  打开读写，如果不存在则新建，如果存在则清空
    a   打开追加，如果不存在则新建，如果存在则在文件尾开始
    ..x 只新建，如果文件已存在则不能打开

*/
