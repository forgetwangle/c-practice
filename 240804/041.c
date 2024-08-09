#include <stdio.h>

int main(){
    int num,mask=1,sum;
    scanf("%d",&num);
    

    sum=1;
    for(;num>0;num/=10){
        sum=sum*10+num%10;
    }
    for(;sum>0;sum/=10){
        if(sum/100==0){
            printf("%d",sum%10);
            break;
        }
        printf("%d ",sum%10);
    }

    return 0;
}
//
