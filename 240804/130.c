#include "node.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _list{
    Node*head;
    Node*tail;
}List;

void add(List *pList,int number);
void print(List *pList);

int main(int argc,char const *argv[]){
    List list;
    list.head=list.tail=NULL;
    int number;
    do{
        scanf("%d",&number);
        if(number!=-1){
            add(&list,number);
        }
    }while(number!=-1);
    // Node *p;
    // for(p=list.head;p;p=p->next){
    //     printf("%d\t",p->value);
    // }
    // printf("\n");
    print(&list);
    scanf("%d",&number);
    Node*p;
    int isFound=0;
    for(p=list.head;p;p=p->next){
        if(p->value==number){
            printf("找到了\n");
            isFound=1;
            break;
        }
    }
    if(!isFound)printf("没找到\n");
    /*
    q->next=p->next
    否则q=p;p=p->next
    free(p)
    */
    Node*q;
    //指针出现在->（读eiro）的左边，则指针不能为NULL
    for(q=NULL,p=list.head;p;q=p,p=p->next){//链表的删除
        if(p->value==number){
            if(q){
                q->next=p->next;
            }else {
                list.head=p->next;
            }
            free(p);
            break;
        }
    }
    /*
    q=p->next;
    free(p);
    p=q;
    */
    for(p=list.head;p;p=q){//链表的清除
        q=p->next;
        free(p);
    }

    return 0;
}

void add(List *pList,int number){//给链表加一个值
    //add to linked-list
    Node*p=(Node*)malloc(sizeof(Node));
    p->value=number;
    p->next=NULL;
    //find the last
    Node*last=pList->head;
    if(last){
        while(last->next){
            last=last->next;
        }
        //attch
        last->next=p;
    }else pList->head=p;
}

void print(List *pList){//输出链表所有的值
    Node *p;
    for(p=pList->head;p;p=p->next){
        printf("%d\t",p->value);
    }
    printf("\n");
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
