/* hw14_12 */
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

int main(void){
    
    NODE *ptr = (NODE *)malloc(4 * sizeof(NODE));
    NODE *current = (NODE *)malloc(sizeof(NODE));
    current = ptr;
    
    ptr->data = 12;
    ptr->next = (ptr + 1);
    (ptr + 1)->data = 38;
    (ptr + 1)->next = (ptr + 2);
    (ptr + 2)->data = 64;
    (ptr + 2)->next = (ptr + 3);
    (ptr + 3)->data = 37;
    (ptr + 3)->next = NULL;
    
    while(current != NULL)
    {
        printf("address = %p, ", current);
        printf("data = %d, ", current->data);
        printf("next = %p\n", current->next);
        current = current->next;
    }
    
    free(ptr);
    free(current);
    
    system("pause");
    return 0;

}


/* Output

address = 0000000000A21480, data = 12, next = 0000000000A21490
address = 0000000000A21490, data = 38, next = 0000000000A214A0
address = 0000000000A214A0, data = 64, next = 0000000000A214B0
address = 0000000000A214B0, data = 37, next = 0000000000000000
Press any key to continue . . .

*/
