#ifndef HEAD_H
#define HEAD_H

#define LENGTH 30

typedef struct User_login{
    char name[LENGTH];
    int totalCount;
}SDataType;

typedef struct SListNode{
    SDataType data;
    struct SListNode* next;
}Node,*PNode;

PNode craeteNode(char* name,int totalCount);
void destoryNode(PNode node);
void appendNode(PNode* head,PNode newNode);
void mergeNodes(PNode head);
void destoryList(PNode* head);

#endif