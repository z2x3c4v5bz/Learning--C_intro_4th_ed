/* hw7_3 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n, sum = 0, i = 1;
    
    do
    {
        printf("輸入一個奇數: ");
        scanf("%d", &n);
    }
    while(n % 2 == 0 || n < 1);
    
    for(i = 1; i <= n; i += 2)
        sum += i;
    
    printf("從 1 到 %d 間的奇數總合為 %d\n", n, sum);
    
    system("pause");
    return 0;
    
}


/* Outcome

輸入一個奇數: 33
從 1 到 33 間的奇數總合為 289
Press any key to continue . . .

*/
