/* hw7_29 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int input;
    int cnt = 0;
    int passwd = 6128;
    
    while(1)
    {
        printf("請輸入密碼: ");
        scanf("%d", &input);
        
        cnt++;
        
        if(input == passwd)
        {
            printf("密碼輸入正確，歡迎使用本系統!!\n");
            break;
        }
            
        if(cnt == 3)
        {
            printf("密碼輸入超過三次!!\n");
            break;
        }
        
    }
    
    system("pause");
    return 0;
    
}


/* Outcome

請輸入密碼: 2012
請輸入密碼: 2007
請輸入密碼: 1949
密碼輸入超過三次!!
Press any key to continue . . .

請輸入密碼: 9527
請輸入密碼: 6128
密碼輸入正確，歡迎使用本系統!!
Press any key to continue . . .

*/
