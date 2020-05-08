/* hw6_4 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("輸入一個整數:");
	scanf("%d",&num);
	
	if(num<0)
		num=abs(num);
	
	printf("輸入的整數其絕對值為:%d\n",num);
	
	system("pause");
	return 0;
}
