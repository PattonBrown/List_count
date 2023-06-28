#include <stdio.h>
#include <stdlib.h>
#include "head.h"

void writeFile(PNode head){
    FILE* file=fopen("result.txt","w");
    if(file==NULL){
        printf("Failed to open file.\n");
        return;
    }
    PNode current =head;
    while(current!=NULL){
        fprintf(file,"%s,%d\n",current->data.name,current->data.totalCount);
        current=current->next;
    }
    fclose(file);
}