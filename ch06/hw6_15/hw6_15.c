/* hw6_15 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int pay, realpay, repay;
    int m1000 = 0, m500 = 0, m100 = 0, m50 = 0, m10 = 0, m5 = 0, m1 = 0;
    
    printf("輸入應付金額: ");
    scanf("%d", &pay);
    printf("輸入實付金額: ");
    scanf("%d", &realpay);
    
    if(realpay < pay)
    {
        printf("金額不足。\n");
    }
    else
    {
        repay = realpay - pay;
        
        m1000 = repay / 1000;
        repay = repay - (m1000 * 1000);
        
        m500 = repay / 500;
        repay = repay - (m500 * 500);
        
        m100 = repay / 100;
        repay = repay - (m100 * 100);
        
        m50 = repay / 50;
        repay = repay - (m50 * 50);
        
        m10 = repay / 10;
        repay = repay - (m10 * 10);
        
        m5 = repay / 5;
        repay = repay - (m5 * 5);
        
        m1 = repay / 1;
        repay = repay - (m1 * 1);
        
        printf("總共要找 %d 張1000元、 %d 張500元、 %d 張100元、 %d 個50元、 %d 個10元、 %d 個5元、 %d 個1元。\n", m1000, m500, m100, m50, m10, m5, m1);
    }
    
        system("pause");
        return 0;
        
}


/* Outcome

輸入應付金額: 3214
輸入實付金額: 5000
總共要找 1 張1000元、 1 張500元、 2 張100元、 1 個50元、 3 個10元、 1 個5元、 1 個1元。
Press any key to continue . . .

*/
