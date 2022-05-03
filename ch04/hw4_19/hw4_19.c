/* hw4_19 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){

    int num;
    char ch;
    
    printf("請輸入一個整數: ");
    scanf("%d", &num);
    fflush(stdin);
    
    printf("請輸入一個字元: ");
    ch = getchar();
    printf("num = %d, ASCII of ch = %d\n", num, ch);
    
    system("pause");
    return 0;

}


/* Outcome

請輸入一個整數: 53
請輸入一個字元: a
num = 53, ASCII of ch = 97
Press any key to continue . . .

*/
