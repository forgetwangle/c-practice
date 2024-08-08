#include <stdio.h>

int main(){
    int x,isPrime=1;
    scanf("%d",&x);
    for(int i=2;i<x;i++){
        if(x%i==0){
            isPrime=0;
            //break;直接跳出循环
        }else continue;//跳出本轮循环，不执行剩下的语句
        
        printf("%d,",i);
    }
    if(isPrime==0)printf("\n不是素数\n");
    else printf("\n%d是素数。\n",x);
    return 0;
}
//
