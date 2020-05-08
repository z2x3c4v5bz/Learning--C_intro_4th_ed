/* hw8_7 */
#include <stdio.h>
#include <stdlib.h>

int prime(int);

int main(void)
{
	int n=100;
	
	printf("第%d個質數為%d\n",n,prime(n));
	
	system("pause");
	return 0;
}

int prime(int n)
{
	int i,j,c=1;
	
	for(i=2;i>0;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
			if(j==i-1)
				c+=1;
		}
		
		if(c==n)
			return i;
	}
	return -1;
}
