#include <stdio.h>

int main(){
    int a=0,b=0;
    scanf("%d %da",&a,&b);
    printf("%d %d",a,b);
    return 0;
}
//标识符可以是数字、字母、下划线的组合，不能以数字开头
//f是format的缩写，格式的意思
//scanf中的%d前面的空格可省略，无其他字符时有输入才可输出，输入其他字符后输入失败；
//%d后有空格时，输入分隔符和另一个字符后才可输出
