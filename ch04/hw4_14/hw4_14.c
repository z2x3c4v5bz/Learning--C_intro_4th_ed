/* hw4_14 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("輸入一個十進位的數字 : ");
	scanf("%d",&num); 
	
	printf("轉換成八進位為 : %o\n轉換成十六進位為 : %x\n",num,num);
	
	system("pause");
	
	return 0;
} 


/*

輸入一個十進位的數字 : 666
轉換成八進位為 : 1232
轉換成十六進位為 : 29a
Press any key to continue . . .

*/
