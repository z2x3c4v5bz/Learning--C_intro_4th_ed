/* hw9_22 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 3

void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL]);

int main(void)
{
	int A[ROW][COL]={{99,41,68},{34,51,77},{15,18,22},{23,29,31}};
	int B[ROW][COL]={{31,29,23},{22,18,15},{77,51,34},{68,41,99}};
	int C[ROW][COL];
	int i,j;
	
	printf("Suppose A and B as matrix. and\nA=\n");
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%2d ",A[i][j]);
		printf("\n");
	}
	
	puts("B=");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%2d ",B[i][j]);
		printf("\n");
	}
	
	printf("\nC=A+B\n\nC=\n");
	
	add(A,B,C);
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%3d ",C[i][j]);
		printf("\n");
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}

void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL])
{
	int i,j;
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			C[i][j]=A[i][j]+B[i][j];
	}
}
