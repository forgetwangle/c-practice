#include <stdio.h>

int main(void){
    int i=10;
    int* p=&i;
    *p=29;
    printf("%d\n",i);

    return 0;
}



/*
指针是const:(*在const前面)
    一旦得到某个变量的地址，不能再指向其他变量的地址
    int*const q=&i;//q是const
    *q=26;//OK
    q++;//ERROR
指针所指的是const:(const在*前面)
    表示不能用指针去修改那个变量(并不是说那个变量成为了const)
    const int *p=&i;//也可以写成：int const* p=&i;
    *p=26;//ERROR，(*p)是const
    i=26;//OK
    p=&j;//OK

转换：
总是可以把非const值转换为const值
    void f(const int* x);
    int a=15;
    f(&a);//OK
    const int b=a;
    f(&b);//OK
    b=a+1;//ERROR
当要传递的参数的类型比地址大的时候，这是常用的手段：
既能用比较少的字节数传递值给参数，又能避免函数对外面的变量的修改。

const数组
const int a[]={1,2,3,4,};
数组变量已经是const指针了，再在*前加const表明数组的每个单元都是const int
所以必须通过初始化进行赋值

保护数组值：传入函数时，设数组参数为const
    int sum(const int a[],int length);
*/
