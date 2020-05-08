/* hw8_14b */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(double,int);
double fac(int);

int main(void)
{
	int n;
	double x=0.1;
	
	for(n=1;n<=25;n++)
		printf("my_fun(%.1lf,%d)=%lf\n",x,n,my_fun(x,n));
	
	system("pause");
	return 0;
}

double my_fun(double x,int n)
{
	double sum=0;
	int i;
	
	for(i=1;i<=n;i++)
		sum+=pow(x,i)/fac(i);
	
	return sum;
}

double fac(int n)
{
	int i;
	double sum=1;
	
	for(i=1;i<=n;i++)
		sum*=i;
	
	return sum;
}
