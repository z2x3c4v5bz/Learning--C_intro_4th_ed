/* hw14_21 */
#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

int listLength(NODE *first);

int main(void)
{
	NODE *first;
	int arr[]={12,43,56,34,98};
	int len;
	
	first=createList(arr,5);
	printf("arr=");
	printList(first);
	printf("Length=");
	len=listLength(first);
	printf("%d\n",len);
	freeList(first);
	
	system("pause");
	return 0;
}

int listLength(NODE *first)
{
	int count=0;
	NODE *current;
	current=first;
	
	while(current!=NULL)
	{
		current=current->next;
		count+=1;
	}
	
	return count;
}


/*

arr= 12 43 56 34 98
Length=5
Press any key to continue . . .

*/
