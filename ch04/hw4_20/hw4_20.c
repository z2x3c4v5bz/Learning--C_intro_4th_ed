/* hw4_20 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){

    char ch;
    
    printf("請輸入一個字元: ");
    ch = getche();
    printf("\n您輸入的字元是: ");
    putchar(ch);
    putchar('\n');
    
    printf("請輸入一個字元: ");
    ch = getch();
    printf("\n您輸入的字元是: ");
    putchar(ch);
    putchar('\n');
    
    system("pause");
    return 0;

}


/* Outcome

請輸入一個字元: a
您輸入的字元是: a
請輸入一個字元:
您輸入的字元是: b
Press any key to continue . . .

*/
