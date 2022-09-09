/* hw11_19 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    char key;

    enum color
    {
        red = 114,
        RED = 82,
        green = 103,
        GREEN = 71,
        blue = 98,
        BLUE = 66
    }shirt;
    
    do
    {
        printf("請輸入 r, g 或 b (大小寫沒有區別): ");
        scanf("%c", &key);
        fflush(stdin);
    }while((key != red) && (key != RED) && (key != green) && (key != GREEN) && (key != blue) && (key != BLUE));
    
    shirt = key;
    
    switch(shirt)
    {
        case red:
        case RED:
            printf("您選擇了紅色\n");
            break;
        case green:
        case GREEN:
            printf("您選擇了綠色\n");
            break;
        case blue:
        case BLUE:
            printf("您選擇了藍色\n");
            break;
    }
    
    system("pause");
    return 0;

}


/* Output

請輸入 r, g 或 b (大小寫沒有區別): g
您選擇了綠色
Press any key to continue . . .

*/
