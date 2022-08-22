/* hw7_8 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    
    printf("1 到 100 間能被 3 與 7 整除的數有:\n");
    
    for(i = 1; i <= 100; i++)
        if(i % 3 == 0 && i % 7 == 0)
            printf("%d  ", i);
    
    printf("\n");
    
    system("pause");
    return 0;

}


/* Outcome

1 到 100 間能被 3 與 7 整除的數有:
21  42  63  84
Press any key to continue . . .

*/
