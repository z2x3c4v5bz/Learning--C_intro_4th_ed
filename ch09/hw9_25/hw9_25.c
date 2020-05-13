/* hw9_25 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

void toLower(char str[]);

int main(void)
{
	char userstr[SIZE];
	
	printf("Enter a string : ");
	
	gets(userstr);
	toLower(userstr);
	
	printf("字串內的所有字母已經被轉換為小寫字母，如下:\n");
	printf("%s\n",userstr);
	
	system("pause");
	return 0;
}

void toLower(char str[])
{
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>=65&&str[i]<=90)
			str[i]+=32;
		i++;
	}
}


/*

Enter a string : I Love YOU
字串內的所有字母已經被轉換為小寫字母，如下:
i love you
Press any key to continue . . .

*/
