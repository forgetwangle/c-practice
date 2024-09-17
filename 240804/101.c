#include <stdio.h>

enum COLOR{RED=1,YELLOW,GREEN=5,NumCOLORS};//声明枚举量时可以指定值

int main(int argc,char const*argv[]){
    printf("code for green is %d\n",GREEN);
    printf("code for yellow is %d\n",YELLOW);
    printf("code for numcolors is %d\n",NumCOLORS);

    enum COLOR color=0;
    //枚举只是int，即使给枚举类型赋不存在的整数值也没有任何warning或error
    printf("and color is %d\n",color);

    return 0;
}
