/* hw12_13 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{
	int arr[4];
	int a,b,i;
	int f1;
	
	f1=open("C:\\Users\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_12\\hw12_12.bin",O_RDONLY|O_BINARY);

	if(f1!=-1)
	{
		while(!eof(f1))
		{
			read(f1,arr,sizeof(arr));
			read(f1,&a,sizeof(a));
			read(f1,&b,sizeof(b));
			
			for(i=0;i<4;i++)
				printf("arr[%d]=%d\n",i,arr[i]);
			printf("a=%d\n",a);
			printf("b=%d\n",b);
		}
		close(f1);
		printf("資料讀取完成!!\n");
	}
	else
		printf("開啟檔案失敗!!\n");
	
	system("pause");
	return 0;
}


/*

arr[0]=12
arr[1]=4
arr[2]=5
arr[3]=6
a=12
b=16
資料讀取完成!!
Press any key to continue . . .

*/
