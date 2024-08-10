#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    a=1.345f;
    b=1.123f;
    c=a+b;
    if(c==2.468)printf("相等\n");
    else printf("不相等,c=%f,或者%.10f\n",c,c);

    if(fabs(c-2.468)<1e-7)printf("相等\n");
    else printf("不相等");

    return 0;
}
/*
c==2.468f,c!=2.468
2.468默认是double

fabs()求绝对值
两个浮点数用等号判断相等可能失败，用绝对值是否足够小来判断

一般使用int ,double，其他用的很少
*/
