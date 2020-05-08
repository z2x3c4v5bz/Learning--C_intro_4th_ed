/* hw8_5 */
#include <stdio.h>
#include <stdlib.h>

int mod(int,int);

int main(void)
{
	int x=17,y=5;
	
	printf("%d與%d的餘數=%d\n",x,y,mod(x,y));
	
	system("pause");
	return 0;
}

int mod(int x,int y)
{
	return x-y*(x/y);
}
