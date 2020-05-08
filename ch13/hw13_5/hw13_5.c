/* hw13_5 */
#include <stdio.h>
#include <stdlib.h>
struct data
{
	double area;
	double peri;
};
struct data function(double);
int main(void)
{
	struct data tmp;
	tmp=function(2.2);
	printf("area(2.2)=%5.2f\n",tmp.area);
	tmp=function(1.4);
	printf("peri(1.4)=%5.2f\n",tmp.peri);
	
	system("pause");
	return 0;
}
