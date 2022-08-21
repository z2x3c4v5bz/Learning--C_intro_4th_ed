/* hw6_10 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    float x, y;
    
    printf("分別輸入 x 及 y 座標 (x,y): ");
    scanf("%f, %f", &x, &y);
    
    if(x>0&&y>0)
        printf("第一象限。\n");
    else if(x < 0 && y > 0)
            printf("第二象限。\n");
        else if(x < 0 && y < 0)
                printf("第三象限。\n");
            else if(x > 0 && y < 0)
                    printf("第四象限。\n");
                else
                    printf("不屬於任何象限。\n");
    
    system("pause");
    return 0;

}


/* Outcome

分別輸入 x 及 y 座標 (x,y): 0,0
不屬於任何象限。
Press any key to continue . . .

*/
