/* hw7_23a */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,sum;
	
	for(n=1,sum=0;sum<=1000;n++)
		sum+=n;
	
	printf("n=%d\n",n-1);
	
	system("pause");
	return 0;
}


/*

n=45
Press any key to continue . . .

*/
