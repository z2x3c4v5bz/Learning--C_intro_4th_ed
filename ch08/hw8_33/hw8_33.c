/* hw8_33 */
#include <stdio.h>
#include <stdlib.h>
#define AVERAGE(X,Y) (X+Y)/2

int main(void)
{
	double x=12.6,y=4.2;
	
	printf("Average(%.1lf,%.1lf)=%.1lf\n",x,y,AVERAGE(x,y));
	
	system("pause");
	return 0;
}
