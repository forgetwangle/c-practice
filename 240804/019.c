#include <stdio.h>

int main(){
    const int MINOR=35;
    int age=0;
    printf("请输入你的年龄：");
    scanf("%d",&age);
    printf("你的年龄是%d",age);
    if(age<MINOR){
        printf("\n年轻是美好的！\n");
    }
    printf("你的经历决定了你的精神世界。\n");
    return 0;
}
