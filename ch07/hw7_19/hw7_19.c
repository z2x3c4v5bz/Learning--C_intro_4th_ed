/* hw7_19 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=1,sum=0;
	
	do
	{
		sum+=n;
		n++;
	}
	while(sum<1000);
	
	printf("n=%d\n",n-1);
	
	system("pause");
	return 0;
}
