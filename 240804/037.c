#include <stdio.h>

int main(){
    int x=2,t,f,o,exit=0;
    for(f=0;f<=x*10/5;f++){
        for(t=0;t<=x*10/2;t++){
            for(o=0;o<=x*10;o++){
                if(5*f+2*t+o==x*10){
                    printf("%d张5角,%d张2角,%d张1角\n",f,t,o);
                    exit=1;
                    goto out;//跳出
                    //break;
                }
            }
            //if(exit)break;
        }
        //if(exit)break;
    }
out://跳出位置
    return 0;
}
//break只能跳出其所在的循环，goto适用于跳出多重循环。
//goto 标识;
//标识:
