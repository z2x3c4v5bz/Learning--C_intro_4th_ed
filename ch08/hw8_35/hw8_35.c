/* hw8_35 */
#include <stdio.h>
#include <stdlib.h>
#include "area.h"

int main(void){
    
    float r = 1.0;
    float l = 5.0, w = 4.6;
    float b = 12.2, h = 9.4;
    
    printf("半徑為 %.1f 的圓的面積 = %.2lf\n", r, CIRCLE(r));
    printf("長為 %.1f，寬為 %.1f 的長方形的面積 = %.2lf\n", l, w, RECTANGLE(l, w));
    printf("底為 %.1f，高為 %.1f 的三角形的面積 = %.2lf\n", b, h, TRIANGLE(b, h));
    
    system("pause");
    return 0;
}


/*

半徑為 1.0 的圓的面積 = 3.14
長為 5.0，寬為 4.6 的長方形的面積 = 23.00
底為 12.2，高為 9.4 的三角形的面積 = 57.34
Press any key to continue . . .

*/
