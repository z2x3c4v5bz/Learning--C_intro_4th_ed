/* hw8_11c */
#include <stdio.h>
#include <stdlib.h>
int find(int);
int main(void)
{
	int i;
	
	printf("孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。\n");
	for(i=1;i<=12;i++)
		printf("孫子問題的第%2d個數是%5d\n",i,find(i));
	
	system("pause");
	return 0;
}
int find(int n)
{
	int cont=0,i=1;
	
	while(cont!=n)
	{
		if(i%3==2&&i%5==3&&i%7==2)
			cont+=1;
		
		i++;
	}
	
	return i-1;
}
