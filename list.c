#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"head.h"

PNode craeteNode(char* name,int totalCount){
    PNode newNode=(PNode)malloc(sizeof(Node));
    if(newNode!=NULL){
        strcpy(newNode->data.name,name);
        newNode->data.totalCount=totalCount;
        newNode->next=NULL;

    }
    return newNode;
}

void destoryNode(PNode node){
    free(node);
}

void appendNode(PNode* head,PNode newNode){
    if(*head==NULL){
        *head=newNode;
    }
    else{
        PNode current=*head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newNode;
    }
}

