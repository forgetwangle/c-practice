#include <stdio.h>

int main(){
    int n,m,te,in,im;
    scanf("%d/%d",&n,&m);
    in=n;im=m;
    do{
        te=in%im;
        in=im;
        im=te;
    }while(im!=0);
    printf("%d/%d",n/in,m/in);

    return 0;
}
//
