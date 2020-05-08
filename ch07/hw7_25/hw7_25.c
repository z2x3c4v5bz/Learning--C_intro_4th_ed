/* hw7_25 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",i);
		printf("\n");
	}
	
	system("pause");
	return 0;
}
