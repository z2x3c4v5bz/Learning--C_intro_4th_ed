/* hw14_1 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ptr=(int *)malloc(sizeof(int));
	*ptr=12;
	
	printf("%d^2=%d\n",*ptr,*ptr**ptr);
	
	free(ptr);
	
	system("pause");
	return 0;
} 
