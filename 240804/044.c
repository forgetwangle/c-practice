#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%dx%d=%d",j,i,i*j);
            if(j<i){
                printf("  ");
                if(i*j/10==0)printf(" ");
            }
            else printf("\n");
            
        }
    }

    return 0;
}
//
