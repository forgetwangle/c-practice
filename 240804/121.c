#include <stdio.h>
#include "student.h"
#include <stdlib.h>

void getList(Student aStu[],int number);
int save(Student aStu[],int number);

int main(int argc,char const *argv[]){
    int number =0;
    printf("输入学生数量：");
    scanf("%d",&number);
    // Student aStu[number];
    Student* aStu=(Student*)malloc(sizeof(Student)*number);

    getList(aStu,number);
    if(save(aStu,number)){
        printf("保存成功");
    }else{
        printf("保存失败");
    }

    free(aStu);
    return 0;
}

void getList(Student aStu[],int number){
    char format[20];
    sprintf(format,"%%%ds",STR_LEN-1);
    //sprintf向一个字符串输出
    //%19s

    int i;
    for(i=0;i<number;i++){
        printf("第%d个学生:\n",i);
        printf("\t姓名:");
        scanf(format,aStu[i].name);
        //等价于scanf("%19s",aStu[i].name);
        printf("\t性别:");
        scanf("%d",&aStu[i].gender);
        printf("\t年龄:");
        scanf("%d",&aStu[i].age);
    }
}

int save(Student aStu[],int number){
    int ret=-1;
    FILE*fp=fopen("student.data","w");
    if (fp){
        ret=fwrite(aStu,sizeof(Student),number,fp);
        fclose(fp);
    }
    return ret==number;
}

/*
student.h文件
#ifndef _STUDENT_H_
#define _STUDENT_H_
const int STR_LEN=20;
typedef struct _student{
    char name[20];
    int gender;
    int age;
}Student;
#endif
*/

/*

二进制文件
所有文件最终都是二进制
文本文件无非是最简单的方式可以读写的文件
    more、tail
    cat
    vi
而二进制文件是需要专门的程序来读写的文件
文本文件的输入输出是格式化，可能经过转码

程序为什么要文件
配置    Unix用文本 Windows用注册表
数据    稍微有点量的数据都放数据库了
媒体    二进制

二进制度读写
size_t fread(void*restrict ptr,size_t size,
    size_t nitems,file*restrict stream)
size_t fwrite(const void*restrict ptr,size_t size,
    size_t nitems,file*restrict stream)
注意FILE*是最后一个参数
返回的是成功读写的字节数
第一个参数是要读写的那块内存，
第二个参数是内存多大
第三个参数是有几块这样的内存
第四个参数是文件指针

为什么nitem
二进制文件的读写一般都是通过对一个结构变量的操作来进行的
nitem就是用来说明这次读写几个结构变量

文件中定位
long ftell(FILE*stream);
int fseek(FILE*stream,long offset,int whence);
    SEEK_SET:从头开始
    SEEK_CUR:从当前位置开始
    SEEK_END:从尾开始(倒过来)

*/

/*
代码：Student aStu【number】;
这里dev-c不会报错，但使用vs的同学可能报错。原因是dev-c使用gcc编辑器，允许变量作为长度来定义数组，但vs不允许这类情况，可能弹出报错信息，如“表达式必须含有常量值”等。

解决方法（用老师教过的malloc动态内存分配）：
1.在include<stdio.h>下方添加一行：include<stdlib.h>//引入所需库
2.把老师的原代码更改为：Student* aStu = (Student*)malloc(sizeof(Student) * number);//注意定义aStu和申请内存时都要声明为Student类型
3.在return 0代码上方添加一行：free(aStu);//归还内存，这一步不要忘

再运行就不会报错了
*/
