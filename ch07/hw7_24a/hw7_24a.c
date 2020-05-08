/* hw7_24a */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=0,i=0,j;
	
	while(i!=3)
	{
		printf("輸入一個介在1~50間的整數: ");
		scanf("%d",&n);
		
		while(n<1||n>50)
		{
			printf("輸入一個介在1~50間的整數: ");
			scanf("%d",&n);
		}
		
		j=0;
		
		while(j!=n)
		{
			printf("*");
			j++;
		}
		
		i++;
		printf("\n");
	}
	
	system("pause");
	return 0;
}
