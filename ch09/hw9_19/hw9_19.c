/* hw9_19 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void square(int arr[]);

int main(void)
{
	int test[SIZE]={2,-4,6,-8,10,-12};
	int i;
	
	printf("Before call the function \"square\", the value in test[] as following:\n");
	for(i=0;i<SIZE;i++)
		printf("%3d ",test[i]);
	printf("\n\n");
	
	square(test);
	
	printf("After called the function \"square\", the value in test[] as following:\n");
	for(i=0;i<SIZE;i++)
		printf("%3d ",test[i]);
	printf("\n");
	
	system("pause");
	return 0;
}

void square(int arr[])
{
	int i;
	
	for(i=0;i<SIZE;i++)
		arr[i]*=arr[i];
}
