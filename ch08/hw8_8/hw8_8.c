/* hw8_8 */
#include <stdio.h>
#include <stdlib.h>

double f(double);

int main(void){
    
    double n1 = -3.2;
    double n2 = -2.1;
    double n3 = 0;
    double n4 = 2.1;
    
    printf("Suppose a function f(x) = 3x ^ 3 + 2x - 1, f(-3.2) = ? f(-2.1) = ? f(0) = ? f(2.1) = ?\n");
    printf("f(-3.2) = %lf\n", f(n1));
    printf("f(-2.1) = %lf\n", f(n2));
    printf("f(0) = %lf\n", f(n3));
    printf("f(2.1) = %lf\n", f(n4));
    
    system("pause");
    return 0;

}

double f(double x){

    return 3 * (x * x * x) + 2 * x - 1;

}


/* Outcome

Suppose a function f(x) = 3x ^ 3 + 2x - 1, f(-3.2) = ? f(-2.1) = ? f(0) = ? f(2.1) = ?
f(-3.2) = -105.704000
f(-2.1) = -32.983000
f(0) = -1.000000
f(2.1) = 30.983000
Press any key to continue . . .

*/
