/* hw11_1 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    struct data
    {
        int num;
        char ch;
        double dist;
    }aaa;
    
    printf("aaa 佔了 %d 個位元組\n", sizeof(aaa));
    
    system("pause");
    return 0;

}


/* Output

aaa 佔了 16 個位元組
Press any key to continue . . .

*/
