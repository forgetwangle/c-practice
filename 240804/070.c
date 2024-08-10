#include <stdio.h>

int main(){
    // int number[100];
    // int i=-1,sum=0,cnt=0;
    // do{
    //     i++;
    //     scanf("%d",&number[i]);
    //     sum+=number[i];
    //     cnt++;        
    // }while(number[i]!=-1);
    // sum++;
    // cnt--;
    // printf("%d %d %f\n",cnt,sum,1.0*sum/cnt);
    int sum=0,x,cnt=0;
    int number[100];
    scanf("%d",&x);
    while(x!=-1){
        number[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    printf("%d %d %f\n",cnt,sum,1.0*sum/cnt);
    int i;
    for(i=0;i<cnt;i++){
        if(number[i]>1.0*sum/cnt)printf("%d ",number[i]);
    }

    return 0;
}
