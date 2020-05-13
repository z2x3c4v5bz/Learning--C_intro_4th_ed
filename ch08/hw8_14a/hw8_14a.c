/* hw8_14a */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(double,int);
double fac(int);

int main(void)
{
	int n1=5,n2=8;
	double x1=0.1,x2=0.2;
	
	printf("my_fun(%.1lf,%d)=%lf\n",x1,n1,my_fun(x1,n1));
	printf("my_fun(%.1lf,%d)=%lf\n",x1,n2,my_fun(x1,n2));
	printf("my_fun(%.1lf,%d)=%lf\n",x2,n2,my_fun(x2,n2));
	
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


/*

my_fun(0.1,5)=0.105171
my_fun(0.1,8)=0.105171
my_fun(0.2,8)=0.221403
Press any key to continue . . .

*/
