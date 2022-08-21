/* hw6_21 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){

    char ch;
    
    printf("輸入一個字元 a 或 b: ");
    ch = getche();
    putchar('\n');
    
    switch(ch)
    {
        case 'a':
            printf("您輸入的是 %c\n", ch);
            break;
        case 'b':
            printf("您輸入的是 %c\n", ch);
            break;
        default:
            printf("您輸入的不是 a 也不是 b。\n");
    }
    
    system("pause");
    return 0;

}


/* Outcome

輸入一個字元 a 或 b: c
您輸入的不是 a 也不是 b。
Press any key to continue . . .

*/
