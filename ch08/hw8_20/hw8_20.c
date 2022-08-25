/* hw8_20 */
#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void){
    
    int n;
    
    printf("輸入一個 n，計算 1 + 2 + ... + (n - 1) + n 的值 : ");
    scanf("%d", &n);
    
    while(n <= 0)
    {
        printf("n 不能小於或等於 0，請再輸入一次 : ");
        scanf("%d", &n);
    }
    
    printf("Answer : %d\n", sum(n));
    
    system("pause");
    return 0;

}

int sum(int n){

    if(n == 1)
        return 1;
    else
        return n + sum(n - 1);

}


/* Outcome

輸入一個 n，計算 1 + 2 + ... + (n - 1) + n 的值 : 6
Answer : 21
Press any key to continue . . .

*/
