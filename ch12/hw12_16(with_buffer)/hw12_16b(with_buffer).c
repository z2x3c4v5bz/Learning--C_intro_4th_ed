/* hw12_16b(with_buffer) */
#include <stdio.h>
#include <stdlib.h>
struct data
{
	int MAXIMUM;
	float AVERAGE;
};
struct data calcu(int arr[]);
int main(void)
{
	FILE *fptr;
	int i;
	int arr[10];
	struct data tmp={0,0.0};
	
	fptr=fopen("C:\\Users\\Documents\\C語言教學手冊_第四版\\習題練習\\ch12\\hw12_16(with_buffer)\\rand.bin","rb");
	
	if(fptr!=NULL)
	{
		fread(arr,sizeof(int),10,fptr);
		
		tmp=calcu(arr);
		
		printf("數列為:");
		for(i=0;i<10;i++)
			printf("%3d",arr[i]);
		
		printf("\n檔案讀取完成!!\n");
		printf("平均值為%.2f\n",tmp.AVERAGE);
		printf("最大值為%d\n",tmp.MAXIMUM);
		
		fclose(fptr);
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}

struct data calcu(int arr[])
{
	int i;
	int max=arr[0];
	int sum=0;
	struct data tmp;
	
	for(i=0;i<10;i++)
	{
		if(max<arr[i])
			max=arr[i];
		sum+=arr[i];
	}
	
	tmp.AVERAGE=((float)sum/10);
	tmp.MAXIMUM=max;
	
	return tmp;
}
