/* hw9_24 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

void count(char str[],int cont[]);

int main(void)
{
	char userstr[SIZE];
	int aeiou[5]={0};
	
	printf("Enter a string : ");
	gets(userstr);
	
	count(userstr,aeiou);
	
	printf("This string have %d 'a', %d 'e', %d 'i', %d 'o' ,and %d 'u'.\n",aeiou[0],aeiou[1],aeiou[2],aeiou[3],aeiou[4]);
	
	system("pause");
	return 0;
}

void count(char str[],int cont[])
{
	int i=0;
	
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case 'a':
			case 'A':
				cont[0]+=1;
				break;
			case 'e':
			case 'E':
				cont[1]+=1;
				break;
			case 'i':
			case 'I':
				cont[2]+=1;
				break;
			case 'o':
			case 'O':
				cont[3]+=1;
				break;
			case 'u':
			case 'U':
				cont[4]+=1;
				break;
			default:
				break;
		}
		i++;
	}
}


/*

Enter a string : i love you
This string have 0 'a', 1 'e', 1 'i', 2 'o' ,and 1 'u'.
Press any key to continue . . .

*/
