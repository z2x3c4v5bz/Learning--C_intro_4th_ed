/* hw14_18 */
#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

int main(void){

    int arr[] = {12, 43, 56, 34, 98, 76, 43, 24};
    NODE *first, *pos;
    
    first = createList(arr, 8);

    printf("Before:\n");
    printList(first);
    pos = searchNode(first, 56);
    insertNode(pos, 88);

    printf("After:\n");
    printList(first);
    freeList(first);
    
    system("pause");
    return 0;

}


/* Output

Before:
 12 43 56 34 98 76 43 24
After:
 12 43 56 88 34 98 76 43 24
Press any key to continue . . .

*/
