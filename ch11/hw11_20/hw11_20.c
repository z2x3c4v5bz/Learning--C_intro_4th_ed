/* hw11_20 */
#include <stdio.h>
#include <stdlib.h>
struct data
{
	char name[10];
	int math;
};

void display(SCORE);

int main(void)
{
	typedef struct data SCORE;
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


/*

hw11_20.c:10:14: error: a parameter list without types is only allowed in a function definition
void display(SCORE);
             ^
hw11_20.c:22:14: error: unknown type name 'SCORE'
void display(SCORE st)
             ^
2 errors generated.

*/
