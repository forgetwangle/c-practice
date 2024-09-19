#include <stdio.h>
#include "student.h"
#include <stdlib.h>

void read(FILE* fp,int index);

int main(int argc,char const *argv[]){
    FILE* fp=fopen("student.data","r");
    if(fp){
        fseek(fp,0L,SEEK_END);//将位置移动到文件尾
        long size=ftell(fp);//得到文件大小
        int number=size/sizeof(Student);
        int index=0;
        printf("有%d个数据,你要看第几个:",number);
        scanf("%d",&index);
        read(fp,index-1);
        fclose(fp);
    }

    return 0;
}

void read(FILE*fp,int index){
    fseek(fp,index*sizeof(Student),SEEK_SET);
    Student stu;
    if( fread(&stu,sizeof(Student),1,fp)==1){
        printf("第%d个学生:",index+1);
        printf("\t姓名:%s\n",stu.name);
        printf("\t性别:");
        switch(stu.gender){
            case 0:printf("男\n");break;
            case 1:printf("女\n");break;
            case 2:printf("其他\n");break;
        }
        printf("\t年龄:%d\n",stu.age);
    }
}

/*

文件中定位
long ftell(FILE*stream);//得到现在所处的位置
int fseek(FILE*stream,long offset,int whence);//移动光标位置
    SEEK_SET:从头开始
    SEEK_CUR:从当前位置开始
    SEEK_END:从尾开始(倒过来)

*/
