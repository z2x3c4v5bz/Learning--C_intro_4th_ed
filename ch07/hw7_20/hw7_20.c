/* hw7_20 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=0,i=0,j=0;
	
	do
	{
		do
		{
			printf("輸入一個介在1~50間的整數: ");
			scanf("%d",&n);
		}
		while(n<1||n>50);
		
		j=0;
		do
		{
			printf("*");
			j++;
		}
		while(j!=n);
		
		i++;
		
		printf("\n");
	}
	while(i<3);
	
	system("pause");
	return 0;
}
