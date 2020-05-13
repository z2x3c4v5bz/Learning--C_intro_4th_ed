/* hw13_9 */
#include <stdio.h>
#include <stdlib.h>
double pi=3.1416;
void peri(double);
void area(double);
int main(void)
{
	double r=1.0;
	printf("pi=%.2f\n",pi);
	printf("radius=%.2f\n",r);
	peri(r);
	area(r);
	
	system("pause");
	return 0;
}


/*

pi=3.14
radius=1.00
圓周長=6.28
圓面積=3.14
Press any key to continue . . .

*/
