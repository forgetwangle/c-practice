#include <stdio.h>

int main(){
    const double RATE=8.25;
    const int STANDARD=40;
    double pay =0.0;int hour=0;
    printf("请输入工作时长:");
    scanf("%d",&hour);
    if(hour>STANDARD)
        pay=STANDARD*RATE+(hour-STANDARD)*RATE*1.5;
    else pay=hour*RATE;
    printf("应付工资：%f\n",pay);
    return 0;
}
