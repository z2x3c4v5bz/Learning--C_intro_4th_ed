/* hw12_4 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr1,*fptr2;
	char ch;
	int cont=0;
	
	fptr1=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_4\\welcome.txt","r");
	fptr2=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_4\\output.txt","w");
	
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
