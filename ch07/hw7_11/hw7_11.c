/* hw7_11 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,sum;
	
	printf("1~1000間的完美數有:\n");
	
	for(i=1;i<=1000;i++)
	{
		sum=0;
		
		for(j=1;j<i;j++)
			if(i%j==0)
				sum+=j;
		
		if(i==sum)
			printf("%d  ",i);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
