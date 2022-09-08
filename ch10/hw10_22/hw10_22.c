/* hw10_22 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    char str[2][20] = {"Time is money", "Have a good time"};
    
    puts(*(str));
    puts(*(str + 1));
    
    system("pause");
    return 0;
    
}


/* Outcome

Time is money
Have a good time
Press any key to continue . . .

*/
