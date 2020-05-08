/* hw9_27 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

void reverse(char str[]);
int length(char str[]);

int main(void)
{
	char userstr[SIZE];
	
	printf("Write something here : ");
	gets(userstr);
	
	reverse(userstr);
	
	system("pause");
	return 0;
}

void reverse(char str[])
{
	int n;
	n=length(str);
	char temp[n+1];
	int i=0;
	
	while(str[i]!='\0')
	{
		temp[n-i-1]=str[i];
		i++;
	}
	
	temp[n]='\0';
	
	puts(temp);
}

int length(char str[])
{
	int i=0;
	
	while(str[i]!='\0')
		i++;
	
	return i;
}
