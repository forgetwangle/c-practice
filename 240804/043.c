#include <stdio.h>

int main(){
    int n,fl=0,i,t,ti,j;
    scanf("%d",&n);
    t=pow(10,n-1);
    ti=t*10;
    for(i=t;i<10*t;i++){
        for(j=1;j<=n;j++){
            fl+=pow(i%ti*10/ti,n);
            ti/=10;
        }
        if(fl==i)printf("%d\n",i);
        ti=t*10;
        fl=0;
        
    }

    return 0;
}
//
