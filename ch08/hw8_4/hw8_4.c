/* hw8_4 */
#include <stdio.h>
#include <stdlib.h>

double square(double);

int main(void){
    
    double num = 4;
    
    printf("%lf ^ 2 = %lf\n", num, square(num));
    
    system("pause");
    return 0;

}

double square(double n){

    return n * n;

}


/* Outcome

4.000000 ^ 2 = 16.000000
Press any key to continue . . .

*/
