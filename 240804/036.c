#include <stdio.h>

int main(){
    int x,isPrime,i,cnt=0;
    for(x=2;cnt<=50;x++){
        isPrime=1;
        for(i=2;i<x;i++){
            if(x%i==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            cnt++;
            printf("%d,",x);
        }
    }
    return 0;
}
//
