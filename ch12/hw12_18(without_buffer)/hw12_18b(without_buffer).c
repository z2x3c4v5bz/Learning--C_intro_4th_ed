/* hw12_18b(without_buffer) */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{
	int f1;
	int i;
	int arr[]={11326,4445,15589,23740,76840};
	
	f1=open("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_18(without_buffer)\\hw12_18.bin",O_CREAT|O_WRONLY|O_BINARY);
	
	if(f1!=-1)
	{
		printf("數列為:");
		for(i=0;i<5;i++)
			printf("%6d",arr[i]);
		printf("\n");
		
		write(f1,arr,sizeof(arr));
		
		close(f1);
		
		printf("資料已寫入檔案!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}
