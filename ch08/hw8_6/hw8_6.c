/* hw8_6 */
#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void){
    
    int x = 5, n = 3;
    
    printf("%d 的 %d 次方 = %d\n", x, n, power(x, n));
    
    system("pause");
    return 0;

}

int power(int x, int n){

    int ans, i;
    
    for(i = 1, ans = 1; i <= n; i++)
        ans *= x;
    
    return ans;

}


/* Outcome

5 的 3 次方 = 125
Press any key to continue . . .

*/
