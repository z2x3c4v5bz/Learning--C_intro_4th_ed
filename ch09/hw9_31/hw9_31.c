/* hw9_31 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10

int main(void)
{
	char arr1[MAX][LENGTH]={"Tom","Lily","James Lee"};
	char arr2[MAX][LENGTH];
	int i,j;
	
	for(i=0;i<MAX;i++)
		for(j=0;j<LENGTH;j++)
			arr2[i][j]=arr1[i][j];
	
	for(i=0;i<MAX;i++)
		printf("arr2[%d]=%s\n",i,arr2[i]);
	
	system("pause");
	return 0;
}
