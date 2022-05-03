/* hw5_1a */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 8;
    
    // 執行下列敘述前，因 ++a 的緣故，因此 a 會先 + 1 變成 9
    printf("a = %d\n", ++a); // 此時的 a = 9
    printf("a = %d\n", a--); // 本列敘述是 a--，因此現在 a 依然是 9
    // 執行完上列的敘述後，a 才會 - 1，所以現在 a = 8
    
    system("pause");
    return 0;

}


/* Outcome

a = 9
a = 9
Press any key to continue . . .

*/
