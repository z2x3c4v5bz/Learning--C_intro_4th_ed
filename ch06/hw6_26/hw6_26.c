/* hw6_26 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	start:
	
		printf("輸入1~4的數字:");
		scanf("%d",&num);
	
		switch(num)
		{
			case 1:
				printf("春天\n");
				break;
			case 2:
				printf("夏天\n");
				break;
			case 3:
				printf("秋天\n");
				break;
			case 4:
				printf("冬天\n");
				break;
			default:
				printf("輸入錯誤，請重新輸入。\n");
				goto start;
		}
	
	system("pause");
	return 0;
}


/*

輸入1~4的數字:2
夏天
Press any key to continue . . .

*/
