/* hw8_20 */
#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void)
{
	int n;
	
	printf("輸入一個n，計算1+2+...+(n-1)+n的值 : ");
	scanf("%d",&n);
	
	while(n<=0)
	{
		printf("n不能小於或等於0，請再輸入一次 : ");
		scanf("%d",&n);
	}
	
	printf("Answer : %d\n",sum(n));
	
	system("pause");
	return 0;
}

int sum(int n)
{
	if(n==1)
		return 1;
	else
		return n+sum(n-1);
}
