/* hw9_21 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 3

double average(int arr[ROW][COL]);

int main(void)
{
	int i,j;
	int A[ROW][COL]={{99,41,68},{34,51,77},{15,18,22},{23,29,31}};
	
	printf("Let A be a matrix and A=\n");
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%2d ",A[i][j]);
		}
		puts("");
	}
	printf("\n");
	
	printf("Average(A)=%lf\n",average(A));
	
	system("pause");
	return 0;
}

double average(int arr[ROW][COL])
{
	int i,j;
	double sum=0;
	
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			sum+=arr[i][j];
	
	return sum/(ROW*COL);
}


/*

Let A be a matrix and A=
99 41 68
34 51 77
15 18 22
23 29 31

Average(A)=42.333333
Press any key to continue . . .

*/
