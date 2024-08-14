#include <stdio.h>

void minmax(int a[],int len,int *min,int *max);

int main(void){
    int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
    int min,max;

    printf("main,sizeof(a)=%lu\n",sizeof(a));//68,17个int的大小
    printf("main,a=%p\n",a);//D0

    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("a[0]=%d\n",a[0]);
    printf("min=%d,max=%d\n",min,max);

    int *p=&min;
    printf("*p=%d,\tp[0]=%d\n",*p,p[0]);//把指针p看作数组
    printf("a[0]=%d,\t*a=%d\n",a[0],*a);

    return 0;
}

void minmax(int *a,int len,int *min,int *max){  //可以将a[]改成*a，一样的
// void minmax(int a[],int len,int *min,int *max){  //参数列表中的int a[]其实是个指针
    int i;

    printf("minmax,sizeof(a)=%lu\n",sizeof(a));//8，64位系统，指针的大小
    printf("minmax,a=%p\n",a);//D0,,,说明函数内的数组a和main中的是同一个，传进来的是指针
    a[0]=1000;//函数内外是同一个数组，因此改变其中的元素也会影响全局的元素。
    // printf("sizeof(a)=%d,sizeof(int*)=%d\n",sizeof(a),sizeof(int*));

    *min=*max=a[0];
    for(i=1;i<len;i++){
        if(a[i]>*max)*max=a[i];
        if(a[i]<*min)*min=a[i];
    }
}

/*
int a[]={2,3,4,13,};
数组传进函数后sizeof(a)返回的是sizeof(int*)而不是sizeof(int[])

函数参数表中的数组实际上是指针
函数内的数组a：sizeof(a)=sizeof(int*)=sizeof(&a)
可以用数组的运算符[]来进行运算

以下四种函数原型等价：
int sum(int *ar,int n);
int sum(int *,int);
int sum(int ar[],int n);
int sum(int [],int);

数组变量是特殊的指针，
数组变量本身表达地址
    int a[10];int *p=a;//无需用&取地址
数组的单元是变量，需要用&取地址
a==&a[0],数组的地址和a[0]一样
[]运算符可以对数组做，也可以对指针做
    p[0]==*p,//p[0]指，把指针p看作数组的话，p的第一个单元
*运算符可以对指针做，也可以对数组做
    *a==a[0],

数组变量是const指针，不能被赋值
int a[10];
int b[]=a;//不可以，错误的
    int b[] --->int * const b;//b是const变量，是常数，不可改变
int *p=a;//可以
*/
