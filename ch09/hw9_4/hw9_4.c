/* hw9_4 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(void)
{
	int i;
	int arr[SIZE];
	
	for(i=0;i<SIZE;i++)
	{
		printf("輸入第%d個整數 : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<SIZE;i++)
		printf("arr[%d]=%d\n",i,arr[i]);
	
	system("pause");
	return 0;
}
