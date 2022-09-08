/* hw10_2 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    float num = 4.2f;
    int a1 = 4, a2 = 12;
    
    printf("num = 4.2, address of num is %p\n", &num);
    printf("a1 = 4, address of a1 is %p\n", &a1);
    printf("a2 = 12, address of a2 is %p\n", &a2);
    
    system("pause");
    return 0;

} 


/* Outcome

num = 4.2, address of num is 000000000061FE14
a1 = 4, address of a1 is 000000000061FE18
a2 = 12, address of a2 is 000000000061FE1C
Press any key to continue . . .

*/
