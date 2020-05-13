/* hw14_15 */
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
	int i,num;
	NODE *first,*current,*previous;
	printf("Number of nodes: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		current=(NODE *)malloc(sizeof(NODE));
		printf("Data for node %d: ",i+1);
		scanf("%d",&(current->data));
		if(i==0)
			first=current;
		else
			previous->next=current;
		current->next=NULL;
		previous=current;
	}
	current=first;
	while(current!=NULL)
	{
		printf("address=%p, ",current);
		printf("data=%d, ",current->data);
		printf("next=%p\n",current->next);
		current=current->next;
	}
	current=first;
	while(first!=NULL)
	{
		first=first->next;
		free(current);
		current=first;
	}
	system("pause");
	return 0;
}


/*

Number of nodes: 3
Data for node 1: 25
Data for node 2: 35
Data for node 3: 45
address=0000000000711480, data=25, next=00000000007114A0
address=00000000007114A0, data=35, next=00000000007114C0
address=00000000007114C0, data=45, next=0000000000000000
Press any key to continue . . .

*/
