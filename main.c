#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main() {
    PNode head = NULL;
    
    readFile(&head);
    mergeNodes(head);
    traverseList(head);
    writeFile(head);
    destoryList(&head); 

    return 0;
}