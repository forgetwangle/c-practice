#include <stdio.h>

int main(void){
    // char ac[]={0,1,2,3,4,5,6,7,8,9,};
    char ac[]={0,1,2,3,4,5,6,7,8,9,-1};
    char *p=&ac[0];
    int i ;
    for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++){
        printf("%d\n",ac[i]);
    }
    
    // for(p=ac;*p!=-1;){
    //     printf("%d\n",*p++);
    // }
    while(*p!=-1){
        printf("%d\n",*p++);
    }

    return 0;
}



/*

*p++   ++运算优先级比*要高，因此不需要加括号。
取出p所指的那个数据来，完事顺便把p移到下一个位置去。

0地址，内存中存在0地址，但0地址不能随便碰
因此0地址可以用来表示特殊情况，如返回的指针无效，指针没有被真正初始化(先初始化为0)
NULL是一个预定定义的符号，表示0地址，因为有的编译器不愿意你用0来表示0地址。

无论指向什么类型，指针的大小都是一样的，因为都是地址。
但是指向不同类型的指针是不能直接相互赋值的，这是为了避免用错指针。

指针的类型转换
void*表示不知道指向什么东西的指针
    计算时与char*相同但不相通
指针也可以转换类型
    int *p=&i;void *q=(void*)p
这并没有改变p所指的变量的类型；而是通过q看i时，i是void，通过p看i时，i还是int。

*/
