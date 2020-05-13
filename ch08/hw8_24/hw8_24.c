/* hw8_24 */
#include <stdio.h>
#include <stdlib.h>

void counter(void);

int main(void)
{
	counter();
	counter();
	
	system("pause");
	return 0;
}

void counter(void)
{
	static int cont=0;
	
	printf("counter()已經被呼叫%d次了...\n",++cont);
}


/*

Suppose a function f(n)=2f(n-1)-5 and f(0)=3, f(5)=?
f(5)=-59
Press any key to continue . . .

*/
