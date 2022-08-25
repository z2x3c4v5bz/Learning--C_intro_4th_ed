/* hw8_36a */
#include <stdio.h>
#include <stdlib.h>
#include "../hw8_36/my_math.h"

int main(void){

    int n;
    
    printf("輸入一個整數 n 以計算平方值、三次方值及絕對值 : ");
    scanf("%d", &n);
    
    printf("SQUARE(%d) = %d\n", n, SQUARE(n));
    printf("CUBIC(%d) = %d\n", n, CUBIC(n));
    printf("ABS(%d) = %d\n", n, ABS(n));
    
    system("pause");
    return 0;

}


/* Outcome

輸入一個整數 n 以計算平方值、三次方值及絕對值 : 5
SQUARE(-5)= 2 5
CUBIC(-5) = -125
ABS(-5) = 5
Press any key to continue . . .

*/
