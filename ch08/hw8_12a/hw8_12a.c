/* hw8_12a */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(int);

int main(void){

    int n1 = 3, n2 = 4, n3 = 5, n4 = 6;
    
    printf("my_fun(%d) = %lf\n", n1, my_fun(n1));
    printf("my_fun(%d) = %lf\n", n2, my_fun(n2));
    printf("my_fun(%d) = %lf\n", n3, my_fun(n3));
    printf("my_fun(%d) = %lf\n", n4, my_fun(n4));
    
    system("pause");
    return 0;
    
}

double my_fun(int n){

    double sum = 0;
    int i;
    
    for(i = 1; i <= n; i++)
        sum += (1 / pow(2, i));
    
    return sum;

}


/* Outcome

my_fun(3) = 0.875000
my_fun(4) = 0.937500
my_fun(5) = 0.968750
my_fun(6) = 0.984375
Press any key to continue . . .

*/
