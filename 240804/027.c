#include <stdio.h>

int main(){
    int n=11;
    printf("%d\n%d\n%d\n%d",n++,++n,n++,n);
    return 0;
}
//输出结果为13，14，11，14
//++n的逻辑和n一样，所有计算结束后再输出结果
//n++的逻辑和n不一样，从右向左依次计算后输出结果
