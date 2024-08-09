#include <stdio.h>

int main(){
    int i,n;
    // int sign=1;
    double sign=1.0;
    double sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // if(i%2==1)sum+=1.0/i;
        // else sum-=1.0/i;判断
        // sum+=sign*1.0/i;sign是整型
        sum+=sign/i;//sign是浮点数
        sign=-sign;
    }
    printf("%f",sum);

    return 0;
}
//
