/* hw8_25 */
#include <stdio.h>
#include <stdlib.h>

int fib(int);
void counter(void);

int main(void)
{
	fib(5);
	
	system("pause");
	return 0;
}

int fib(int n)
{
	counter();
	
	if(n==1||n==2)
		return 1;
	else
		return (fib(n-1)+fib(n-2));
}

void counter(void)
{
	static int cont=0;
	
	printf("counter()已經被呼叫%d次了...\n",++cont);
}
