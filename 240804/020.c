#include <stdio.h>

int main(){
    int a,b;
    printf("请输入两个数：");
    scanf("%d %d",&a,&b);
    int max=b;
    if(a>b){
        max=a;
    }
    printf("大的那个数是%d\n",max);
    return 0;
}
