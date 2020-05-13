/* hw7_32 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,sum=0;
	
	do
	{
	printf("輸入一個整數:");
	scanf("%d",&n);
	}
	while(n<=0);
	
	for(i=1;i<=n;i++)
		if(n%i==0)
			sum+=i;
	
	if(1+n==sum)
		printf("%d是質數。\n",n);
	else
		printf("%d不是質數。\n",n);
	
	system("pause");
	return 0;
}


/*

輸入一個整數:8591
8591不是質數。
Press any key to continue . . .

*/
