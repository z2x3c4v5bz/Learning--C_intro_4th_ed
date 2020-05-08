/* hw8_12b */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(int);

int main(void)
{
	int i;
	
	for(i=1;i<=50;i++)
		printf("my_fun(%d)=%lf\n",i,my_fun(i));
	
	system("pause");
	return 0;
}

double my_fun(int n)
{
	double sum=0;
	int i;
	
	for(i=1;i<=n;i++)
		sum+=(1/pow(2,i));
	
	return sum;
}
