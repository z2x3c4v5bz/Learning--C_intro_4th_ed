/* hw10_23 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3
int main(void)
{
	int i,j;
	int A[ROW][COL]={{1,2,3},{5,6,8}};
	int B[ROW][COL]={{3,0,2},{3,5,7}};
	
	printf("Matrix A+B=\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%3d",*(*(A+i)+j)+*(*(B+i)+j));
		printf("\n");
	}
	
	system("pause");
	return 0;
}
