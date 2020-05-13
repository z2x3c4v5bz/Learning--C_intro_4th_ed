/* hw4_13 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char anything[10];
	
	printf("隨便說個什麼吧~(不可有空格，最多10個字)\n我想說 : ");
	scanf("%s",anything);
	
	printf("\" %s \"\n",anything);
	
	printf("\\ %20s \\\n",anything);
	
	printf("\\ %-20s \\\n",anything);
	
	system("pause");
	
	return 0;
}


/*

隨便說個什麼吧~(不可有空格，最多10個字)
我想說 : i_love_you
" i_love_you "
\           i_love_you \
\ i_love_you           \
Press any key to continue . . .

*/