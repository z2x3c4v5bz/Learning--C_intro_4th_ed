/* hw11_2 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct date
	{
		int year;
		int month;
		int day;
	}holiday={2004,4,26},festival;
	
	do
	{
		printf("輸入2005: ");
		scanf("%d",&festival.year);
		fflush(stdin);
	}while(festival.year!=2005);
	
	do
	{
		printf("輸入12: ");
		scanf("%d",&festival.month);
		fflush(stdin);
	}while(festival.month!=12);
	
	do
	{
		printf("輸入25: ");
		scanf("%d",&festival.day);
		fflush(stdin);
	}while(festival.day!=25);
	
	printf("\nholiday=%02d/%02d/%d\n",holiday.month,holiday.day,holiday.year);
	printf("festival=%02d/%02d/%d\n",festival.month,festival.day,festival.year);
	
	system("pause");
	return 0;
}
