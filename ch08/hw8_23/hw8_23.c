/* hw8_23 */
#include <stdio.h>
#include <stdlib.h>

int fun(int);

int main(void)
{
	int n=5;
	
	printf("Suppose a function f(n)=2f(n-1)-5 and f(0)=3, f(%d)=?\n",n);
	printf("f(%d)=%d\n",n,fun(n));
	
	system("pause");
	return 0;
}

int fun(int n)
{
	if(n==0)
		return 3;
	else
		return 2*fun(n-1)-5;
}
