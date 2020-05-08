/* hw9_2 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int arr[SIZE]={2,3,1,7,9};
	int i;
	
	for(i=0;i<SIZE;i++)
		printf("arr[%d]=%d\n",i,arr[i]);
	
	system("pause");
	return 0;
}
