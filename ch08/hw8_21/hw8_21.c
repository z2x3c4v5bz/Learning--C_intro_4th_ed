/* hw8_21 */
#include <stdio.h>
#include <stdlib.h>

int sum2(int);

int main(void)
{
	int n;
	
	printf("輸入一個n，計算2+4+...+2(n-1)+2n的值 : ");
	scanf("%d",&n);
	
	while(n<=0)
	{
		printf("n不能小於或等於0，請再輸入一次 : ");
		scanf("%d",&n);
	}
	
	printf("Answer : %d\n",sum2(n));
	
	system("pause");
	return 0;
}

int sum2(int n)
{
	if(n==1)
		return 2;
	else
		return 2*n+sum2(n-1);
}


/*

輸入一個n，計算2+4+...+2(n-1)+2n的值 : 32
Answer : 1056
Press any key to continue . . .

*/
