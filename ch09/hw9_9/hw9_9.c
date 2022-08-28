/* hw9_9 */
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
    
    for(j = 0; j < 4; j++)
    {
        sum = 0;
        for(i = 0; i < 2; i++)
            sum += sale[i][j];
        printf("\n業務員 1 與 2 第 %d 季共銷售 %d 部車", j + 1, sum);
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
業務員 2 的第 1 季業績 : 45
業務員 2 的第 2 季業績 : 20
業務員 2 的第 3 季業績 : 18
業務員 2 的第 4 季業績 : 20
***** Output *****
業務員 1 與 2 第 1 季共銷售 75 部車
業務員 1 與 2 第 2 季共銷售 40 部車
業務員 1 與 2 第 3 季共銷售 28 部車
業務員 1 與 2 第 4 季共銷售 25 部車
Press any key to continue . . . 

*/
