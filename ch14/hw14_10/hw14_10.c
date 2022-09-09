/* hw14_10 */
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
    NODE nowone;
    NODE *ptr = &a;

    a.data = 12;
    a.next = &b;
    b.data = 38;
    b.next = &c;
    c.data = 64;
    c.next = &d;
    d.data = 37;
    d.next = NULL;

    nowone.data = 92;

    printf("Before:\n");
    while(ptr != NULL)
    {
        printf("address = %p, ", ptr);
        printf("data = %d, ", ptr->data);
        printf("next = %p\n", ptr->next);
        ptr = ptr->next;
    }

    ptr = &a;
    b.next = &nowone;
    nowone.next = &c;

    printf("After:\n");
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

Before:
address = 000000000061FDD8, data = 12, next = 000000000061FDE8
address = 000000000061FDE8, data = 38, next = 000000000061FDA8
address = 000000000061FDA8, data = 64, next = 000000000061FDB8
address = 000000000061FDB8, data = 37, next = 0000000000000000
After:
address = 000000000061FDD8, data = 12, next = 000000000061FDE8
address = 000000000061FDE8, data = 38, next = 000000000061FDC8
address = 000000000061FDC8, data = 92, next = 000000000061FDA8
address = 000000000061FDA8, data = 64, next = 000000000061FDB8
address = 000000000061FDB8, data = 37, next = 0000000000000000
Press any key to continue . . . 

*/
