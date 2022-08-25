/* hw8_19 */
#include <stdio.h>
#include <stdlib.h>

double rpower(double,int);

int main(void){

    int n = 3;
    double b = 2.0;
    
    printf("%.1lf 的 %d 次方 = %lf\n", b, n, rpower(b, n));
    
    system("pause");
    return 0;
    
}

double rpower(double b, int n){

    if(n == 0)
        return 1;
    else if(n > 0)
        return b * rpower(b, n - 1);
        else
            return 1 / b * rpower(b, n + 1);
            
}


/* Outcome

2.0 的 3 次方 = 8.000000
Press any key to continue . . .

*/
