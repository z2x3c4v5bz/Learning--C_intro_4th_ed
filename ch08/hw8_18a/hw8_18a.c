/* hw8_18a */
#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(void)
{
	int n;
	
	for(n=1;n<=10;n++)
		printf("fib(%d)=%d\n",n,fib(n));
	
	system("pause");
	return 0;
}

int fib(int n)
{
	int i;
	int n1,n2=1,n3=1;
	
	if(n==1||n==2)
		return 1;
	else
		for(i=3;i<=n;i++)
		{
			n1=n2+n3;
			n3=n2;
			n2=n1;
		}
	return n1;
}
