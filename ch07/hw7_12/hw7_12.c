/* hw7_12 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,n1,n2,n3;
	
	printf("從100~999間的所有Armstrong數有:\n");
	
	for(i=100;i<=999;i++)
	{
		j=i;
		n1=j/100;
		j-=n1*100;
		n2=j/10;
		j-=n2*10;
		n3=j;
		
		if(i==n1*n1*n1+n2*n2*n2+n3*n3*n3)
			printf("%d  ",i);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}


/*

從100~999間的所有Armstrong數有:
153  370  371  407
Press any key to continue . . .

*/
