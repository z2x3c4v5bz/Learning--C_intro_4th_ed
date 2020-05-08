/* hw8_9 */
#include <stdio.h>
#include <stdlib.h>

int is_prime(int);

int main(void)
{
	int i;
	
	for(i=1;i<=30;i++)
		if(is_prime(i))
			printf("%3d",i);
	
	printf("\n");
	
	system("pause");
	return 0;
}

int is_prime(int num)
{
	int i;
	
	for(i=2;i<=num/2;i++)
		if(num%i==0)
			return 0;
			
	if(num!=1)
		return 1;
	else
		return 0;
}
