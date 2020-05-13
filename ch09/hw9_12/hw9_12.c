/* hw9_12 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 3

int main(void)
{
	int i,j,min_r=0,min_c=0;
	int matr[ROW][COL]={{99,41,68},{34,51,77},{15,18,22},{23,29,31}};
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%3d",matr[i][j]);
			if(matr[i][j]<matr[min_r][min_c])
			{
				min_r=i;
				min_c=j;
			}
		}
		puts("");
	}
	
	printf("matr[]裡最小值的檢索值是mart[%d][%d]\n",min_r,min_c);
	
	system("pause");
	return 0;
}


/*

 99 41 68
 34 51 77
 15 18 22
 23 29 31
matr[]裡最小值的檢索值是mart[2][0]
Press any key to continue . . .

*/
