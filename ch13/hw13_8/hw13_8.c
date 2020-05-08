/* hw13_8 */
#include <stdio.h>
#include <stdlib.h>
void func(void);
int a;
int main(void)
{
	a=100;
	printf("呼叫func()之前,a=%d\n",a);
	func();
	printf("呼叫func()之後,a=%d\n",a);
	
	system("pause");
	return 0;
}
