/* hw7_5 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int i, sum = 0;
    
    for(i = 1; i <= 100; i++)
        if(i % 3 == 0 && i % 8 == 0)
            sum += i;
    
    printf("1 ~ 100 間能同時被 3 與 8 整除的數之總合為: %d\n", sum);
    
    system("pause");
    return 0;

}


/* Outcome

1 ~ 100 間能同時被 3 與 8 整除的數之總合為: 240
Press any key to continue . . .

*/
