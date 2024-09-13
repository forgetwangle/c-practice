#include <stdio.h>

int main(void){
    char ac[]={0,1,2,3,4,5,6,7,8,9,};
    char *p=ac;
    char *p1=&ac[5];
    printf("p=%p\n",p);
    printf("p+1=%p\n",p+1);
    //printf("*(p+1)=%d\n",*(p+1));
    printf("p1-p=%d\n",p1-p);
    //*(p+n)<->ac[n]

    int ai[]={0,1,2,3,4,5,6,7,8,9,};
    int *q=ai;
    int *q1=&ai[6];
    printf("q=%p\n",q);
    printf("q+1=%p\n",q+1);//结果加数组中的一个数据类型的大小。
    //printf("*(q+1)=%d\n",*(q+1));
    printf("q1-q=%d\n",q1-q);

    //sizeof(char)=1,sizeof(int)=4

    return 0;
}



/*
一般命名，j,k,l,m,n,p,q,r,s,t

*p++   ++运算优先级比*要高，因此不需要加括号。
取出p所指的那个数据来，完事顺便把p移到下一个位置去。

*/
