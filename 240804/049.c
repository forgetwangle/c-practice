#include <stdio.h>

int main(){
    int n,in,cnt=0,mask,t;
    scanf("%d",&n);
    if(n<0){
        printf("fu ");
        n=-n;
    }
    in=n;
    while(in!=0){
        in/=10;
        cnt++;
    }
    mask=pow(10,cnt);
    in=n;
    for(;cnt>0;cnt--){
        t=in%mask;
        mask/=10;
        t/=mask;
        switch(t){
            case 0:printf("ling ");break;
            case 1:printf("yi ");break;
            case 2:printf("er ");break;
            case 3:printf("san ");break;
            case 4:printf("si ");break;
            case 5:printf("wu ");break;
            case 6:printf("liu ");break;
            case 7:printf("qi ");break;
            case 8:printf("ba ");break;
            default:printf("jiu ");
        }
    }

    return 0;
}
//
