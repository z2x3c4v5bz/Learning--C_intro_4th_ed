/* hw12_11b */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{
	int num,sum=0;
	int f1;
	char buffer[3];
	
	f1=open("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_11\\rand.txt",O_RDONLY|O_TEXT);
	
	if(f1!=-1)
	{
		printf("亂數為:");
		while(!eof(f1))
		{
			read(f1,buffer,3);
			num=atoi(buffer);
			sum+=num;
			printf("%3d",num);
		}
		close(f1);
		printf("\n檔案讀取完成!!\n");
		printf("Average=%.2f\n",(float)sum/10);
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}
