/* hw5_5 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2;
	
	num1=6,num2=4;
	printf("%2d%%%2d=%2d\n",num1,num2,num1%num2);
	
	num1=12,num2=6;
	printf("%2d%%%2d=%2d\n",num1,num2,num1%num2);
	
	
	num1=12,num2=12;
	printf("%2d%%%2d=%2d\n",num1,num2,num1%num2);
	
	num1=35,num2=50;
	printf("%2d%%%2d=%2d\n",num1,num2,num1%num2);
	
	num1=50,num2=35;
	printf("%2d%%%2d=%2d\n",num1,num2,num1%num2);
	
	system("pause");
	
	return 0;
}
