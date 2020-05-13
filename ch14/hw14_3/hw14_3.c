/* hw14_3 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double *ptr=(double *)malloc(3*sizeof(double));
	int i;
	
	for(i=0;i<3;i++)
	{
		scanf("%lf",(ptr+i));
		fflush(stdin);
	}
	
	printf("%.1f+%.1f+%.1f=%.1f\n",*ptr,*(ptr+1),*(ptr+2),(*ptr)+(*(ptr+1))+(*(ptr+2)));
	printf("Average=%.4f\n",((*ptr)+(*(ptr+1))+(*(ptr+2)))/3);
	
	free(ptr);
	
	system("pause");
	return 0;
}


/*

3.5
2.5
1.5
3.5+2.5+1.5=7.5
Average=2.5000
Press any key to continue . . .

*/
