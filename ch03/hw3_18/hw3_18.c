/* hw3_18 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1=123.39f,num2=3.8e5f;
	printf("num1(before)= %f\n",num1);
	printf("num2(before)= %f\n",num2);
	printf("num1(after)= %d\n",(int)num1);
	printf("num2(after)= %d\n",(int)num2);
	
	system("pause");
	return 0;
}


/*

num1(before)= 123.389999
num2(before)= 380000.000000
num1(after)= 123
num2(after)= 380000
Press any key to continue . . .

*/
