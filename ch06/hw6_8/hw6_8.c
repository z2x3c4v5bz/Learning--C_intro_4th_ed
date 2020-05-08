/* hw6_8 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1=3,num2=4,num3=5;
	
	if(num1+num2>num3&&num2+num3>num1&&num1+num3>num2)
	{
		if(num1*num1+num2*num2==num3*num3||num2*num2+num3*num3==num1*num1||num1*num1+num3*num3==num2*num2)
			printf(" %d 、 %d 和 %d 可以組成直角三角形。\n",num1,num2,num3);
		else if(num1*num1+num2*num2<num3*num3||num2*num2+num3*num3<num1*num1||num1*num1+num3*num3<num2*num2)
				printf(" %d 、 %d 和 %d 可以組成鈍角三角形。\n",num1,num2,num3);
			else
				printf(" %d 、 %d 和 %d 可以組成銳角三角形。\n",num1,num2,num3);
	}
	else
		printf(" %d 、 %d 和 %d 不能組成三角形。\n",num1,num2,num3);
	
	system("pause");
	return 0;
}
