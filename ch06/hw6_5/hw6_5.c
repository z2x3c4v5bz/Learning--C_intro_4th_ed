/* hw6_5 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int w;
    
    printf("輸入整數體重: ");
    scanf("%d", &w);
    
    if(w > 90)
        printf("體重過重。\n");
    else
        printf("不會過重。\n");
    
    system("pause");
    return 0;

}


/* Outcome

輸入整數體重: 55
不會過重。
Press any key to continue . . .

*/
