/* hw8_5 */
#include <stdio.h>
#include <stdlib.h>

int mod(int, int);

int main(void){

    int x = 17, y = 5;
    
    printf("%d 與 %d 的餘數 = %d\n", x, y, mod(x, y));
    
    system("pause");
    return 0;
    
}

int mod(int x, int y){

    return x - y * (x / y);

}


/* Outcome

17 與 5 的餘數 = 2
Press any key to continue . . .

*/
