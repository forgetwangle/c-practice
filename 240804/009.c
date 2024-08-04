#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    double c=(a+b)/2.0;
    printf("%d和%d的平均值为%f\n",a,b,c);
    return 0;
}
/*运算符优先级
1   +   单目不变    自右向左    a*+b
1   -   单目取负    自右向左    a*-b
2   *   乘      自左向右        a*b
2   /   除      自左向右        a/b
2   %   取余    自左向右        a%b
3   +   加      自左向右        a+b
3   -   减      自左向右        a-b
4   =   赋值    自右向左        a=b
*/
