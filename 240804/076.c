#include <stdio.h>

int che(int numOfO,int numOfX);

int main(void){
    const int size=3;
    int board[3][3];
    int numOfX,numOfO;
    int i,j;
    int result=-1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&board[i][j]);
        }
    }
    for(i=0;i<3&&result!=-1;i++){
        numOfO=0;numOfX=1;
        for(j=0;j<3;j++){
            numOfO+=board[i][j];
            numOfX*=board[i][j];
        }
        result=che(numOfO,numOfX);
    }
    for(i=0;i<3&&result!=-1;i++){
        numOfO=0;numOfX=1;
        for(j=0;j<3;j++){
            numOfO+=board[j][i];
            numOfX*=board[j][i];
        }
        result=che(numOfO,numOfX);
    }
    if(result==-1){
        numOfO=0;numOfX=1;
        numOfO=board[0][0]+board[1][1]+board[2][2];
        numOfX=board[0][0]*board[1][1]*board[2][2];
        result=che(numOfO,numOfX);
    }
    if(result==-1){
        numOfO=0;numOfX=1;
        numOfO=board[2][0]+board[1][1]+board[0][2];
        numOfX=board[2][0]*board[1][1]*board[0][2];
        result=che(numOfO,numOfX);
    }

    if(result==0)printf("O赢");
    else if(result==1)printf("X赢");
    else printf("没人赢");

    return 0;
}

int che(int numOfO,int numOfX){
    int result=-1;
    if(numOfO==0)result=0;
    if(numOfX==1)result=1;
    return result;
}

/*
数组可以是二维、三维、一万维的。
二维数组，int a[3][5],通常理解为构造一个3行5列的数列

a[3][5]表示3行5列上的单元
a[3,5]是错误的，[]中间是一个逗号表达式，结果是a[5]

int a[][5]={
{0,1,2,3,4},
{2,3,4,5,6},
}
列数必须给出，行数可以由编译器来数
每行一个{}，逗号分隔
最后的逗号可以存在
如果省略，表示补0
里面的大括号可以省略
*/
