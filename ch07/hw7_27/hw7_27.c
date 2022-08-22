/* hw7_27 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i, j, k;
    
    for(i = 1; i <= 5; i++)
    {
        j = 5;
        while(j - i != 0)
        {
            printf(" ");
            j--;
        }
        
        k = 1;
        while(k <= j)
        {
            printf("%d", k);
            k++;
        }
        
        printf("\n");
    }
    
    system("pause");
    return 0;
    
}


/* Outcome

    1
   12
  123
 1234
12345
Press any key to continue . . .

*/
