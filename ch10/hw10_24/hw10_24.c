/* hw10_24 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 3
void search(int a[][COL],int b[]);
int main(void)
{
	int a[ROW][COL]={{26,5,7},{10,3,47},{6,76,8},{40,4,32}};
	int i,j,b[2];
	printf("The elements in 2-dimensional array:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%02d ",a[i][j]);
		printf("\n");
	}
	search(a,b);
	printf("The maximum value in A is %d\n",b[0]);
	printf("The minimum value in A is %d\n",b[1]);
	
	system("pause");
	return 0;
}

void search(int arr[][COL],int p[])
{
	int i,j;
	p[0]=p[1]=*(*(arr));
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
		{
			if(p[0]<*(*(arr+i)+j))
				p[0]=*(*(arr+i)+j);
			if(p[1]>*(*(arr+i)+j))
				p[1]=*(*(arr+i)+j);
		}
}


/*

The elements in 2-dimensional array:
26 05 07
10 03 47
06 76 08
40 04 32
The maximum value in A is 76
The minimum value in A is 3
Press any key to continue . . .

*/
