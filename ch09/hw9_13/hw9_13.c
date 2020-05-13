/* hw9_13 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 6

int main(void)
{
	int data[ROW][COL]={{1,33,21,56,45,33},{2,77,33,68,45,23},{3,43,55,43,67,65}};
	int price[]={12,16,10,14,15};
	int i,j,sum=0,max=0;
	int manarr[ROW],proarr[COL-1];
	int best_saleman=1;
	char best_product='A';
	char product_name[]={'A','B','C','D','E'};
	
	puts("某公司有A、B、C、D和E等五種產品，其單價個別為12、16、10、14與15元；該公司三位銷售員某月份銷售量如下 : \n");
	puts("銷售員	產品A	產品B	產品C	產品D	產品E");
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%5d\t",data[i][j]);
			if(j!=0)
				sum+=(data[i][j]*price[j-1]);
			
		}
		if(sum>max)
		{
			max=sum;
			best_saleman=i+1;
		}
		manarr[i]=sum;
		sum=0;
		puts("");
	}
	
	max=sum=0;
	
	for(j=1;j<COL;j++)
	{
		for(i=0;i<ROW;i++)
			sum+=(data[i][j]*price[j-1]);
		if(sum>max)
		{
			max=sum;
			best_product=product_name[j-1];
		}
		proarr[j-1]=sum;
		sum=0;
	}
	
	puts("");
	
	puts("(a)");
	for(i=0;i<ROW;i++)
		printf("銷售員%d號的銷售總金額為 : %d元\n",i+1,manarr[i]);
	puts("");
	
	puts("(b)");
	for(j=0;j<COL-1;j++)
		printf("產品%c的銷售金額為 : %d元\n",product_name[j],proarr[j]);
	puts("");
	
	puts("(c)");
	printf("最好業績的銷售員為%d號\n\n",best_saleman);
	
	puts("(d)");
	printf("銷售金額最多的產品為產品%c\n\n",best_product);
	
	system("pause");
	return 0;
}


/*

某公司有A、B、C、D和E等五種產品，其單價個別為12、16、10、14與15元；該公司三位銷售員某月份銷售量如下 : 

銷售員  產品A   產品B   產品C   產品D   產品E
    1      33      21      56      45      33
    2      77      33      68      45      23
    3      43      55      43      67      65

(a)
銷售員1號的銷售總金額為 : 2417元
銷售員2號的銷售總金額為 : 3107元
銷售員3號的銷售總金額為 : 3739元

(b)
產品A的銷售金額為 : 1836元
產品B的銷售金額為 : 1744元
產品C的銷售金額為 : 1670元
產品D的銷售金額為 : 2198元
產品E的銷售金額為 : 1815元

(c)
最好業績的銷售員為3號

(d)
銷售金額最多的產品為產品D

Press any key to continue . . .

*/
