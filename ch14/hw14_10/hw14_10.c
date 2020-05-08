/* hw14_10 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

void insertElement(int item,int pos,NODE *first);

int main(void)
{
	NODE a,b,c,d;
	NODE *ptr=&a;
	
	a.data=12;
	a.next=&b;
	b.data=38;
	b.next=&c;
	c.data=64;
	c.next=&d;
	d.data=37;
	d.next=NULL;
	
	printf("Before:\n");
	while(ptr!=NULL)
	{
		printf("address=%p, ",ptr);
		printf("data=%d, ",ptr->data);
		printf("next=%p\n",ptr->next);
		ptr=ptr->next;
	}
	
	ptr=&a;
	insertElement(92,2,&a);
	
	printf("After:\n");
	while(ptr!=NULL)
	{
		printf("address=%p, ",ptr);
		printf("data=%d, ",ptr->data);
		printf("next=%p\n",ptr->next);
		ptr=ptr->next;
	}
	
	system("pause");
	return 0;
}

void insertElement(int item,int pos,NODE *current)
{
	int i;
	NODE *insertPtr;
	insertPtr->data=item;
	
	for(i=1;i<pos;i++)
		current=current->next;
	
	insertPtr->next=current->next;
	current->next=insertPtr;
}
