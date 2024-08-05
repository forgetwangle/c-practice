#include <stdio.h>

int main(){
    int a,b,c;
    printf("请输入三个整数：");
    scanf("%d %d %d",&a,&b,&c);
    int max=b;
    // if(a>b){
    //     max=a;
    // }
    // if(max<c)max=c;
    if(a>b){
        if(a>c)max=a;
        else max=c;
    }else {
        if(b>c)max=b;
        else max=c;
    }
    printf("最大值为：%d\n",max);
    return 0;
}
//if else 按照就近原则去匹配.
