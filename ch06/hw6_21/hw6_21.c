/* hw6_21 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char ch;
	
	printf("輸入一個字元a或b:");
	ch=getche();
	putchar('\n');
	
	switch(ch)
	{
		case 'a':
			printf("您輸入的是%c\n",ch);
			break;
		case 'b':
			printf("您輸入的是%c\n",ch);
			break;
		default:
			printf("您輸入的不是a也不是b。\n");
	}
	
	system("pause");
	return 0;
}
