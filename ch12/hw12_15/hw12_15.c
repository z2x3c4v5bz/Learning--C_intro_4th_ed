/* hw12_15 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr;
	int arr[4];
	int a,b,i;
	
	fptr=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_14\\hw12_14.bin","rb");
	
	if(fptr!=NULL)
	{
		fread(arr,sizeof(int),4,fptr);
		fread(&a,sizeof(int),1,fptr);
		fread(&b,sizeof(int),1,fptr);
		fclose(fptr);
		
		for(i=0;i<4;i++)
			printf("arr[%d]=%d\n",i,arr[i]);
		
		printf("a=%d\n",a);
		printf("b=%d\n",b);
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}
