/* hw8_15b */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(double,int);
double fac(int);

int main(void)
{
	int n;
	double x=2.2;
	
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

my_fun(2.2,1)=-1.774667
my_fun(2.2,2)=-1.345197
my_fun(2.2,3)=-1.394689
my_fun(2.2,4)=-1.391362
my_fun(2.2,5)=-1.391508
my_fun(2.2,6)=-1.391503
my_fun(2.2,7)=-1.391504
my_fun(2.2,8)=-1.391504
my_fun(2.2,9)=-1.391504
my_fun(2.2,10)=-1.391504
my_fun(2.2,11)=-1.391504
my_fun(2.2,12)=-1.391504
my_fun(2.2,13)=-1.391504
my_fun(2.2,14)=-1.391504
my_fun(2.2,15)=-1.391504
my_fun(2.2,16)=-1.391504
my_fun(2.2,17)=-1.391504
my_fun(2.2,18)=-1.391504
my_fun(2.2,19)=-1.391504
my_fun(2.2,20)=-1.391504
my_fun(2.2,21)=-1.391504
my_fun(2.2,22)=-1.391504
my_fun(2.2,23)=-1.391504
my_fun(2.2,24)=-1.391504
my_fun(2.2,25)=-1.391504
Press any key to continue . . .

*/
