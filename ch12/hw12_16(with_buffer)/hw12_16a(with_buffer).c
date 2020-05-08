/* hw12_16a(with_buffer) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	FILE *fptr;
	int randnum,i;
	int str[10];
	srand(time(NULL));
	
	fptr=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_16(with_buffer)\\rand.bin","wb");
	
	if(fptr!=NULL)
	{
		printf("亂數為:");
		for(i=0;i<10;i++)
		{
			randnum=1+rand()%16;
			printf("%3d",randnum);
			str[i]=randnum;
		}
		fwrite(str,sizeof(int),10,fptr);
		
		fclose(fptr);
		printf("\n檔案寫入完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}
