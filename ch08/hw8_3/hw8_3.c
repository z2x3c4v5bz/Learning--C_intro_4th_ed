/* hw8_3 */
#include <stdio.h>
#include <stdlib.h>

int cub(int);

int main(void)
{
	int num=2;
	
	printf("%d^3=%d\n",num,cub(num));
	
	system("pause");
	return 0;
}

int cub(int n)
{
	return n*n*n;
}
