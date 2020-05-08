/* hw12_16a(without_buffer) */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#include <time.h>
int main(void)
{
	int f1;
	int randnum,i;
	int arr[10];
	srand(time(NULL));
	
	f1=open("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_16(without_buffer)\\rand.bin",O_CREAT|O_WRONLY|O_BINARY,S_IWRITE);
	
	if(f1!=-1)
	{
		printf("亂數為:");
		for(i=0;i<10;i++)
		{
			randnum=1+rand()%16;
			arr[i]=randnum;
			printf("%3d",arr[i]);
		}
		
		write(f1,arr,sizeof(arr));
		close(f1);
		printf("\n檔案寫入完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}
