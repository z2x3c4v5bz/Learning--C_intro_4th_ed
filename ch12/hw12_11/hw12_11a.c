/* hw12_11a */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#include <time.h>
int main(void)
{
	int i,randnum;
	int f1;
	char str[3];
	srand(time(NULL));
	
	f1=open("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_11\\rand.txt",O_WRONLY|O_CREAT|O_TEXT);
	
	if(f1!=-1)
	{
		printf("亂數為:");
		for(i=0;i<10;i++)
		{
			randnum=1+rand()%64;
			printf("%3d ",randnum); 
			sprintf(str,"%d",randnum);
			write(f1,str,sizeof(str));
		}
		close(f1);
		printf("\n檔案寫入完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}
