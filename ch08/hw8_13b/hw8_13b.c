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


/*

my_fun(1)=1.000000
my_fun(2)=1.500000
my_fun(3)=1.666667
my_fun(4)=1.708333
my_fun(5)=1.716667
my_fun(6)=1.718056
my_fun(7)=1.718254
my_fun(8)=1.718279
my_fun(9)=1.718282
my_fun(10)=1.718282
my_fun(11)=1.718282
my_fun(12)=1.718282
my_fun(13)=1.718282
my_fun(14)=1.718282
my_fun(15)=1.718282
my_fun(16)=1.718282
my_fun(17)=1.718282
my_fun(18)=1.718282
my_fun(19)=1.718282
my_fun(20)=1.718282
my_fun(21)=1.718282
my_fun(22)=1.718282
my_fun(23)=1.718282
my_fun(24)=1.718282
my_fun(25)=1.718282
Press any key to continue . . .

*/
