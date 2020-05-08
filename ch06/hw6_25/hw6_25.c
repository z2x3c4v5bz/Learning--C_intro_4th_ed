/* hw6_25 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int year=1899;
	
	printf("西元1900年到西元2000年間，屬於閏年的有\n");
	start:
		
		year++;
		
		if((year%4==0&&year%100!=0)||(year%400==0&&year%4000!=0))
			printf("%d年\t",year);
			
		if(year!=2000)
			goto start;
		
	printf("\n");
	
	system("pause");
	return 0;
 } 
