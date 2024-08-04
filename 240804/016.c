#include <stdio.h>

int main(){
    int minute1,minute2,hour1,hour2;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int ih=hour2-hour1;
    int im=minute2-minute1;
    if(im<0){
        im+=60;
        ih--;
    }
    printf("时间差为%d小时%d分钟",ih,im);
    return 0;
}
//
