#include <stdio.h>

int main(void){
    const int maxNumber=20;
    int isPrime[20];
    int i,j;
    for(i=0;i<maxNumber;i++){
        isPrime[i]=1;
    }
    // {                        //测试代码
    //     int k;
    //     printf("\t");
    //     for(k=2;k<maxNumber;k++)printf("%d\t",k);
    // }
    for(i=2;i<maxNumber;i++){
        if(isPrime[i]){
            for(j=2;j*i<maxNumber;j++){
                isPrime[j*i]=0;
            }
        }
        // {                    //测试代码
        //     int k;
        //     printf("\n%d\t",i);
        //     for(k=2;k<maxNumber;k++)printf("%d\t",isPrime[k]);
        // }

    }
    for(i=2;i<maxNumber;i++){
        if(isPrime[i])printf("%d\t",i);
    }

    return 0;
}

/*
构造素数表：
构造n以内的素数
表内元素默认为1；
x=2；x是素数则，将表内所有x的倍数赋值为0；
x++；x位置元素为1时重复上述步骤，直到x=n
*/
