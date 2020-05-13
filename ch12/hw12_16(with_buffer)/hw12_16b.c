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
	
	fptr=fopen("rand.bin","rb");
	
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


/*

數列為:  1  2 15  4  2  5 10  1 10  1
檔案讀取完成!!
平均值為5.10
最大值為15
Press any key to continue . . .

*/
