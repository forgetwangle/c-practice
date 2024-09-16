#include <stdio.h>

// const int red=0;
// const int yellow=1;
// const int green=2;
enum COLOR{RED,YELLOW,GREEN};

int main(int argc,char const*argv[]){
    int color=-1;
    char*colorName=NULL;
    printf("请输入：");
    scanf("%d",&color);
    // switch(color){
    //     case red:colorName="red";break;
    //     case yellow:colorName="yellow";break;
    //     case green:colorName="green";break;
    //     default:colorName="unknownColor";break;
    // }
    switch(color){
        case RED:colorName="red";break;
        case YELLOW:colorName="yellow";break;
        case GREEN:colorName="green";break;
        default:colorName="unknownColor";break;
    }

    printf("你喜欢的颜色是%s\n",colorName);

    return 0;
}


/*

枚举是用户定义的数据类型
enum 枚举类型名字{名字1,...,名字n};
类型是int，值依次从1到n

*/
