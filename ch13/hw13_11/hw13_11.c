/* hw13_11 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

int main(void){

    #ifdef SIZE
        #if SIZE > 20
            char str[SIZE] = "Hello C language.";
        #elif ((SIZE > 10) && (SIZE < 20))
            char *str = "Welcome";
        #else
            char *str = "SIZE too small";
        #endif
    #else
        char *str = "SIZE not defined";
    #endif
    
    printf("%s\n", str);
    
    system("pause");
    return 0;
    
}


/* Output

Welcome
Press any key to continue . . .

*/
