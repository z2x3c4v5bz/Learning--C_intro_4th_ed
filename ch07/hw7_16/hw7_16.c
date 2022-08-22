/* hw7_16 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    char ch;
    
    while(ch != 17 && ch != 3)
    {
        ch = getch();
        printf("ASCII of ch = %d\n", ch);
    }
    
    printf("您已按了 Ctrl + q 或 Ctrl + c...\n");
    
    system("pause");
    return 0;
    
}


/* Outcome

ASCII of ch = 115
ASCII of ch = 54
ASCII of ch = 3
您已按了 Ctrl + q 或 Ctrl + c...
Press any key to continue . . .

*/
