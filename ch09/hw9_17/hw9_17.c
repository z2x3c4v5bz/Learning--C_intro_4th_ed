/* hw9_17 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int min(int arr[]);

int main(void)
{
	int test[SIZE]={19,11,21,13,12,15};
	int i;
	
	printf("test[]=");
	
	for(i=0;i<SIZE;i++)
		printf(" %d ",test[i]);
	printf("\n\n");
	
	printf("The minimum value in test[] is %d.\n",min(test));
	
	system("pause");
	return 0;
}

int min(int arr[])
{
	int i,min=arr[0];
	
	for(i=1;i<SIZE;i++)
		if(min>arr[i])
			min=arr[i];
	
	return min;	
}
