/* hw14_22 */
#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

void combineList(NODE *first1,NODE *first2);

int main(void)
{
	NODE *first1,*first2;
	int arr1[]={12,43,56,34,98};
	int arr2[]={36,77,99};
	
	first1=createList(arr1,5);
	first2=createList(arr2,3);
	
	printf("Before:\narr1=");
	printList(first1);
	printf("arr2=");
	printList(first2);
	combineList(first1,first2);
	printf("After:\n");
	printList(first1);
	freeList(first1);
	
	system("pause");
	return 0;
}

void combineList(NODE *first1,NODE *first2)
{
	NODE *link;
	link=first1;
	
	while(link->next!=NULL)
		link=link->next;
	
	link->next=first2;
}
