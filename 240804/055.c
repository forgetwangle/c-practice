#include <stdio.h>

int main(){
    printf("%f\n",12.0/0.0);//inf
    printf("%f\n",-12.0/0.0);//-inf
    printf("%f\n",0.0/0.0);//nan

    return 0;
}
/*
无穷大和不存在定义在浮点数类型中
*/
