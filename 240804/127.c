#include <stdio.h>
#include <stdlib.h>
#include "array.h"

const BLOCK_SIZE=20;

Array array_create(int init_size){
    Array a;
    a.size=init_size;
    a.array=(int*)malloc(sizeof(int)*a.size);
    return a;
}

// Array *array_create(Array*a,int init_size){
//     a==NULL?
//     free(a);
//     a->size=init_size;
//     a->array=省略
//     return a;
// }

void array_free(Array *a){
    free(a->array);
    // a->array=NULL;//防止别人调用两次free
    a->size=0;
}

//封装
int array_size(const Array*a){
    return a->size;
}

int *array_at(Array*a,int index){
    if(index>=a->size){
        array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
    }
    return &(a->array[index]);//返回指针方便赋值
}

int array_get(const Array*a,int index){
    return a->array[index];
}

void array_set(Array*a,int index,int value){
    a->array[index]=value;
}

void array_inflate(Array*a,int more_size){
    int*p=(int*)malloc(sizeof(int)*(a->size+more_size));
    int i;
    for(i=0;i<a->size;i++){
        p[i]=a->array[i];
    }
    free(a->array);
    a->array=p;
    a->size+=more_size;
}

int main(int argc,char const*argv[]){
    Array a=array_create(100);
    printf("%d\n",array_size(&a));
    // printf("%d\n",a.size);
    *array_at(&a,0)=10;
    printf("%d\n",*array_at(&a,0));
    int number=0;
    int cnt=0;
    while(number!=-1){
        scanf("%d",&number);
        if(number!=-1)*array_at(&a,cnt++)=number;
        // scanf("%d",array_at(&a,cnt++));
    }
    array_free(&a);

    return 0;
}



/*
array.h文件
#ifndef _ARRAY_H_
#define _ARRAY_H_
typedef struct{
    int *array;
    int size;
}Array;
// }*Array;//*Array说明前面的结构是个指针
// Array a;//a是个指针
Array array_create(int init_size);
void array_free(Array *a);
int array_size(const Array*a);
int *array_at(Array*a,int index);
void array_inflate(Array*a,int more_size);
#endif

array.c文件

*/

/*

可变数组
the interface
Array array_create(int init_size);
void array_free(Array *a);
int array_size(const Array*a);
int *array_at(Array*a,int index);
void array_inflate(Array*a,int more_size);

*/
