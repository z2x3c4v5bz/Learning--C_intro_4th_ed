/* hw14_19 */
#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"
int main(void)
{
	int arr[]={12,43,56,34,98,76,43,24};
	NODE *first,*pos;
	
	first=createList(arr,8);
	printf("Before:\n");
	printList(first);
	pos=searchNode(first,12);
	first=deleteNode(first,pos);
	pos=searchNode(first,34);
	first=deleteNode(first,pos);
	pos=searchNode(first,24);
	first=deleteNode(first,pos);
	printf("After:\n");
	printList(first);
	freeList(first);
	
	system("pause");
	return 0;
}
