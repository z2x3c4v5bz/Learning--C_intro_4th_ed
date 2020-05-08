/* hw6_14 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int year;
	
	printf("輸入西元年:");
	scanf("%d",&year);
	
	if((year%4==0&&year%100!=0)||(year%400==0&&year%4000!=0))
		printf("西元 %d 年為閏年。\n",year);
	else
		printf("西元 %d 年為平年。\n",year);
	
	system("pause");
	return 0;
}
