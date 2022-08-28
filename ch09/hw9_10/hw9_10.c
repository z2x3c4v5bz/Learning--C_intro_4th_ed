/* hw9_10 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i, j, sale[2][4], sum;
    
    for(i = 0; i < 2; i++)
        for(j = 0; j < 4; j++)
        {
            printf("業務員 %d 的第 %d 季業績 : ", i + 1, j + 1);
            scanf("%d", &sale[i][j]);
        }
    
    printf("***** Output *****");
    
    for(i = 0; i < 2; i++)
    {
        sum = 0;
        for(j = 0; j < 4; j++)
            sum += sale[i][j];
        printf("\n業務員 %d 於 2004 年的總銷售為 %d 部車", i + 1, sum);
    }
    
    puts("");
    
    system("pause");
    return 0;

}


/* Outcome

業務員 1 的第 1 季業績 : 30
業務員 1 的第 2 季業績 : 20
業務員 1 的第 3 季業績 : 10
業務員 1 的第 4 季業績 : 5
業務員 2 的第 1 季業績 : 40
業務員 2 的第 2 季業績 : 20
業務員 2 的第 3 季業績 : 28
業務員 2 的第 4 季業績 : 20
***** Output *****
業務員 1 於 2004 年的總銷售為 65 部車
業務員 2 於 2004 年的總銷售為 108 部車
Press any key to continue . . .

*/
