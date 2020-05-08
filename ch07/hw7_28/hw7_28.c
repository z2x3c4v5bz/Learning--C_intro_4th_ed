/* hw7_28 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,j;
	
	do
	{
		j=1;
		do
		{
			printf("%d*%d=%2d   ",j,i,i*j);
			j++;
		}
		while(j<=9);
		
		printf("\n");
		
		i++;
	}
	while(i<=9);
	
	system("pause");
	return 0;
}
