/* hw7_14 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int line = 3000, day = 0;
    
    while(line > 5)
    {
        line /= 2;
        day += 1;
    }
    
    printf("需要 %d 天。\n", day + 1);
    
    system("pause");
    return 0;

}


/* Outcome

需要 10 天。
Press any key to continue . . .

*/
