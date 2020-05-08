/* hw8_2 */
#include <stdio.h>
#include <stdlib.h>

void kitty(int);

int main(void)
{
	int k;
	
	printf("輸入一個整數 : ");
	scanf("%d",&k);
	
	kitty(k);
	
	system("pause");
	return 0;
}

void kitty(int k)
{
	int i;
	
	for(i=1;i<=k;i++)
		printf("Holle Kitty\n");
		
}
