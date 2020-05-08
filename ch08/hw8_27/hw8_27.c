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

