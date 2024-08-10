#include <stdio.h>

int isPrime(int i){
    int ret=1;
    int j;
    for(j=2;j<i;j++){
        if(i%j==0){
            ret=0;
            break;
        }
    }
    return ret;
}

int main(){
    int m,n,sum=0,cnt=0,i;
    scanf("%d %d",&m,&n);
    if(m==1)m=2;
    for(i=m;i<=n;i++){
        if(isPrime(i)){
            cnt++;
            sum+=i;
        }
    }
    printf("%d %d\n",cnt,sum);
    return 0;
}
/*

*/
