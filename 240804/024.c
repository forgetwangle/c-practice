#include <stdio.h>

int main(){
    int x,fx;
    scanf("%d",&x);
    if(x<0)fx=-1;
    else if(x==0)fx=0;
    else fx=2*x;
    printf("fx的值为%d",fx);
    return 0;
}
//else都对齐会很好看。
//scanf不要忘了&
