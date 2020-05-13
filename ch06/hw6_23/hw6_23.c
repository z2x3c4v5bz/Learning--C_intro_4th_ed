/* hw6_23 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("輸入一個1~7的整數:");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("今天要上班。\n");
			break;
		case 6:
		case 7:
			printf("今天休息。\n");
			break;
		default:
			printf("輸入錯誤。\n");
	}
	
	system("pause");
	return 0;
}


/*

輸入一個1~7的整數:5
今天要上班。
Press any key to continue . . .

*/
