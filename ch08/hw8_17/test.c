#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int prime(int),find_k(int);

int main(void)
{
	clock_t start,end;
	double cpu_time_used;
	
	start=clock();
	
	int i,p,k;
	double sum=1;
	
	for(i=2;i<=10000;i++)
	{
		p=prime(i);
		k=find_k(p);
		printf("第%5d個質數是%8d，離它最近且不能被4整除的偶數是%8d，估算的Pi/2=%.8lf，估算的Pi值=%.12lf\n",i,p,k,sum*=((double)p/(double)k),2*sum);
	}
	
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	
	printf("\nCPU time = %.3lf sec.\n\n",cpu_time_used);
	
	system("pause");
	return 0;
}

int prime(int n)
{
	int i,j=0,cont=0;
	
	while(cont!=n)
	{
		j++;
		for(i=1;i<=(int)pow(j,0.5);i++)
		{
			if(j%i==0&&i!=1)
				break;
			else if(j!=1&&i==(int)pow(j,0.5))
				cont+=1;
		}
	}
	return j;
}

int find_k(int n)
{
	int k;
	
	k=(n-2)/4;
	
	if(abs(n-4*k-2)<abs(n-4*(k+1)-2))
		return 4*k+2;
	
	return 4*(k+1)+2;
}
