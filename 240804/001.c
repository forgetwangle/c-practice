#include <stdio.h>

int main(){
    //int u=32;
    //int v=26;
    //while(v!=0){
    //    int temp= u%v;
    //    u=v;
    //    v=temp;
    //}
    //printf("%d\n",u);
    int a,b,gcd;
    scanf("%d %d",&a,&b);
    while(b!=0){
        gcd=a%b;
        a=b;
        b=gcd;
    }
    printf("%d",a);

    return 0;
//
}
