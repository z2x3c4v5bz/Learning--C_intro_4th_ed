/* hw5_14 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double km;
	
	printf("輸入公里數: ");
	scanf("%lf",&km);
	
	printf("英里數為: %f\n",(double)km/1.6);
	
	system("pause");
	
	return 0;
}
