#include <stdio.h>

int main(){
    int num,mask=1,sum;
    scanf("%d",&num);
    // mask=num;
    // while(mask%10==0){
    //     count++;
    //     mask/=10;
    // }
    // while(num!=0){
    //     sum+=num%10;
    //     num/=10;
    //     if(num!=0)sum*=10;
    // }
    // while(sum!=0){
    //     printf("%d ",sum%10);
    //     sum/=10;
    // }
    // for(mask=0;mask<count;mask++)printf("0 ");

    sum=num;
    // for(;sum>9;sum/=10){
    //     mask*=10;
    // }
    int cnt=0;
    do{
        sum/=10;
        cnt++;
    }while(sum>0);
    mask=pow(10,cnt-1);
    do{
        sum=num/mask;
        printf("%d",sum);
        if(mask>9)printf(" ");
        num%=mask;
        mask/=10;
    }while(mask!=0);
    // }while(num>0);无法应对7000等特殊数字。

    return 0;
}
//pow(10,n),10的n次方
