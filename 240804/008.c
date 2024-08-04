#include <stdio.h>

int main(){
    int hour1,minute1;
    int hour2,minute2;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int t1=minute1+hour1*60;
    int t2=minute2+hour2*60;
    int t=t2-t1;
    printf("时间差为%d时%d分",t/60,t%60);
    return 0;
}
//operator运算符，operand算子
