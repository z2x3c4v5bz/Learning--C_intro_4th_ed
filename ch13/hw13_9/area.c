/* area.c */
#include <stdio.h>
void area(double r)
{
	extern double pi;
	printf("圓面積=%.2f\n",pi*r*r);
}
