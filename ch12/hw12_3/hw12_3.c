/* hw12_3 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr;
	char str[5];
	
	fptr=fopen("welcome.txt","r");
	if(fptr!=NULL)
	{
		while(fgets(str,5,fptr)!=NULL)
			printf("%s",str);
		printf("\n");
		fclose(fptr);
	}
	else
		printf("Failed to open the file.\n");
	
	system("pause");
	return 0;
}


/*

Welcome to the
world of C language
Press any key to continue . . .

*/
