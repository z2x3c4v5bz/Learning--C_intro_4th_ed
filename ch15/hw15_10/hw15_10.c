/* hw15_10 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 8
void show_DecAndHexa(char *,int);
int main (void)
{
	char usero[SIZE];
	int i;
	
	printf("輸入一個八進位值 : ");
	gets(usero);
	for(i=0;usero[i]!='\0';i++);
	i-=1;
	
	show_DecAndHexa(usero,i);
	
	system("pause");
	return 0;
}
void show_DecAndHexa(char *arr,int n)
{
	int i,dec=0;
	
	printf("\n輸入的八進位值是 %s\n",arr);
	
	for(i=0;i<=n;i++)
		dec+=((arr[i]-48)*pow(8,n-i));
	
	printf("%s 的十進位是 %d\n",arr,dec);
	printf("%s 的十六進位是 %x\n\n",arr,dec);
}


/*

輸入一個八進位值 : 147

輸入的八進位值是 147
147 的十進位是 103
147 的十六進位是 67

Press any key to continue . . .

*/
