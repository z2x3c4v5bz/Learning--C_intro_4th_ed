/* hw8_27 */
#include <stdio.h>
#include <stdlib.h>

void cont1(void),cont2(void);
int f_fib(int),r_fib(int);
int c1,c2;

int main(void)
{
	int n;
	
	for(n=1;n<=30;n++)
	{
		c1=0,c2=0;
		f_fib(n);
		printf("n=%2d, for迴圈%2d次, ",n,c1);
		r_fib(n);
		printf("遞迴%d次\n",c2);
	}
	
	system("pause");
	return 0;
}

void cont1(void)
{
	c1++;
}

void cont2(void)
{
	c2++;
}

int f_fib(int n)
{
	int i;
	int n1,n2=1,n3=1;
	
	for(i=1;i<=n;i++)
	{
		cont1();
		
		if(n==1||n==2)
			return 1;
		else
		{
			n1=n2+n3;
			n3=n2;
			n2=n1;
		}
	}
	return n1;
}

int r_fib(int n)
{
	
	cont2();
	
	if(n==1||n==2)
		return 1;
	else
		return (r_fib(n-1)+r_fib(n-2));
}


/*

n= 1, for迴圈 1次, 遞迴1次
n= 2, for迴圈 1次, 遞迴1次
n= 3, for迴圈 3次, 遞迴3次
n= 4, for迴圈 4次, 遞迴5次
n= 5, for迴圈 5次, 遞迴9次
n= 6, for迴圈 6次, 遞迴15次
n= 7, for迴圈 7次, 遞迴25次
n= 8, for迴圈 8次, 遞迴41次
n= 9, for迴圈 9次, 遞迴67次
n=10, for迴圈10次, 遞迴109次
n=11, for迴圈11次, 遞迴177次
n=12, for迴圈12次, 遞迴287次
n=13, for迴圈13次, 遞迴465次
n=14, for迴圈14次, 遞迴753次
n=15, for迴圈15次, 遞迴1219次
n=16, for迴圈16次, 遞迴1973次
n=17, for迴圈17次, 遞迴3193次
n=18, for迴圈18次, 遞迴5167次
n=19, for迴圈19次, 遞迴8361次
n=20, for迴圈20次, 遞迴13529次
n=21, for迴圈21次, 遞迴21891次
n=22, for迴圈22次, 遞迴35421次
n=23, for迴圈23次, 遞迴57313次
n=24, for迴圈24次, 遞迴92735次
n=25, for迴圈25次, 遞迴150049次
n=26, for迴圈26次, 遞迴242785次
n=27, for迴圈27次, 遞迴392835次
n=28, for迴圈28次, 遞迴635621次
n=29, for迴圈29次, 遞迴1028457次
n=30, for迴圈30次, 遞迴1664079次
Press any key to continue . . .

*/
