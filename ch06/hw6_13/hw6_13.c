/* hw6_13 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int month;
    
    printf("輸入月份: ");
    scanf("%d", &month);
    
    if(month >= 3 && month <= 5)
        printf("屬於春季。\n");
    else if(month >= 6 && month <= 8)
            printf("屬於夏季。\n");
        else if(month >= 9 && month <= 11)
                printf("屬於秋季。\n");
            else if(month == 12 || month == 1 || month == 2)
                    printf("屬於冬季。\n");
                else
                    printf("不屬於地球的月份。\n");
    
    system("pause");
    return 0;

}


/* Outcome

輸入月份: 6
屬於夏季。
Press any key to continue . . .

*/
