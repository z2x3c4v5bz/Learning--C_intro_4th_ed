/* hw6_24 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum=0,i=0;
	
	start:
		i++;
		
		if(i%2!=0)
			sum+=i;
	
		if(i!=100)
			goto start;
	
	printf("1~100間奇數數字的總合為: %d\n",sum);
	
	system("pause");
	return 0;
}


/*

1~100間奇數數字的總合為: 2500
Press any key to continue . . .

*/
