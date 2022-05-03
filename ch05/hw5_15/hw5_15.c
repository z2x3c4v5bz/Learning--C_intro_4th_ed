/* hw5_15 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    float d, h;
    
    printf("輸入平行四邊形的底: ");
    scanf("%f", &d);

    printf("輸入平行四邊形的高: ");
    scanf("%f", &h);
    
    printf("底為 %f 高為 %f 的平行四邊形，其面積為: %f\n", d, h, d * h);
    
    system("pause");
    return 0;
    
}


/* Outcome

輸入平行四邊形的底: 5
輸入平行四邊形的高: 4
底為 5.000000 高為 4.000000 的平行四邊形，其面積為: 20.000000

*/
