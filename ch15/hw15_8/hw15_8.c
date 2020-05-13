/* hw15_8 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void show_decimal(char *,int);
int main(void)
{
	char arr[5]={'1','0','1','0','1'};
	
	show_decimal(arr,5);
	
	system("pause");
	return 0;
}
void show_decimal(char arr[],int n)
{
	int i,dec=0;
	
	for(i=1;i<=5;i++)
		dec+=((arr[i-1]-48)*pow(2,5-i));
	
	printf("10101的十進位是 : %d\n",dec);
}


/*

10101的十進位是 : 21
Press any key to continue . . .

*/
