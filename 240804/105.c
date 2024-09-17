#include <stdio.h>

struct point{
    int x;
    int y;
};

void getStruct(struct point);
void output(struct point);

int main(int argc,char const*argv[]){
    struct point y={0,0};
    getStruct(y);//作为参数时函数接收到y作为结构变量的值
    output(y);

    return 0;
}

void getStruct(struct point p){//p是一个和y具有相同值的另一个结构变量
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    printf("%d,%d\n",p.x,p.y);
}

void output(struct point p){
    printf("%d,%d",p.x,p.y);
}
