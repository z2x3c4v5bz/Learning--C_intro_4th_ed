/* hw12_18a(with_buffer) */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr;
	int i;
	int arr[]={11326,4445,15589,23740,76840};
	
	fptr=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_18(with_buffer)\\hw12_18.txt","w");
	
	if(fptr!=NULL)
	{
		printf("數字為:");
		for(i=0;i<5;i++)
			printf("%6d",arr[i]);
		printf("\n");
		
		fwrite(arr,sizeof(int),5,fptr);
		
		fclose(fptr);
		
		printf("檔案寫入完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}
