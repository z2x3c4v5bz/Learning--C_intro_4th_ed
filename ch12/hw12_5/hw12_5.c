/* hw12_5 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr1,*fptr2;
	char str[5];
	
	fptr1=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_5\\welcome.txt","r");
	fptr2=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_5\\output.txt","w");
	
	if((fptr1!=NULL)&&(fptr2!=NULL))
	{
		while(fgets(str,5,fptr1)!=NULL)
			fputs(str,fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("The file has been copied already!\n");
	}
	else
		printf("Filed to open the file!\n");
	
	system("pause");
	return 0;
}
