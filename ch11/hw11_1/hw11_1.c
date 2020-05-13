/* hw11_1 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data
	{
		int num;
		char ch;
		double dist;
	}aaa;
	
	printf("aaa佔了%d個位元組\n",sizeof(aaa));
	
	system("pause");
	return 0;
}


/*

aaa佔了16個位元組
Press any key to continue . . .

*/
