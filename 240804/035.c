#include <stdio.h>

int main(){
    int x,isPrime,i;
    for(x=2;x<=100;x++){
        isPrime=1;
        for(i=2;i<x;i++){
            if(x%i==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime)printf("%d,",x);
    }
    return 0;
}
//
