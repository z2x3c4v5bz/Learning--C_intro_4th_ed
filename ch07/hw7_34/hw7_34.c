/* hw7_34 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i = 1;
    
    while(1)
    {
        if(i % 3 == 1 && i % 5 == 3 && i % 7 == 2)
        {
            printf("最少有 %d 隻兔子。\n", i);
            break;
        }
        else
            i++;
    }
    
    system("pause");
    return 0;
    
}


/* Outcome

最少有 58 隻兔子。
Press any key to continue . . .

*/
