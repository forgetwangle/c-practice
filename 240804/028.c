#include <stdio.h>

int main(){
    int x,n=0;
    scanf("%d",&x);
    x/=10;
    n++;
    while(x>0){
        x/=10;
        n++;
    }
    printf("位数为：%d",n);
    return 0;
}
//
