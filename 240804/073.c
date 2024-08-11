#include <stdio.h>

int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes);

int main(void){
    const int number=100;
    int prime[100]={2};
    int i=3;
    int count=1;
    while(count<number){
        if(isPrime(i,prime,count))prime[count++]=i;
        {                                       //用大括号来调试
            printf("i=%d\tcount=%d\t",i,count);
            {                       //第二对大括号是为了不影响第一对大括号中的输出i，和重新声明的i
                int i;              //c99可以不用中间第二对大括号
                for(i=0;i<number;i++){
                    printf("%d\t",prime[i]);
                }
                printf("\n");
            }
        }
        i++;
    }
    for(i=0;i<number;i++){
        printf("%d",prime[i]);
        if((i+1)%5)printf("\t");
        else printf("\n");
    }

    return 0;
}

int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes){
    int ret=1;
    int i;
    for(i=0;i<numberOfKnownPrimes;i++){
        if(x%knownPrimes[i]==0){
            ret=0;
            break;
        }
    }
    return ret;
}

/*
这种判断素数的方法是靠：新输入的数，能否被已建立的素数表整除来实现。
*/

