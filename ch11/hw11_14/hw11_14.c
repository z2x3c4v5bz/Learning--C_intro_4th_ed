/* hw11_14 */
#include <stdio.h>
#include <stdlib.h>

struct data
{
	char name[10];
	int math;
};

void display(struct data);

int main(void)
{
	struct data s1={"Jenny",74};
	display(s1);
	
	printf("After call display() and s1.math= %d\n",s1.math);
	
	system("pause");
	return 0;
}

void display(struct data st)
{
	printf("學生姓名: %s\n",st.name);
	printf("數學成績: %d\n",st.math);
	st.math+=10;
}


/*

學生姓名: Jenny
數學成績: 74
After call display() and s1.math= 74
Press any key to continue . . .

*/
