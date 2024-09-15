#include <stdio.h>
#include <stdlib.h>

int main(void){
    int number;
    int* a;
    int i;
    printf("输入数量：");
    scanf("%d",&number);
    //int a[number];
    a=(int*)malloc(number*sizeof(int));
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    for(i=number;i>0;i--){
        printf("%d ",a[i-1]);
    }
    free(a);//将a借的内存还回去，释放a。

    return 0;
}



/*

int *a=(int*)malloc(n*sizeof(int));

malloc
#include <studio.h>
void* malloc(size_t size)
向malloc申请的空间是以字节为单位的。返回的类型是void*。

申请失败返回0或者NULL

*/
