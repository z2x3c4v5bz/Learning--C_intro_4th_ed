/* hw6_22 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char ch;
	
	printf("輸入一個字元a(A)或b(B):");
	ch=getche();
	putchar('\n');
	
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("您輸入的是A\n");
			break;
		case 'b':
		case 'B':
			printf("您輸入的是B\n");
			break;
		default:
			printf("您輸入的不是a也不是b。\n");
	}
	
	system("pause");
	return 0;
}


/*

輸入一個字元a(A)或b(B):A
您輸入的是A
Press any key to continue . . .

*/
