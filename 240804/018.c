#include <stdio.h>

int main(){
    int bill,price;//初始化
    scanf("%d %d",&price,&bill);//读入金额和票面
    //计算找零
    if(bill>=price){
        printf("应该找您%d元!\n",bill-price);
    }
    else{printf("金额不足.");
    }
    return 0;
}
//
/**/
