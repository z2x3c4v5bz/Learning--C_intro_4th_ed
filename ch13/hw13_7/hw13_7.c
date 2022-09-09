/* hw13_7 */
#include <stdio.h>
#include <stdlib.h>

int cnt;

void count(void);

int main(void){

    printf("請輸入cnt的初值: ");
    scanf("%d", &cnt);
    
    count();
    count();
    
    cnt++;
    printf("cnt = %d\n", cnt);
    
    system("pause");
    return 0;

}


/* Output

請輸入cnt的初值: 9
cnt = 1
cnt = 2
cnt = 10
Press any key to continue . . .

*/
