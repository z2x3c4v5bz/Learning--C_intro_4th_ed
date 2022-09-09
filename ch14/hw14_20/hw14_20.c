/* hw14_20 */
#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

NODE *insertFirstNode(NODE *first, int item);

int main(void){

    int arr[] = {12, 43, 56, 34};
    NODE *first;
    
    first = createList(arr, 4);

    printf("Before:\n");
    printList(first);
    first = insertFirstNode(first, 53);

    printf("After:\n");
    printList(first);
    freeList(first);
    
    system("pause");
    return 0;

}

NODE *insertFirstNode(NODE *first, int item){

    NODE *newnode;

    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = item;
    newnode->next = first;
    
    return newnode;

}


/* Output

Before:
 12 43 56 34
After:
 53 12 43 56 34
Press any key to continue . . .

*/
