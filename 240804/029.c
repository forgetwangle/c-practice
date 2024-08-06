#include <stdio.h>

int main(){
    int x,n=0;
    scanf("%d",&x);
    do{
        x/=10;
        n++;
    }while(x>0);
    printf("位数为%d",n);
    return 0;
}
//while(){}
//do{}while();
