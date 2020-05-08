/* hw6_3 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("輸入一個數以判斷是奇數或偶數:");
	scanf("%d",&num);
	
	if(num%2!=0)
		printf("%d是奇數\n",num);
	else
		printf("%d是偶數\n",num);
	
	system("pause");
	return 0;
}
