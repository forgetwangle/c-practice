#include <stdio.h>

int main(){
    int n,ma,cnt=0,guess,finish=0;
    scanf("%d %d",&n,&ma);
    do{
        scanf("%d",&guess);
        cnt++;
        if(guess<0){
            printf("game over\n");
            // break;
            finish=1;
        }
        if(guess>n)printf("too big\n");
        else if(guess<n)printf("too small\n");
        else {
            if(cnt==1)printf("bingo\n");
            else if(cnt<=3)printf("lucky\n");
            else printf("good guess\n");
            // break;
            finish=1;
        }
        if(cnt==ma){
            if(!finish){
                printf("game over");
                finish=1;
            }
        }
    }while(!finish);
    // }while(cnt<=ma);
    // if(cnt>ma)printf("game over\n");

    return 0;
}
//
