/* hw4_17c */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch1,ch2;
	
	printf("請輸入第一個字元: ");
	scanf("%c",&ch1);
	fflush(stdin);
	printf("請輸入第二個字元: ");
	scanf("%c",&ch2);
	printf("ch1=%c, ch2=%c\n",ch1,ch2);
	
	system("pause");
	return 0;
} 
