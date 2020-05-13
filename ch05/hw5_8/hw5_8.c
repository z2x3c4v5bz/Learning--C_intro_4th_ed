/* hw5_8 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a1=12,a2=4,a3=6,a4=4;
	int b1=7,b2=5,b3=12,b4=6,b5=4;
	int c1=13,c2=6,c3=7,c4=8;
	
	printf("%d-%d%%%d/%d=%d\n",a1,a2,a3,a4,a1-a2%a3/a4);
	printf("%d*%d%%%d*%d/%d=%d\n",b1,b2,b3,b4,b5,b1*b2%b3*b4/b5);
	printf("(%d%%%d)/%d*%d=%d\n",c1,c2,c3,c4,(c1%c2)/c3*c4);
	
	system("pause");
	return 0;
}


/*

12-4%6/4=11
7*5%12*6/4=16
(13%6)/7*8=0
Press any key to continue . . .

*/
