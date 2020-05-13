/* hw14_7 */
#include<stdio.h>
#include<stdlib.h>

int insertElement(int *arr,int item,int pos,int length);

int main(void)
{
	int length=4,i;
	int arr[10]={12,56,37,63};
	
	length=insertElement(arr,10,2,length);
	
	for(i=0;i<length;i++)
		printf("%3d",arr[i]);
	
	printf("\n");
	
	system("pause");
	return 0;
}

int insertElement(int *arr,int item,int pos,int length)
{
	int i;
	
	for(i=length;i>=pos;i--)
		arr[i]=arr[i-1];
	arr[pos]=item;
	
	return length+1;
}


/*

 12 56 10 37 63
Press any key to continue . . .

*/
