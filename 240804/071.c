#include <stdio.h>

int main(){
    const int number=10;
    int ar[number],x,i,sum=0,cnt=0;
    for(i=0;i<number;i++){
        ar[i]=0;
    }
    scanf("%d",&x);
    while(x!=-1){
        if(x<=9&&x>=0)ar[x]++;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    printf("%d %d %f\n",cnt,sum,1.0*sum/cnt);
    for(i=0;i<number;i++){
        printf("%d\t",ar[i]);
    }

    return 0;
}

/*
定义数组：类型 变量名称[元素数量];  double grades[20];

数组：其中的元素有相同的数据类型，
一旦创建，不能改变大小
数组中的元素在内存中连续依次排列

下标从零开始计数

c语言并不会检查下标是否越界，所以需要对下标越界的情况进行约束
*/
