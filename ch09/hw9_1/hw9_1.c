/* hw9_1 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){

    int arr[SIZE];
    int i;
    
    for(i = 0; i < SIZE; i++)
        arr[i] = i + 1;
    
    for(i = 0; i < SIZE; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    
    system("pause");
    return 0;
    
}


/* Outcome

arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
Press any key to continue . . .

*/
