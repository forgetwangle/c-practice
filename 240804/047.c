#include <stdio.h>

int main(){
    int n,i,p=1,q=2,te;
    double sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=1.0*q/p;
        te=q;
        q+=p;
        p=te;
    }
    printf("%.2f\n",sum);

    return 0;
}
//printf()保留两位小数%.2f
