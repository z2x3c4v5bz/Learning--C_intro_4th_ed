/* hw8_13b */
#include <stdio.h>
#include <stdlib.h>

double my_fun(int);
double fac(int);

int main(void)
{
	int n;
	
	for(n=1;n<=25;n++)
		printf("my_fun(%d)=%lf\n",n,my_fun(n));
	
	system("pause");
	return 0;
}

double my_fun(int n)
{
	double sum=0;
	int i;
	
	for(i=1;i<=n;i++)
		sum+=(1/fac(i));
	
	return sum;
}

double fac(int a)
{
	int i,total=1;
	
	for(i=1;i<=a;i++)
		total*=i;
	
	return total;
}
