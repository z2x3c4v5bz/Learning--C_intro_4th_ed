/* hw8_28 */
#include <stdio.h>
#include <stdlib.h>

void counter(void);
int cont;

int main(void)
{
	counter();
	counter();
	
	system("pause");
	return 0;
}

void counter(void)
{
	printf("counter()已經被呼叫%d次了...\n",++cont);
}
