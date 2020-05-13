/* hw8_34 */
#include <stdio.h>
#include <stdlib.h>
#define ABS(X) X<0?(X*(-1)):(X)

int main(void)
{
	double n=-13.6;
	
	printf("Abs(%.1lf)=%.1lf\n",n,ABS(n));
	
	system("pause");
	return 0;
}


/*

Abs(-13.6)=13.6
Press any key to continue . . .

*/
