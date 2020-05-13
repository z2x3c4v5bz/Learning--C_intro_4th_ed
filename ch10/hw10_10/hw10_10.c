/* hw10_10 */
#include <stdio.h>
#include <stdlib.h>
void count(int *);
int main(void)
{
	int num=0;
	int i;
	
	for(i=1;i<=5;i++)
	{
		count(&num);
		printf("呼叫count%d次，num=%d\n",i,num);
	}
	
	system("pause");
	return 0;
}

void count(int *i)
{
	*i+=1;
}


/*

呼叫count1次，num=1
呼叫count2次，num=2
呼叫count3次，num=3
呼叫count4次，num=4
呼叫count5次，num=5
Press any key to continue . . .

*/
