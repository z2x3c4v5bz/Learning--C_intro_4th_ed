/* hw8_30 */
#include <stdio.h>
#include <stdlib.h>

void add10(void);
int a = 3, b = 5;

int main(void){

    printf("呼叫函數 add10() 之前: ");
    printf("a = %d, b = %d\n", a, b);
    add10();
    printf("呼叫函數 add10() 之後: ");
    printf("a = %d, b = %d\n", a, b);
    
    system("pause");
    return 0;

}

void add10(void){

    a = a + 10;
    b = b + 10;

}


/* Outcome

呼叫函數 add10() 之前: a = 3, b = 5
呼叫函數 add10() 之後: a = 13, b = 15
Press any key to continue . . .

*/
