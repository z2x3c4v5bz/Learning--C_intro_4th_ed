/* hw9_9 */
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
	
	for(j=0;j<4;j++)
	{
		sum=0;
		for(i=0;i<2;i++)
			sum+=sale[i][j];
		printf("\n業務員1與2第%d季共銷售%d部車",j+1,sum);
	}
	
	puts("");
	
	system("pause");
	return 0;
}
