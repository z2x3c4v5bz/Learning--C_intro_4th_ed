/* hw8_15a */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(double,int);
double fac(int);

int main(void)
{
	int n1=3,n2=5;
	double x=2.2;
	
	printf("my_fun(%.1lf,%d)=%lf\n",x,n1,my_fun(x,n1));
	printf("my_fun(%.1lf,%d)=%lf\n",x,n2,my_fun(x,n2));
	
	system("pause");
	return 0;
}

double my_fun(double x,int n)
{
	double sum=0;
	int i;
	
	for(i=1;i<=n;i++)
		sum+=(pow(-1,i)*pow(x,2*i+1))/fac(2*i+1);
	
	return sum;
}

double fac(int a)
{
	int i;
	double sum=1;
	
	for(i=1;i<=a;i++)
		sum*=i;
	
	return sum;
}


/*

my_fun(2.2,3)=-1.394689
my_fun(2.2,5)=-1.391508
Press any key to continue . . .

*/
