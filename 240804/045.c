#include <stdio.h>

int main(){
    int m,n,sum=0,cnt=0,i,j,isPrime=1;
    scanf("%d %d",&m,&n);
    if(m==1)m=2;//1不是素数，提前声明避免错误。
    for(i=m;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            cnt++;
            sum+=i;
            
        }
        isPrime=1;
        
    }
    printf("%d %d",cnt,sum);

    return 0;
}
//
