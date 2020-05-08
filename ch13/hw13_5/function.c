/* function.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
struct data
{
	double area;
	double peri;
};
double area(double);
double peri(double);
void show(double);
struct data function(double r)
{
	struct data tmp;
	
	show(r);
	tmp.area=area(r);
	tmp.peri=peri(r);
	
	return tmp;
}

double area(double r)
{
	return (PI*pow(r,2.0));
}

double peri(double r)
{
	return (2*PI*r);
}

void show(double r)
{
	printf("半徑為%5.2f, ",r);
}
