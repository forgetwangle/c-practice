#include <stdio.h>

struct point{
    int x;
    int y;
};

//struct point getStruct(void);
struct point* inputPoint(struct point *);
void output(struct point);
void print(const struct point*p);

int main(int argc,char const*argv[]){
    struct point y={0,0};
    // y=getStruct();
    inputPoint(&y);
    output(y);
    output(*inputPoint(&y));
    print(inputPoint(&y));

    inputPoint(&y)->x=0;
    output(y);
    *inputPoint(&y)=(struct point){.y=1};
    output(y);

    return 0;
}

// struct point getStruct(void){
//     struct point p;
//     scanf("%d",&p.x);
//     scanf("%d",&p.y);
//     printf("%d,%d\n",p.x,p.y);
//     return p;
// }
struct point *inputPoint(struct point *p){
    scanf("%d",&(p->x));
    scanf("%d",&(p->y));
    printf("%d %d\n",p->x,p->y);
    return p;
}

void output(struct point p){
    printf("%d,%d\n",p.x,p.y);
}

void print(const struct point *p){
    printf("%d,%d\n",p->x,p->y);
}

/*

相比在函数参数传入一个结构类型，结构指针作为参数更高效
struct date {
    int month;
    int day;
    int year;
}myday;
struct date* p=&myday;
(*p).month=12;.运算符的优先级比*运算符要高
p->month=12;用->表示指针所指的变量中的成员，和上一条功能一样但按键更简单

*/
