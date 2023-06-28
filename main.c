#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main() {
    PNode head = NULL;
    
    readFile(&head);
    mergeNodes(head);
    writeFile(head);
    destroyList(&head);

    return 0;
}