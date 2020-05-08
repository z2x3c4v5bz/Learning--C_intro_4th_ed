/* hw10_21 */
#include <stdio.h>
#include <stdlib.h>
void display(char *ptr,int n);
int main(void)
{
	char str[]="Hello world!";
	int user_n;
	
	printf("str[]=%s\n",str);
	
	do
	{
	printf("Enter a number(>0): ");
	scanf("%d",&user_n);
	}while(user_n<=0);
	
	display(str,user_n);
	
	system("pause");
	return 0;
}

void display(char *ptr,int n)
{
	printf("str[%d]=",n);
	ptr+=(n-1);
	printf("%s\n",ptr);
}
