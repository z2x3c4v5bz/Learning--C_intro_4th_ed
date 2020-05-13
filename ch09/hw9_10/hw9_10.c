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


/*

業務員1的第1季業績 : 30
業務員1的第2季業績 : 20
業務員1的第3季業績 : 10
業務員1的第4季業績 : 5
業務員2的第1季業績 : 40
業務員2的第2季業績 : 20
業務員2的第3季業績 : 28
業務員2的第4季業績 : 20
***Output***
業務員1於2004年的總銷售為65部車
業務員2於2004年的總銷售為108部車
Press any key to continue . . .

*/
