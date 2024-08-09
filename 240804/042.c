#include <stdio.h>

int main(){
    int a,i,j,k,cnt=0;
    scanf("%d",&a);
    for(i=a;i<a+4;i++){
        for(j=a;j<a+4;j++){
            for(k=a;k<a+4;k++){
                if(i!=j&&j!=k&&i!=k){
                    printf("%d%d%d",i,j,k);
                    cnt++;
                    if(cnt%6==0)printf("\n");
                    else printf(" ");
                }
            }
        }
    }

    return 0;
}
//
