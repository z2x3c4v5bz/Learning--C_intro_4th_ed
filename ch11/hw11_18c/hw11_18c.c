/* hw11_18c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	enum boolean
	{
		FALSE,
		TRUE
	}test;
	test=5<20;
	if(test==TRUE)
		printf("5<20 成立\n");
	else
		printf("5>=20 不成立\n");
	
	system("pause");
	return 0;
}
