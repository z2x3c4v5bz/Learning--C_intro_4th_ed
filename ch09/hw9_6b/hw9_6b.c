/* hw9_6b */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[]={3,5,0,3,2,4,1,6,8,5,4,3,2};
	int i,cont=0;
	
	for(i=0;i<13;i++)
		if(array[i]>=3&&array[i]<=6)
			cont+=1;
	
	printf("array[]中，介於3~6之間的元素共有%d個。\n",cont);
	
	system("pause");
	return 0;
}


/*

array[]中，介於3~6之間的元素共有8個。
Press any key to continue . . .

*/
