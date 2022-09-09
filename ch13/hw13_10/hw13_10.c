/* hw13_10 */
#include <stdio.h>
#include <stdlib.h>
#define STR "Hello C language.\n"

int main(void){

    #ifndef STR
        printf("STR 沒有被定義\n");
    #else
        printf(STR);
    #endif
    
    system("pause");
    return 0;

}


/* Output

Hello C language.
Press any key to continue . . .

*/
