#include <stdio.h>

int main(){
    int cm;
    scanf("%d",&cm);
    int foot=cm/30.48;
    int inch=(cm/30.48-foot)*12;
    printf("%d %d",foot,inch);
    return 0;
}
//输入170，得到5 6
