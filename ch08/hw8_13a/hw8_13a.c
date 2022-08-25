/* hw8_13a */
#include <stdio.h>
#include <stdlib.h>

double my_fun(int);
double fac(int);

int main(void){

    int n1 = 5, n2 = 8, n3 = 10;
    
    printf("my_fun(%d) = %lf\n", n1, my_fun(n1));
    printf("my_fun(%d) = %lf\n", n2, my_fun(n2));
    printf("my_fun(%d) = %lf\n", n3, my_fun(n3));
    
    system("pause");
    return 0;
    
}

double my_fun(int n){

    double sum = 0;
    int i;
    
    for(i = 1; i <= n; i++)
        sum += (1 / fac(i));
    
    return sum;

}

double fac(int a){

    int i, total = 1;
    
    for(i = 1; i <= a; i++)
        total *= i;
    
    return total;

}


/* Outcome

my_fun(5) = 1.716667
my_fun(8) = 1.718279
my_fun(10) = 1.718282
Press any key to continue . . .

*/
