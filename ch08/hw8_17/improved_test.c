#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 50000000

unsigned long int prime(unsigned long int),find_k(unsigned long int);

int main(void)
{
	clock_t start,end;
	double cpu_time_used;
	
	start=clock();
	
	unsigned long int i,p,k;
	double sum=1;
	
	for(i=2;i<=SIZE;i++)
	{
		p=prime(i);
		k=find_k(p);
		printf("第%8ld個質數是%10ld，離它最近且不能被4整除的偶數是%10ld，估算的Pi/2=%.8lf，估算的Pi值=%.11lf\n",i,p,k,sum*=((double)p/(double)k),2*sum);
	}
	
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	
	printf("\nCPU time = %.3lf sec.\n\n",cpu_time_used);
	
	system("pause");
	return 0;
}

unsigned long int prime(unsigned long int n)
{
	static unsigned long int j=0,cont=0;
	unsigned long int i;
	
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

unsigned long int find_k(unsigned long int n)
{
	unsigned long int k;
	
	k=(n-2)/4;
	
	if(abs(n-4*k-2)<abs(n-4*(k+1)-2))
		return 4*k+2;
	
	return 4*(k+1)+2;
}
