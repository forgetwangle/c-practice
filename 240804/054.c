#include <stdio.h>

int main(){
    double ff=1E-10;
    printf("%E %.16f\n",ff,ff);
    printf("%.3f\n",0.0049);//3位小数
    printf("%.30f\n",0.0049);//30位小数
    printf("%.3f\n",0.00049);//四舍五入

    return 0;
}
/*
float有效数字7位，+-(1.20*10^-38~3.40*10^38),0,+-inf,nan
double有效数字15位，+-(2.20*10^-308~1.79*10^308),0,+-inf,nan
float输入%f,输出%f,%e,(%e是科学计数法)1.0000e-010
double输入%lf,输出%f,%e

%e和%E的区别是输出结果中的e换成大写，如-5.67E-16

%.3f,%.16f
inf表示无穷大,nan表示不存在
*/
