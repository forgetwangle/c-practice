#include <stdio.h>

int main(){
    printf("123\bA\n456\n");
    printf("123\t456\n12\t456\n");

    return 0;
}
/*
逃逸字符，用来表达无法印出来的控制字符和特殊字符
由\开头，
\b回退一格\t到下一个表格位
\"双引号\'单引号\n换行\\反斜杠\r回车
*/
