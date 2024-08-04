#include <stdio.h>

int main(){
    int sx,n;
    // scanf("%d",&n);
    // sx=n/16*10+n%16;
    // printf("%d",sx);
    scanf("%d",&n);
    printf("%x",n);
    return 0;
}
//输入18，得到12
//十进制：18，二进制：0001 0010，十六进制：0x12, bcd数：0x18
//第九行%x,以十六进制输出n
