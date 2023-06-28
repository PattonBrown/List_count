#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"head.h"

void readFile(PNode* head){
    FILE* file=fopen("user_login.txt","r");
    if(file==NULL){
        printf("Failed to open file.\n");
        return;
    }

    char line[100];
    while(fgets(line,sizeof(line),file)){
        char *username=strtok(line,",");
        if(username !=NULL){
            int len=strlen(username);
            if(len>0&&username[len-1]=="\n"){
                username[len-1]='\0';
            }

            PNode newNode =craeteNode(username,1);
            appendNode(head,newNode);
        }
    }
    fclose(file);

}