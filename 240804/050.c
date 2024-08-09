#include <stdio.h>

int main(){
    int a,n,number=0,i,sum=0;
    scanf("%d %d",&a,&n);
    for(i=1;i<=n;i++){
        number=number*10+a;
        sum+=number;
    }
    printf("%d",sum);

    return 0;
}
//
//    int a,n,number=0,i,sum=0;
//    scanf("%d %d",&a,&n);
//    for(i=1;i<=n;i++){
//        number=number*10+a*i;        
//    }
//    printf("%d",number);
