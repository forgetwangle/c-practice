#include <stdio.h>

int main(){
    int number,te,en=0;
    scanf("%d",&number);
    while(number!=0){
        te=number%10;
        en=en*10+te;
        number/=10;
    }
    printf("%d",en);
    
    return 0;
}
