/* hw6_17 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int w;
	
	printf("輸入整數體重:");
	scanf("%d",&w);
	
	w>90?(printf("體重過重。\n")):(printf("不會過重。\n"));
	
	system("pause");
	return 0;
}


/*

輸入整數體重:66
不會過重。
Press any key to continue . . .

*/
