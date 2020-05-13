/* hw7_9 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,sum=0;
	
	for(i=1;i<=50;i++)
	{
		if(i%2!=0)
			sum+=i*i;
		else
			sum-=i*i;
	}
	
	printf("1^2-2^2+3^2-4^2+...+47^2-48^2+49^2-50^2=%d\n",sum);
	
	system("pause");
	return 0;
}


/*

1^2-2^2+3^2-4^2+...+47^2-48^2+49^2-50^2=-1275
Press any key to continue . . .

*/
