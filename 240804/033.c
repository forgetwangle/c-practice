#include <stdio.h>

int main(){
    int i,factor=1;
    scanf("%d",&i);
    // while(i>=1){
    //     factor*=i;
    //     i--;
    // }
    for(int n=2;n<=i;n++)factor*=n;
    printf("%d",factor);
    
    return 0;
}
//for(初始条件;循环继续;循环动作){}
