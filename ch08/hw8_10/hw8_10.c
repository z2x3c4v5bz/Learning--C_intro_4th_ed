/* hw8_10 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_mersenne_prime(int);
int is_prime(int);

long int ans;

int main(void){
    
    int p = 1, cont = 1;
    
    while(cont <= 8)
        if(is_mersenne_prime(p++))
            printf("第 %d 個森梅尼質數是 %ld\n", cont++, ans);
    
    system("pause");
    return 0;

}

int is_mersenne_prime(int p){

    int num;
    
    if(p % 2 == 0 && p != 2)
        return 0;
    
    num = pow(2, p) - 1;
    
    if(is_prime(num))
    {
        ans = num;
        return 1;
    }
    
    return 0;

}

int is_prime(int num){

    int i;
    
    for(i = 2; i <= num / 2; i++)
        if(num % i == 0)
            return 0;
            
    if(num != 1)
        return 1;
    else
        return 0;

}


/* Outcome

第 1 個森梅尼質數是 3
第 2 個森梅尼質數是 7
第 3 個森梅尼質數是 31
第 4 個森梅尼質數是 127
第 5 個森梅尼質數是 8191
第 6 個森梅尼質數是 131071
第 7 個森梅尼質數是 524287
第 8 個森梅尼質數是 2147483647
Press any key to continue . . .

*/
