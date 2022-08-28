/* hw9_11 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 3

int main(void){

    int i, j;
    int A[ROW][COL] = {{3, 41, 68}, {34, 51, 77}, {15, 18, 22}, {23, 29, 31}};
    int B[ROW][COL] = {{-1, 27, -4}, {22, -27, 7}, {-18, 1, -20}, {21, -117, 30}};
    
    printf("Matrix A + B =\n");
    
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
            printf("%4d", A[i][j] + B[i][j]);
        printf("\n");
    }
    
    system("pause");
    return 0;

}


/* Outcome

Matrix A + B =
   2  68  64
  56  24  84
  -3  19   2
  44 -88  61
Press any key to continue . . . 

*/
