#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    b=0;
    b+=a/100;
    b+=a/10%10*10;
    b+=a%10*100;
    printf("%d",b);
    return 0;
}
//输入790，得到97
