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


/*

counter()已經被呼叫1次了...
counter()已經被呼叫2次了...
counter()已經被呼叫3次了...
counter()已經被呼叫4次了...
counter()已經被呼叫5次了...
counter()已經被呼叫6次了...
counter()已經被呼叫7次了...
counter()已經被呼叫8次了...
counter()已經被呼叫9次了...
Press any key to continue . . .

*/
