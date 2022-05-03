/* hw5_1b */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 10, b = 20;
    
    a = a % 5;
    b = b / 6; // b 是整數，這部分除法的結果也只會取整數
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    system("pause");
    return 0;

}


/* Outcome

a = 0
b = 3
Press any key to continue . . .

*/
