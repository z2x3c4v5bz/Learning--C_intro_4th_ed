/* hw10_10 */
#include <stdio.h>
#include <stdlib.h>

void count(int *);

int main(void){

    int num = 0;
    int i;
    
    for(i = 1; i <= 5; i++)
    {
        count(&num);
        printf("呼叫 count %d 次，num = %d\n", i, num);
    }
    
    system("pause");
    return 0;

}

void count(int *i){

    *i += 1;

}


/* Outcome

呼叫 count 1 次，num = 1
呼叫 count 2 次，num = 2
呼叫 count 3 次，num = 3
呼叫 count 4 次，num = 4
呼叫 count 5 次，num = 5
Press any key to continue . . .

*/
