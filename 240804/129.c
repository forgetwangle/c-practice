#include "node.h"
#include <stdio.h>
#include <stdlib.h>

//将一部分代码转成函数后无法传回head值，有四种解决方法
//Node*head;第一种
// Node* add(Node *head,int number);//第二种
void add(Node **pHead,int number);//第三种

// typedef struct _list{
//     Node*head;
//     Node*tail;
// }List;//第四种

int main(int argc,char const *argv[]){
    Node*head=NULL;
    //List list;list.head=list.tail=NULL;
    int number;
    do{
        scanf("%d",&number);
        if(number!=-1){
            // head=add(head,number);//第二种
            add(head,number);
            // add(&list,number);
        }
    }while(number!=-1);

    return 0;
}

//Node* add(Node *head,int number){//第二种
void add(Node **pHead,int number){//第三种
// void add(List *pList,int number){第四种
    //add to linked-list
    Node*p=(Node*)malloc(sizeof(Node));
    p->value=number;
    p->next=NULL;
    //find the last
    Node*last=*pHead;
    //Node*last=pList->head 第四种
    if(last){
        while(last->next){
            last=last->next;
        }
        //attch
        last->next=p;
    }else *pHead=p;
    //}else pList->head=p;第四种
    // return head;第二种
}
/*
node.h文件
#ifndef _NODE_H_
#define _NODE_H_
typedef struct _node{
    int value;
    struct _node *next;
}Node;
#endif
*/

/*

链表

*/
