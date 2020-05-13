/* hw4_12 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char firstname[15],lastname[15];
	
	printf("輸入姓氏 : ");
	scanf("%s",lastname);
	
	printf("輸入名字(不可有空白!) : ");
	scanf("%s",firstname);
	
	printf("你的名字是 : %s %s\n",firstname,lastname);
	
	system("pause");
	
	return 0;
} 


/*

輸入姓氏 : Lin
輸入名字(不可有空白!) : Zachary
你的名字是 : Zachary Lin
Press any key to continue . . .

*/
