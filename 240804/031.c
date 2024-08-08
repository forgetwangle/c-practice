#include <stdio.h>

int main(){
    // int t=1,n,sum=0,count=0;
    // while(t){
    //     printf("输入：");
    //     scanf("%d",&n);
    //     if(n!=-1){
    //         sum+=n;
    //         count++;
    //     }else t=0;
    // }        每次循环都要判断两次
    // int n,sum=0,count=0;
    // do{
    //     printf("输入:");
    //     scanf("%d",&n);
    //     if(n!=-1){
    //         sum+=n;
    //         count++;
    //     }
    // }while(n!=-1);       每次要判断两次n!=-1
    int n,sum=0,count=0;
    printf("输入吧：");
    scanf("%d",&n);
    while(n!=-1){
        sum+=n;
        count++;
        scanf("%d",&n);
    }
    if(count==0)printf("没有输出结果！");
    else printf("输入了%d个数,和为%d,平均数为%f\n",count,sum,1.0*sum/count);
    //输入1，2，1，1，结果为1.25
    //printf("输入了%d个数,和为%d,平均数为%f\n",count,sum,sum/count*1.0);
    //输入1，2，1，1，结果为1.
    
    return 0;
}
