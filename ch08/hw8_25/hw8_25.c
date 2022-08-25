/* hw8_25 */
#include <stdio.h>
#include <stdlib.h>

int fib(int);
void counter(void);

int main(void){
    
    fib(5);
    
    system("pause");
    return 0;

}

int fib(int n){

    counter();
    
    if(n == 1 || n == 2)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
        
}

void counter(void){

    static int cont = 0;
    
    printf("counter() 已經被呼叫 %d 次了...\n", ++cont);
    
}


/* Outcome

counter() 已經被呼叫 1 次了...
counter() 已經被呼叫 2 次了...
counter() 已經被呼叫 3 次了...
counter() 已經被呼叫 4 次了...
counter() 已經被呼叫 5 次了...
counter() 已經被呼叫 6 次了...
counter() 已經被呼叫 7 次了...
counter() 已經被呼叫 8 次了...
counter() 已經被呼叫 9 次了...
Press any key to continue . . .

*/
