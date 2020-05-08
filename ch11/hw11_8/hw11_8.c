/* hw11_8 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct time
	{
		int hour;
		int minutes;
		double second;
	};
	struct date
	{
		int year;
		int month;
		int day;
		struct time c;
	}now={2018,1,24,{14,46,13.0}};
	
	printf("%2d/%2d/%4d  %02d:%02d:%2.2lf\n",now.month,now.day,now.year,now.c.hour,now.c.minutes,now.c.second);
	printf("sizeof(now)=%d\n",sizeof(now));
	
	system("pause");
	return 0;
}
