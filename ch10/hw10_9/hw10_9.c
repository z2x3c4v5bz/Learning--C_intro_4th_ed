/* hw10_9 */
#include <stdio.h>
#include <stdlib.h>

void address(float *);

int main(void){

    float pi = 3.14f;
    float *ptr = &pi;
    
    address(&pi);
    address(ptr);
    
    system("pause");
    return 0;

}

void address(float *p1){

    printf("於位址 %p 內，儲存的變數內容為 %.2f\n", p1, *p1);

}


/* Outcome

於位址 000000000061FE14 內，儲存的變數內容為 3.14
於位址 000000000061FE14 內，儲存的變數內容為 3.14
Press any key to continue . . .

*/
