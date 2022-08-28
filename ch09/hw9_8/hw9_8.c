/* hw9_8 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void){
    
    int arr[SIZE] = {10, 27, 18, 35, 0, -35, -3, -17, 20, 3};
    int i;
    int max = 0, min = 0;
    
    printf("arr[] 中的所有值 : ");
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
        if(i < SIZE - 1 && arr[max] < arr[i + 1])
            max = i + 1;
        if(i < SIZE - 1 && arr[min] > arr[i + 1])
            min = i + 1;
    }
    
    printf("\narr[] 中最大值的索引值為 %d；最小為 %d。\n", max, min);
    
    system("pause");
    return 0;

}


/* Outcome

arr[] 中的所有值 : 10 27 18 35 0 -35 -3 -17 20 3
arr[] 中最大值的索引值為 3；最小為 5。
Press any key to continue . . .

*/
