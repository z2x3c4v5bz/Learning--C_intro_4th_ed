/* hw7_8 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	printf("1到100間能被3與7整除的數有:\n");
	
	for(i=1;i<=100;i++)
		if(i%3==0&&i%7==0)
			printf("%d  ",i);
	
	printf("\n");
	
	system("pause");
	return 0;
}
