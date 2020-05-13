/* hw10_16 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A[5]={74,48,30,17,62};
	int i,max,min;
	min=max=*A;
	
	for(i=0;i<5;i++)
	{
		if(*(A+i)>max)
			max=*(A+i);
		if(*(A+i)<min)
			min=*(A+i);
	}
	printf("The maximum value in array A is %d\n",max);
	printf("The minimum value in array A is %d\n",min);
	
	system("pause");
	return 0;
}


/*

The maximum value in array A is 74
The minimum value in array A is 17
Press any key to continue . . .

*/
