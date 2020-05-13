/* hw12_14 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr;
	int arr[]={12, 4, 5, 6};
	int a=12,b=16;
	
	fptr=fopen("hw12_14.bin","wb");
	
	if(fptr!=NULL)
	{
		fwrite(arr,sizeof(int),4,fptr);
		fwrite(&a,sizeof(int),1,fptr);
		fwrite(&b,sizeof(int),1,fptr);
		
		fclose(fptr);
		printf("檔案寫入完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	
	system("pause");
	return 0;
}


/*

檔案寫入完成!!
Press any key to continue . . .

*/
