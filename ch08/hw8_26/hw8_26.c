/* hw8_26 */
#include <stdio.h>
#include <stdlib.h>

double rpower(double,int);
void counter(void);

int main(void)
{
	rpower(2.0,9);
	
	system("pause");
	return 0;
}

double rpower(double b,int n)
{
	counter();
	
	if(n==0)
		return 1;
	else if(n>0)
		return b*rpower(b,n-1);
		else
			return 1/b*rpower(b,n+1);
}

void counter(void)
{
	static int cont=0;
	
	printf("counter()已經被呼叫%d次了...\n",++cont);
}
