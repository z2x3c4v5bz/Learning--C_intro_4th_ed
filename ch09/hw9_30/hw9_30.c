/* hw9_30 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10

void string_cpy(char arr1[MAX][LENGTH],char arr2[MAX][LENGTH]);

int main(void)
{
	char str1[MAX][LENGTH]={"Tom","Lily","James Lee"};
	char str2[MAX][LENGTH];
	int i;
	
	string_cpy(str1,str2);
	
	for(i=0;i<MAX;i++)
		printf("str2[%d]=%s\n",i,str2[i]);
	
	system("pause");
	return 0;
}

void string_cpy(char arr1[MAX][LENGTH],char arr2[MAX][LENGTH])
{
	int i,j;
	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<LENGTH;j++)
			if(arr1[i][j]=='\0')
				break;
			else
				arr2[i][j]=arr1[i][j];
		arr2[i][j]='\0';
	}
}


/*

str2[0]=Tom
str2[1]=Lily
str2[2]=James Lee
Press any key to continue . . .

*/
