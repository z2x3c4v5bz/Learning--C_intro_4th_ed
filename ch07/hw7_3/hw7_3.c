/* hw7_3 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,sum=0,i=1;
	
	do
	{
		printf("輸入一個奇數:");
		scanf("%d",&n);
	}
	while(n%2==0||n<1);
	
	for(i=1;i<=n;i+=2)
		sum+=i;
	
	printf("從1到%d間的奇數總合為%d\n",n,sum);
	
	system("pause");
	return 0;
}


/*

輸入一個奇數:33
從1到33間的奇數總合為289
Press any key to continue . . .

*/
