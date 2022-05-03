/* hw5_13 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    double mile;
    
    printf("輸入英里數: ");
    scanf("%lf", &mile);
    
    printf("公里數為: %f\n", (double)mile * 1.6);
    
    system("pause");
    return 0;

}


/* Outcome

輸入英里數: 3
公里數為: 4.800000
Press any key to continue . . .

*/
