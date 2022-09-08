/* hw10_17 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int A[5] = {74, 48, 30, 17, 62};
    int i, max, min;
    min = max = 0;
    
    for(i = 0; i < 5; i++)
    {
        if(*(A + i) > *(A + max))
            max = i;
        if(*(A + i) < *(A + max))
            min = i;
    }
    
    printf("The index of maximum value in array A is %d\n", max);
    printf("The index of minimum value in array A is %d\n", min);
    
    system("pause");
    return 0;

}


/* Outcome

The index of maximum value in array A is 0
The index of minimum value in array A is 4
Press any key to continue . . .

*/
