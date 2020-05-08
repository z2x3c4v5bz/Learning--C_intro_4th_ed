/* hw14_13 */
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
	NODE *ptr=(NODE *)malloc(4*sizeof(NODE));
	NODE *newnode=(NODE *)malloc(sizeof(NODE));
	NODE *current=(NODE *)malloc(sizeof(NODE));
	current=ptr;
	
	ptr->data=12;
	ptr->next=(ptr+1);
	(ptr+1)->data=38;
	(ptr+1)->next=(ptr+2);
	(ptr+2)->data=64;
	(ptr+2)->next=(ptr+3);
	(ptr+3)->data=37;
	(ptr+3)->next=NULL;
	
	printf("Before:\n");
	while(current!=NULL)
	{
		printf("address=%p, ",current);
		printf("data=%d, ",current->data);
		printf("next=%p\n",current->next);
		current=current->next;
	}
	
	newnode->data=47;
	(ptr+2)->next=newnode;
	newnode->next=(ptr+3);
	current=ptr;
	
	printf("After:\n");
	while(current!=NULL)
	{
		printf("address=%p, ",current);
		printf("data=%d, ",current->data);
		printf("next=%p\n",current->next);
		current=current->next;
	}
	
	free(ptr);
	free(newnode);
	free(current);
	
	system("pause");
	return 0;
}
