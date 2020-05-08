/* hw9_10 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,sale[2][4],sum;
	
	for(i=0;i<2;i++)
		for(j=0;j<4;j++)
		{
			printf("業務員%d的第%d季業績 : ",i+1,j+1);
			scanf("%d",&sale[i][j]);
		}
	
	printf("***Output***");
	
	for(i=0;i<2;i++)
	{
		sum=0;
		for(j=0;j<4;j++)
			sum+=sale[i][j];
		printf("\n業務員%d於2004年的總銷售為%d部車",i+1,sum);
	}
	
	puts("");
	
	system("pause");
	return 0;
}
