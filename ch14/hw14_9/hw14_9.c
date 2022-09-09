/* hw14_9 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

int main(void){
    
    NODE a, b, c, d;
    NODE *ptr = &a;
    
    a.data = 12;
    a.next = &b;
    b.data = 38;
    b.next = &c;
    c.data = 64;
    c.next = &d;
    d.data = 37;
    d.next = NULL;
    
    while(ptr != NULL)
    {
        printf("address = %p, ", ptr);
        printf("data = %d, ", ptr->data);
        printf("next = %p\n", ptr->next);
        ptr = ptr->next;
    }
    
    system("pause");
    return 0;

}


/* Output

address = 000000000061FDC0, data = 12, next = 000000000061FDD0
address = 000000000061FDD0, data = 38, next = 000000000061FDE0
address = 000000000061FDE0, data = 64, next = 000000000061FDF0
address = 000000000061FDF0, data = 37, next = 0000000000000000
Press any key to continue . . .

*/
