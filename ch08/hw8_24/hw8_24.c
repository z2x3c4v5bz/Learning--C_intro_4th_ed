/* hw8_24 */
#include <stdio.h>
#include <stdlib.h>

void counter(void);

int main(void){

    counter();
    counter();
    
    system("pause");
    return 0;

}

void counter(void){

    static int cont = 0;
    
    printf("counter() 已經被呼叫 %d 次了...\n", ++cont);
    
}


/* Outcome

counter() 已經被呼叫 1 次了...
counter() 已經被呼叫 2 次了...
Press any key to continue . . .

*/
