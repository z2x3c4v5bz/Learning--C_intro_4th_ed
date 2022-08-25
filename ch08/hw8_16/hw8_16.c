/* hw8_16 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_k(int);

int main(void){
    
    int n;
    
    printf("輸入一個整數 n，將從 4k + 2 找到一個最接近 n 的 k 值 : ");
    scanf("%d", &n);
    printf("k 值為 %d\n", find_k(n));
    
    system("pause");
    return 0;

}

int find_k(int n){

    int k = 1, out = 2;
    
    while(1)
    {
        if(abs(out - n) <= abs((4 * k + 2) - n))
            return k - 1;
        else
        {
            out = 4 * k + 2;
            k++;
        }
    }
    
}


/* Outcome

輸入一個整數 n，將從 4k + 2 找到一個最接近 n 的 k 值 : 360
k 值為 89
Press any key to continue . . .

*/
