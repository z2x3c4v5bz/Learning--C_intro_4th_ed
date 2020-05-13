/* hw5_16 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float r;
	
	printf("輸入圓球半徑: ");
	scanf("%f",&r);
	
	printf("圓球體積為: %.4lf\n",(double)r*r*r*3.1415*4/3);
	
	system("pause");
	
	return 0;
}


/*

輸入圓球半徑: 5
圓球體積為: 523.5833
Press any key to continue . . .

*/
