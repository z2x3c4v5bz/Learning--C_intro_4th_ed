/* hw9_4 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(void){

    int i;
    int arr[SIZE];
    
    for(i = 0; i < SIZE; i++)
    {
        printf("輸入第 %d 個整數 : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < SIZE; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    
    system("pause");
    return 0;
    
}


/* Outcome

輸入第 1 個整數 : 2
輸入第 2 個整數 : 4
輸入第 3 個整數 : 6
arr[0] = 2
arr[1] = 4
arr[2] = 6
Press any key to continue . . .

*/
