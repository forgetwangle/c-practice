#include <stdio.h>

int search(int key,int a[],int length);

int main(){
    int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
    // int a[10]={[0]=2,[2]=3,6,[5]=7};

    // {
    //     int i;
    //     for(i=0;i<13;i++){       //测试代码
    //         printf("%d\t",a[i]);//输出数组中所有元素
    //     }
    // }

    int x,loc;
    scanf("%d",&x);
    loc=search(x,a,sizeof(a)/sizeof(a[0]));
    if(loc<0)printf("不存在\n");
    else printf("%d",++loc);

    return 0;
}

int search(int key,int a[],int length){
    int i;
    int loc=-1;
    for(i=0;i<length;i++){
        if(key==a[i]){
            loc=i;
            break;
        }
    }
    return loc;
}

/*
数组的集成初始化：int a[]={1,2,3,4,7};
一般初始化：int a[10];
大括号里赋值的数如果小于数组大小，未赋值的将被初始化为0；

int a[5]={1,3}结果是{1,3,0,0,0}
int a[5]={[0]=2,[2]=3,6}结果是{2,0,3,6,0}

sizeof(a)/sizeof(a[0])得到数组中元素个数。

数组变量本身不能被赋值。
数组作为函数的参数时，不能在[]中给出数组的大小，不能再用sizeof计算数组元素个数
*/
