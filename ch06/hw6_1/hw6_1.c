/* hw6_1 */
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char ch;
	
	printf("輸入一個字元: ");
	ch=getche();
	
	if(ch>=48&&ch<=57)
		printf("\n此字元是數字。\n");
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
		printf("\n此字元是英文字母。\n");
	
	system("pause");
	
	return 0;
}


/*

輸入一個字元: a
此字元是英文字母。
Press any key to continue . . .

輸入一個字元: 5
此字元是數字。
Press any key to continue . . .

*/
