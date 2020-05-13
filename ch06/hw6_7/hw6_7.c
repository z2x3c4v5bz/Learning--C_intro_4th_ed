/* hw6_7 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1=3,num2=4,num3=5;
	
	if(num1+num2>num3&&num2+num3>num1&&num1+num3>num2)
		printf(" %d 、 %d 和 %d 可以組成三角形。\n",num1,num2,num3);
	else
		printf(" %d 、 %d 和 %d 不能組成三角形。\n",num1,num2,num3);
	
	system("pause");
	return 0;
}


/*

 3 、 4 和 5 可以組成三角形。
Press any key to continue . . .

*/
