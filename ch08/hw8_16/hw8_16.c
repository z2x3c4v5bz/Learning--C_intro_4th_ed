/* hw8_16 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_k(int);

int main(void)
{
	int n;
	
	printf("輸入一個整數n，將從4k+2找到一個最接近n的k值 : ");
	scanf("%d",&n);
	printf("k值為%d\n",find_k(n));
	
	system("pause");
	return 0;
}

int find_k(int n)
{
	int k=1,out=2;
	
	while(1)
	{
		if(abs(out-n)<=abs((4*k+2)-n))
			return k-1;
		else
		{
			out=4*k+2;
			k++;
		}
	}
}


/*

輸入一個整數n，將從4k+2找到一個最接近n的k值 : 360
k值為89
Press any key to continue . . .

*/
