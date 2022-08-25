/* hw8_14b */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(double,int);
double fac(int);

int main(void){

    int n;
    double x = 0.1;
    
    for(n = 1; n <= 25; n++)
        printf("my_fun(%.1lf, %d) = %lf\n", x, n, my_fun(x, n));
    
    system("pause");
    return 0;

}

double my_fun(double x, int n){

    double sum = 0;
    int i;
    
    for(i = 1; i <= n; i++)
        sum += pow(x, i) / fac(i);
    
    return sum;

}

double fac(int n){

    int i;
    double sum = 1;
    
    for(i = 1; i <= n; i++)
        sum *= i;
    
    return sum;

}


/* Outcome

my_fun(0.1, 1) = 0.100000
my_fun(0.1, 2) = 0.105000
my_fun(0.1, 3) = 0.105167
my_fun(0.1, 4) = 0.105171
my_fun(0.1, 5) = 0.105171
my_fun(0.1, 6) = 0.105171
my_fun(0.1, 7) = 0.105171
my_fun(0.1, 8) = 0.105171
my_fun(0.1, 9) = 0.105171
my_fun(0.1, 10) = 0.105171
my_fun(0.1, 11) = 0.105171
my_fun(0.1, 12) = 0.105171
my_fun(0.1, 13) = 0.105171
my_fun(0.1, 14) = 0.105171
my_fun(0.1, 15) = 0.105171
my_fun(0.1, 16) = 0.105171
my_fun(0.1, 17) = 0.105171
my_fun(0.1, 18) = 0.105171
my_fun(0.1, 19) = 0.105171
my_fun(0.1, 20) = 0.105171
my_fun(0.1, 21) = 0.105171
my_fun(0.1, 22) = 0.105171
my_fun(0.1, 23) = 0.105171
my_fun(0.1, 24) = 0.105171
my_fun(0.1, 25) = 0.105171
Press any key to continue . . .

*/
