#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main(void){
    int x;
    scanf("%d",&x);
    if(isPrime(x))printf("%d是素数\n",x);
    else printf("%d不是素数\n",x);

    return 0;
}

int isPrime(int x){
    int ret=1;
    int i;
    if(x==1||(x%2==0&&x!=2)||x==9||x==15)ret=0;
    for(i=3;i<sqrt(x);i+=2){//如果是i<=sqrt(x),则可以去掉if条件中的x=9和x=15
        if(x%i==0){
            ret=0;
            break;
        }
    }
    return ret;
}

/*
这种判断素数的方法是靠，新输入的数是否能被奇数整除，且奇数范围小于等于输入数的平方根
*/
