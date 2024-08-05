#include <stdio.h>

int main(){
    const int PASS=60;
    int score;
    printf("请输入成绩：");
    scanf("%d",&score);
    printf("你的成绩是%d\n",score);
    if(score<PASS)printf("很遗憾，没及格。");
    else printf("祝贺你，及格了！");
    printf("\n再见!");
    return 0;
}
