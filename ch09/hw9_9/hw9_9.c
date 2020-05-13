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


/*

業務員1的第1季業績 : 30
業務員1的第2季業績 : 20
業務員1的第3季業績 : 10
業務員1的第4季業績 : 5
業務員2的第1季業績 : 45
業務員2的第2季業績 : 20
業務員2的第3季業績 : 18
業務員2的第4季業績 : 20
***Output***
業務員1與2第1季共銷售75部車
業務員1與2第2季共銷售40部車
業務員1與2第3季共銷售28部車
業務員1與2第4季共銷售25部車
Press any key to continue . . . 

*/
