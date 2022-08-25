#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 10000

unsigned long int prime(unsigned long int), find_k(unsigned long int);

int main(void){

    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    
    unsigned long int i, p, k;
    double sum = 1;
    
    for(i = 2; i <= SIZE; i++)
    {
        p = prime(i);
        k = find_k(p);
        printf("第%8ld 個質數是%10ld，離它最近且不能被 4 整除的偶數是%10ld，估算的 Pi / 2 =%.8lf，估算的 Pi 值 =%.11lf\n", i, p, k, sum *= ((double)p / (double)k), 2 * sum);
    }
    
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    printf("\nCPU time = %.3lf sec.\n\n", cpu_time_used);
    
    system("pause");
    return 0;

}

unsigned long int prime(unsigned long int n){

    static unsigned long int j = 0, cont = 0;
    unsigned long int i;
    
    while(cont != n)
    {
        j++;
        for(i = 1; i <= (int)pow(j, 0.5); i++)
        {
            if(j % i == 0 && i != 1)
                break;
            else if(j != 1 && i == (int)pow(j, 0.5))
                cont += 1;
        }
    }
    return j;

}

unsigned long int find_k(unsigned long int n){

    unsigned long int k;
    
    k = (n - 2) / 4;
    
    if(abs(n - 4 * k - 2) < abs(n - 4 * (k + 1) - 2))
        return 4 * k + 2;
    
    return 4 * (k + 1) + 2;

}


/* Outcome

...
第    9995 個質數是    104701，離它最近且不能被 4 整除的偶數是    104702，估算的 Pi / 2 = 1.57033843，估算的 Pi 值 = 3.14067686648
第    9996 個質數是    104707，離它最近且不能被 4 整除的偶數是    104706，估算的 Pi / 2 = 1.57035343，估算的 Pi 值 = 3.14070686168
第    9997 個質數是    104711，離它最近且不能被 4 整除的偶數是    104710，估算的 Pi / 2 = 1.57036843，估算的 Pi 值 = 3.14073685601
第    9998 個質數是    104717，離它最近且不能被 4 整除的偶數是    104718，估算的 Pi / 2 = 1.57035343，估算的 Pi 值 = 3.14070686368
第    9999 個質數是    104723，離它最近且不能被 4 整除的偶數是    104722，估算的 Pi / 2 = 1.57036843，估算的 Pi 值 = 3.14073685458
第   10000 個質數是    104729，離它最近且不能被 4 整除的偶數是    104730，估算的 Pi / 2 = 1.57035343，估算的 Pi 值 = 3.14070686569

CPU time = 6.815 sec.

Press any key to continue . . .

*/
