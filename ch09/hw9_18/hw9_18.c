/* hw9_18 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int idx(int arr[]);

int main(void)
{
	int test[SIZE]={19,11,21,13,12,15};
	int i;
	
	printf("test[]=");
	
	for(i=0;i<SIZE;i++)
		printf(" %d ",test[i]);
	printf("\n\n");
	
	printf("Index of the minimum value in test[] is %d.\n",idx(test));
	
	system("pause");
	return 0;
}

int idx(int arr[])
{
	int i,temp=arr[0],idx=0;
	
	for(i=1;i<SIZE;i++)
		if(temp>arr[i])
		{
			temp=arr[i];
			idx=i;
		}
	
	return idx;
}


/*

test[]= 19  11  21  13  12  15 

Index of the minimum value in test[] is 1.
Press any key to continue . . .

*/
