/* hw9_7 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){

    float arr[SIZE];
    int i;
    float sum = 0.0f;
    
    printf("---------輸入五個浮點數以計算平均---------\n");
    
    for(i = 0; i < SIZE; i++)
    {
        printf("輸入第 %d 個浮點數 : ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    
    printf("Average = %f\n", sum / 5);
    
    system("pause");
    return 0;
    
} 


/* Outcome

---------輸入五個浮點數以計算平均---------
輸入第1個浮點數 : 0.5
輸入第2個浮點數 : 1.5
輸入第3個浮點數 : 2.5
輸入第4個浮點數 : 3.5
輸入第5個浮點數 : 4.5
Average = 2.500000
Press any key to continue . . .

*/
