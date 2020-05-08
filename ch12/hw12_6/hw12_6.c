/* hw12_6 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80
int main(void)
{
	FILE *fptr;
	char str[MAX],ch;
	int i=0;
	
	fptr=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_6\\output.txt","a");
	
	if(fptr!=NULL)
	{
		printf("Please enter a string and end entry with ENTER:\n");
		while((ch=getche())!=ENTER&&i<MAX)
			str[i++]=ch;
		putc('\n',fptr);
		fwrite(str,sizeof(char),i,fptr);
		fclose(fptr);
		printf("\nProcess are already done.\n");
	}
	else
		printf("Filed to open the file.\n");
	
	system("pause");
	return 0;
}
