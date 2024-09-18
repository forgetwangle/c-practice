#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct time timeUpdate(struct time now);

int main(int argc,char const*argv[]){
    struct time testTimes[]={
        {11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}
    };
    int i;
    for(i=0;i<5;++i){
        printf("time is %2i-%2i-%2i",
        testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
        testTimes[i]=timeUpdate(testTimes[i]);
        printf("...one second later  is %2i-%2i-%2i\n",
        testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
    }

    return 0;
}

struct time timeUpdate(struct time now){
    ++now.seconds;
    if(now.seconds==60){
        now.seconds=0;
        ++now.minutes;
    }
    if(now.minutes==60){
        now.minutes=0;
        ++now.hour;
    }
    if(now.hour==24){
        now.hour=0;
    }
    return now;
}

/*

结构数组
struct date dates[100];
struct date dates[]={
    {4,5,2005},{2,4,2005}
};

结构中的结构
struct dateAndTime{
    struct date sdate;
    struct time stime;
};

如：
struct point{
    int x;
    int y;
};
struct rectangle{
    struct point pt1;
    struct point pt2;
};
如果有变量struct rectangle r;
就可以有：r.pt1.x,r.pt1.y,r.pt2.x,r.pt2.y;

如果有变量定义
    struct rectangle r,*rp;
    rp=&r;
那么下面四种形式等价
    r.pt1.x;
    rp->pt1.x;
    (r.pt1).x;
    (rp->pt1).x;
但是没有rp->pt1->x;(因为pt1不是指针)

*/
