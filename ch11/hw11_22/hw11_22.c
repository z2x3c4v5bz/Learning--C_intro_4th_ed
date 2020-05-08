/* hw11_22 */
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char name[10];
	int math;
}SCORE;

void display(SCORE);

int main(void)
{

	SCORE s1={"Jenny",74};
	display(s1);
	
	system("pause");
	return 0;
}

void display(SCORE st)
{
	printf("學生姓名: %s\n",st.name);
	printf("數學成績: %d\n",st.math);
}
