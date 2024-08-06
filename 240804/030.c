#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int count=0,number,a;
    srand(time(0));
    number=rand()%100+1;

    printf("guess  1 to 100.\n");
    do{
        printf("input:");
        scanf("%d",&a);
        if(a>number)printf("猜大了。\n");
        if(a<number)printf("猜小了。\n");
        count++;
    }while(a!=number);
    printf("恭喜你，猜对了,一共猜了%d次!\n",count);
    switch(count){
        case 1:printf("真棒！\n");
        case 2:
        case 3:printf("厉害呀！\n");break;
        default:printf("再接再厉！\n");
    }
    
    return 0;
}
//int a;
// srand(time(0));  
// a=rand();
// printf("%d\n",a%100);
