#include "linkedList.h"
#include <stdio.h>

int main(){
    struct LinkedList* l = linkedListCreate();
    linkedListAddFront(l, (TYPE)1);
    linkedListAddFront(l, (TYPE)2);
    linkedListAddFront(l, (TYPE)3);
    linkedListAddBack(l, (TYPE)3);
    linkedListAddBack(l, (TYPE)4);
    linkedListAddBack(l, (TYPE)5);
    linkedListAddBack(l, (TYPE)6);
    printf("%i\n", linkedListBack(l));
    printf("%i\n", linkedListBack(l));
    linkedListPrint(l);
    linkedListAddBack(l, (TYPE)3);
    linkedListAddFront(l, (TYPE)4);
    linkedListAddFront(l, (TYPE)5);
    linkedListAddBack(l, (TYPE)6);
    linkedListPrint(l);
    printf("%i\n", linkedListFront(l));
    printf("%i\n", linkedListBack(l));
    linkedListRemoveFront(l);
    linkedListRemoveFront(l);
    linkedListRemoveBack(l);
    linkedListRemoveBack(l);
    linkedListPrint(l);
    linkedListRemoveBack(l);
    linkedListPrint(l);
    linkedListDestroy(l);
    
    /* BAG */

    struct LinkedList* k = linkedListCreate();
    linkedListAdd (k, (TYPE)10);
    linkedListAdd (k, (TYPE)11);
    linkedListAdd (k, (TYPE)13);
    linkedListAdd(k, (TYPE)14);
    linkedListPrint(k);
    printf("before remove\n");
    linkedListRemove(k, (TYPE)11);
    linkedListRemove(k, (TYPE)10);
    linkedListRemove(k, (TYPE)13);
    linkedListPrint(k);
    printf("before second remove\n");
    linkedListRemove(k, (TYPE)14);
    linkedListPrint(k);
    linkedListDestroy(k);
    return 0;
}

