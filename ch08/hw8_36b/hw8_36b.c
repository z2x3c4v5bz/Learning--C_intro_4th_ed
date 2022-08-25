/* hw8_36b */
#include <stdio.h>
#include <stdlib.h>
#include "../hw8_36/my_math.h"

int main(void){

    float x, y;
    
    printf("輸入兩個浮點數 x 和 y 以計算平均值和乘積 (以空白鍵隔開如 : x y): ");
    scanf("%f %f", &x, &y);
    
    printf("AVERAGE(%f, %f) = %f\n", x, y, AVERAGE(x, y));
    printf("PRODUCT(%f, %f) = %f\n", x, y, PRODUCT(x, y));
    
    system("pause");
    return 0;

}


/*

輸入兩個浮點數 x 和 y 以計算平均值和乘積(以空白鍵隔開如 : x y): 1.5 2.5
AVERAGE(1.500000, 2.500000) = 2.000000
PRODUCT(1.500000, 2.500000) = 3.750000
Press any key to continue . . .

*/
