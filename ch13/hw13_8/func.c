/* func.c */
#include <stdio.h>
#include <stdlib.h>
void func(void)
{
	extern int a;
	a=300;
	printf("於func()函數裡,a=%d\n",a);
}
