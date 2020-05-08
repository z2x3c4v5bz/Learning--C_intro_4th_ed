/* hw7_7 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	printf("1到100間能被6整除的數有:\n");
	
	for(i=1;i<=100;i++)
		if(i%6==0)
			printf("%d  ",i);
	
	printf("\n");
	
	system("pause");
	return 0;
}
