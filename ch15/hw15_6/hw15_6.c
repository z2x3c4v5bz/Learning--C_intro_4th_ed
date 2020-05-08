/* hw15_6 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void show_binary(int);
int main(void)
{
	printf("640的二進位為: ");
	show_binary(640);
	
	system("pause");
	return 0;
}
void show_binary(int num)
{
	int i,b[SIZE]={0};
	for(i=1;i<=SIZE;i++)
	{
		b[SIZE-i]=num%2;
		num/=2;
	}
	for(i=0;i<SIZE;i++)
		printf("%d",b[i]);
	printf("\n");
}
