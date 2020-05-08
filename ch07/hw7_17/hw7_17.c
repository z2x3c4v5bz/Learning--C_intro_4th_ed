/* hw7_17 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,sum=0;
	
	while(i<=10)
	{
		sum+=i*i;
		printf("%d  ",i*i);
		i++;
	}
	
	printf("\n1~10間各個數字的平方和=%d\n",sum);
	
	system("pause");
	return 0;
}
