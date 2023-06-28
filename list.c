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

void mergeNodes(PNode head){
    PNode current=head;
    while(current!=NULL){
        PNode runner=current->next;
        PNode prevRunner=current;
        while(runner!=NULL){
            if(strcmp(current->data.name,runner->data.name)==0){
                current->data.totalCount+=runner->data.totalCount;
                prevRunner->next=runner->next;
                PNode temp=runner;
                runner=runner->next;
                destoryNode(temp);
            }else{
                prevRunner=runner;
                runner=runner->next;
            }
        }
        current=current->next;
    }
}

void traverseList(PNode head) {
    PNode current = head;
    while (current != NULL) {
        printf("%s, %d\n", current->data.name, current->data.totalCount);
        current = current->next;
    }
}


void destoryList(PNode* head){
    PNode current=*head;
    while(current!=NULL){
        PNode temp=current;
        current=current->next;
        destoryNode(temp);
    }
    *head=NULL;
}