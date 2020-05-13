/* hw12_4 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr1,*fptr2;
	char ch;
	int cont=0;
	
	fptr1=fopen("welcome.txt","r");
	fptr2=fopen("output.txt","w");
	
	if((fptr1!=NULL)&&(fptr2!=NULL))
	{
		while((ch=getc(fptr1))!=EOF)
		{
			putc(ch,fptr2);
			cont++;
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("The file has been copied already!\n");
		printf("There are %d characters in the file.\n",cont);
	}
	else
		printf("Filed to open the file!\n");
	
	system("pause");
	return 0;
}


/*

The file has been copied already!
There are 34 characters in the file.
Press any key to continue . . .

*/
