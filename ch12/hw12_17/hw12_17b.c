/* hw12_17b */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{
	int f1;
	int i;
	struct data
	{
		char name[10];
		int math;
	}student[3];
	
	f1=open("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_17\\student.bin",O_RDONLY|O_BINARY);
	
	if(f1!=-1)
	{
		read(f1,&student,sizeof(student));
		for(i=0;i<3;i++)
		{
			printf("student[%d].name=%s\n",i,student[i].name);
			printf("student[%d].math=%d\n",i,student[i].math);
		}
		close(f1);
		printf("檔案讀取完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}
