/* hw6_16 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    double a = 3, b = -8, c = -3, judge, x, mx;
    
    judge = pow(b, 2) - 4 * a * c;
    
    if(judge > 0)
    {
        x = (-b + sqrt(judge)) / (2 * a);
        mx = (-b - sqrt(judge)) / (2 * a);
        
        printf("方程式有兩個實根 x = %f 和 %f\n", x, mx);
    }
    else if(judge == 0)
        {
            x = -b / (2 * a);
            
            printf("方程式有兩相等實根 x = %f\n", x);
        }
        else
            printf("沒有實根。\n");
    
    system("pause");
    return 0;

}


/* Outcome

方程式有兩個實根 x = 3.000000 和 -0.333333
Press any key to continue . . .

*/
