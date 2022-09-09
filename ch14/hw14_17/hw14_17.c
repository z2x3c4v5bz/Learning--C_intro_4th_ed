/* hw14_17 */
#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

int main(void){
    
    int arr[] = {12, 43, 56, 34, 98, 76, 43, 24};
    NODE *first;
    
    first = createList(arr, 8);
    printList(first);
    freeList(first);
    
    system("pause");
    return 0;

}


/* Output

 12 43 56 34 98 76 43 24
Press any key to continue . . .

*/
