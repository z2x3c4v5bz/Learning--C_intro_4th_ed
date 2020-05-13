/* hw11_16 */
#include <stdio.h>
#include <stdlib.h>

struct time
{
	int hour;
	int minutes;
	double second;
};

void display(struct time,struct time,struct time);

int main(void)
{
	struct time start={12,32,25.49},end={15,12,17.53},elapse={0,0,0.0};
	
	elapse.second=end.second-start.second;
	if(elapse.second<0)
	{
		elapse.second+=60.0;
		end.minutes--;
	}
	if(elapse.minutes<0)
	{
		elapse.minutes+=60;
		end.hour--;
	}
	elapse.minutes=end.minutes-start.minutes;
	if(elapse.minutes<0)
	{
		elapse.minutes+=60;
		end.hour--;
	}
	elapse.hour=end.hour-start.hour;
	
	display(start,end,elapse);
	
	system("pause");
	return 0;
}

void display(struct time st,struct time en,struct time el)
{
	printf("start=%2d:%2d:%2.2lf\n",st.hour,st.minutes,st.second);
	printf("end=%2d:%2d:%2.2lf\n",en.hour,en.minutes,en.second);
	printf("elapse=%2d:%2d:%2.2lf\n",el.hour,el.minutes,el.second);
}


/*

start=12:32:25.49
end=14:11:17.53
elapse= 2:39:52.04
Press any key to continue . . . 

*/
