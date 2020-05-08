/* hw12_3 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr;
	char str[5];
	
	fptr=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_3\\welcome.txt","r");
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
