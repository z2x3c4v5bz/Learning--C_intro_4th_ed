/* hw8_31 */
#include <stdio.h>
#include <stdlib.h>
#define f(x) 4*x*x+6*x-5

int main(void)
{
	double n1=1.0,n2=2.2,n3=3.14;
	
	printf("f(%.2lf)=%lf\n",n1,f(n1));
	printf("f(%.2lf)=%lf\n",n2,f(n2));
	printf("f(%.2lf)=%lf\n",n3,f(n3));
	
	system("pause");
	return 0;
}
