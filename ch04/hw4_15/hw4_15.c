/* hw4_15 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("輸入一個十六進位的數字 : ");
	scanf("%x",&num); 
	
	printf("轉換成八進位為 : %o\n轉換成十進位為 : %d\n",num,num);
	
	system("pause");
	
	return 0;
} 
