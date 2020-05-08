/* hw9_1 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int arr[SIZE];
	int i;
	
	for(i=0;i<SIZE;i++)
		arr[i]=i+1;
	
	for(i=0;i<SIZE;i++)
		printf("arr[%d]=%d\n",i,arr[i]);
	
	system("pause");
	return 0;
}
