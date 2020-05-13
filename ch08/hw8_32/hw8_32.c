/* hw8_32 */
#include <stdio.h>
#include <stdlib.h>
#define CUBIC(X) X*X*X

int main(void)
{
	int n1=5;
	double n2=2.2;
	
	printf("%d^3=%d\n%.1lf^3=%lf\n",n1,CUBIC(n1),n2,CUBIC(n2));
	
	system("pause");
	return 0;
}


/*

5^3=125
2.2^3=10.648000
Press any key to continue . . .

*/
