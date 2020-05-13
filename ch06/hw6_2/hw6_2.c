/* hw6_2 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("請輸入一個整數:");
	scanf("%d",&num);
	
	if(num<0)
		printf("您鍵入的整數小於零。\n");
	else if(num>0)
			printf("您鍵入的整數大於零。\n");
		else
			printf("您鍵入的整數等於零。\n");
	
	printf("程式結束。\n");
	
	system("pause");
	return 0;
}


/*

請輸入一個整數:33
您鍵入的整數大於零。
程式結束。
Press any key to continue . . .

*/
