#include <stdio.h>

int main(){
    int hour,minute;
    int t,p;
    scanf("%d %d",&t,&p);
    hour=t/100,minute=t%100;
    t=hour*60+minute+p;
    hour=t/60,minute=t%60;
    printf("%d",hour*100+minute);
    return 0;
}
//输入1120 110，得到1310
