#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i;
    void* p;
    int cnt=0;
    // p=malloc(100*1024*1024);
    // p++;
    p=&i;
    free(p);//结果释放过来的空间不是申请过来的
    free(NULL);

    return 0;
}



/*

free()把申请过来的空间还给系统，只能还申请过来空间的首地址。

*/
