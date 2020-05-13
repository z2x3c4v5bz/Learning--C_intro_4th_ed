/* hw14_14 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

int main(void)
{
	NODE *ptra=(NODE *)malloc(sizeof(NODE));
	NODE *ptrb=(NODE *)malloc(sizeof(NODE));
	NODE *ptrc=(NODE *)malloc(sizeof(NODE));
	NODE *ptrd=(NODE *)malloc(sizeof(NODE));
	NODE *current=(NODE *)malloc(sizeof(NODE));
	current=ptra;
	
	ptra->data=12;
	ptra->next=ptrb;
	ptrb->data=38;
	ptrb->next=ptrc;
	ptrc->data=64;
	ptrc->next=ptrd;
	ptrd->data=37;
	ptrd->next=NULL;
	
	printf("Before:\n");
	while(current!=NULL)
	{
		printf("address=%p, ",current);
		printf("data=%d, ",current->data);
		printf("next=%p\n",current->next);
		current=current->next;
	}
	
	ptra->next=ptrd;
	free(ptrb);
	free(ptrc);
	current=ptra;
	
	printf("After:\n");
	while(current!=NULL)
	{
		printf("address=%p, ",current);
		printf("data=%d, ",current->data);
		printf("next=%p\n",current->next);
		current=current->next;
	}
	
	free(ptra);
	free(ptrd);
	free(current);
	
	system("pause");
	return 0;
}


/*

Before:
address=0000000000A11480, data=12, next=0000000000A114A0
address=0000000000A114A0, data=38, next=0000000000A114C0
address=0000000000A114C0, data=64, next=0000000000A114E0
address=0000000000A114E0, data=37, next=0000000000000000
After:
address=0000000000A11480, data=12, next=0000000000A114E0
address=0000000000A114E0, data=37, next=0000000000000000
Press any key to continue . . .

*/
