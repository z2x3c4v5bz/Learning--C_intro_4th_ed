/* hw9_15 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A[4][2][3]={{{20,21,22},{10,11,12}},{{1,2,3},{-40,-41,-42}},{{60,61,62},{5,4,3}},{{4,32,19},{24,33,45}}};
	int i,j,k,sum=0;
	
	for(i=0;i<4;i++)
		for(j=0;j<2;j++)
			for(k=0;k<3;k++)
				sum+=A[i][j][k];
	
	printf("Sum(A[4][2][3])=%d\n",sum);
	
	system("pause");
	return 0;
}


/*

Sum(A[4][2][3])=331
Press any key to continue . . . 

*/
