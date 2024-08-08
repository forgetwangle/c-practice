#include <stdio.h>

int main(){
    printf("请输入英尺与英寸，如输入\"5 7\"表示5英尺7英寸");
    int foot,inch;
    scanf("%d %d",&foot,&inch);
    printf("身高是%f\n",((foot+inch/12.0)*0.3048));
    return 0;
}
//两个int数做运算时，最后结果是int，其中一个改为double，结果变为double
//10/3结果是3，10.0/3结果是3.3333
//scanf("%lf
