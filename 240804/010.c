#include <stdio.h>

int main(){
    int a=5,b=6;
    int t;
    t=a;
    a=b;
    b=t;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
//调试，添加断点，单步调试  
