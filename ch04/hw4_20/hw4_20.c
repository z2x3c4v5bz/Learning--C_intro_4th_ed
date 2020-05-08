/* hw4_20 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char ch;
	
	printf("請輸入一個字元: ");
	ch=getche();
	printf("您輸入的字元是: ");
	putchar(ch);
	putchar('\n');
	
	printf("請輸入一個字元: ");
	ch=getch();
	printf("您輸入的字元是: ");
	putchar(ch);
	putchar('\n');
	
	system("pause");
	
	return 0;
}
