/* hw11_15 */
#include <stdio.h>
#include <stdlib.h>

struct data
{
	char name[10];
	int math;
};

void add5(struct data *);

int main(void)
{
	struct data s1={"Jenny",74};
	
	printf("呼叫函數add5()之前，s1.math= %d\n",s1.math);
	
	add5(&s1);
	
	printf("呼叫函數add5()之後，s1.math= %d\n",s1.math);
	
	system("pause");
	return 0;
}

void add5(struct data *ptr)
{
	ptr->math+=5;
}


/*

呼叫函數add5()之前，s1.math= 74
呼叫函數add5()之後，s1.math= 79
Press any key to continue . . .

*/
