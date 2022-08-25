/* hw8_17 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Euler(int);
int find_k(int), prime(int);

int main(void){
    
    int n1 = 10, n2 = 100, n3 = 1000, n4 = 10000;
    
    printf("Euler(%d) = %lf\n", n1, Euler(n1));
    printf("Euler(%d) = %lf\n", n2, Euler(n2));
    printf("Euler(%d) = %lf\n", n3, Euler(n3));
    printf("Euler(%d) = %lf\n", n4, Euler(n4));
    
    system("pause");
    return 0;

}

double Euler(int n){

    int i, p;
    double sum = 1;
    
    for(i = 1; i <= n; i++)
    {
        p = prime(i + 1);
        sum *= ((double)p / find_k(p));
    }
    
    return sum;

}

int prime(int n){

    int i, j = 0, cont = 0;
    
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

int find_k(int n){

    int k;
    
    k = (n - 2) / 4;
    
    if(abs(n - 4 * k - 2)<abs(n - 4 * (k + 1) -2))
        return 4 * k + 2;
    
    return 4 * (k + 1) + 2;
    
}


/* Outcome

Euler(10) = 1.550760
Euler(100) = 1.566992
Euler(1000) = 1.568863
Euler(10000) = 1.570368
Press any key to continue . . .

*/
