/* hw12_12 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{
	int arr[]={12, 4, 5, 6};
	int a=12,b=16;
	int f1;
	
	f1=open("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_12\\hw12_12.bin",O_CREAT|O_WRONLY|O_BINARY,S_IWRITE);
	
	if(f1!=-1)
	{
		write(f1,arr,sizeof(arr));
		write(f1,&a,sizeof(a));
		write(f1,&b,sizeof(b));
		close(f1);
		printf("資料已寫入檔案!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}

