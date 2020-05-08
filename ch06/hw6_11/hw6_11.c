/* hw6_11 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hour;
	float pay;
	
	printf("工讀生總共工讀時數:");
	scanf("%d",&hour);
	
	if(hour<=60)
		pay=hour*75;
	else if(hour>60&&hour<=75)
			pay=60*75+(hour-60)*75*1.25;
		else
			pay=60*75+15*75*1.25+(hour-75)*75*1.75;
	
	printf("應付薪資為: %.2f\n",pay);
	
	system("pause");
	return 0;
}
