#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    score/=10;
    switch(score){
        case 10:
        case 9:printf("A");break;
        case 8:printf("B");break;
        case 7:printf("C");break;
        case 6:printf("D");break;
        default:printf("E");
    }
    return 0;
}
//这段代码去掉break后的输出结果会很乱
//如果在每个输出接口上加上\n就会好很多
//写代码时也要注意最后输出结果的排版
