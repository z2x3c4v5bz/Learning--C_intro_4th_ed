/* hw12_7 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	fptr=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_7\\output.txt","r");
	
	if(fptr!=NULL)
	{
		while(!feof(fptr))
		{
			bytes=fread(str,sizeof(char),MAX,fptr);
			if(bytes<MAX)
				str[bytes]='\0';
			puts(str);
		}
		fclose(fptr);
	}
	else
		printf("Filed to open the file.\n");
	
	system("pause");
	return 0;
}
