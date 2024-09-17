#include <stdio.h>

enum COLOR{RED,YELLOW,GREEN,NumCOLORS};

int main(int argc,char const*argv[]){
    int color=-1;
    char *ColorNames[NumCOLORS]={"red","yellow","green"};
    char *colorName=NULL;
    scanf("%d",&color);
    if(color>=0&&color<NumCOLORS)colorName=ColorNames[color];
    else colorName="unknown";
    printf("选择的颜色是%s\n",colorName);

    return 0;
}

/*

套路：自动计数的枚举
这样需要遍历所有的枚举量或者需要建立一个用枚举量做下标的数组时就很方便了

*/
