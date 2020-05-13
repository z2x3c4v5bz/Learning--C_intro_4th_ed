/* hw14_4 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	double *ptr,sum=0;
	
	for(i=0;i<3;i++)
	{
		ptr=(double *)malloc(sizeof(double));
		scanf("%lf",ptr);
		fflush(stdin);
		sum+=*ptr;
		free(ptr);
	}
	
	printf("Sum=%.2lf\nAverage=%.2lf\n",sum,sum/3);
	
	system("pause");
	return 0;
}


/*

2.5
0.5
3.5
Sum=6.50
Average=2.17
Press any key to continue . . .

*/
