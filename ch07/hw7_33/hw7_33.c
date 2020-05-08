/* hw7_33 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,sum=0;
	
	do
	{
	printf("輸入一個整數:");
	scanf("%d",&n);
	}
	while(n<=0);
	
	i=n-1;
	
	while(i!=0)
	{
		for(j=1,sum=0;j<=i;j++)
			if(i%j==0)
				sum+=j;
		
		if(sum==i+1)
		{
			printf("小於%d的最大質數是%d。\n",n,i);
			break;
		}
		else
			i--;
	}
	
	system("pause");
	return 0;
}
