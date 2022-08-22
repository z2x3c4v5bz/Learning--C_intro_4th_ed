/* hw7_17 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i = 1, sum = 0;
    
    while(i <= 10)
    {
        sum += i * i;
        printf("%d  ", i * i);
        i++;
    }
    
    printf("\n1 ~ 10 間各個數字的平方和 = %d\n", sum);
    
    system("pause");
    return 0;
    
}


/* Outcome

1  4  9  16  25  36  49  64  81  100
1 ~ 10間各個數字的平方和 = 385
Press any key to continue . . .

*/
