/* hw12_11b */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

int main(void){

    int num, sum = 0;
    int f1;
    char buffer[3];
    
    f1 = open("rand.txt", O_RDONLY|O_TEXT);
    
    if(f1 != -1)
    {
        printf("亂數為:");
        while(!eof(f1))
        {
            read(f1, buffer, 3);
            num = atoi(buffer);
            sum += num;
            printf("%3d", num);
        }
        close(f1);
        printf("\n檔案讀取完成!!\n");
        printf("Average = %.2f\n", (float)sum / 10);
    }
    else
        printf("檔案開啟失敗!!\n");
    
    system("pause");
    return 0;
    
}


/* Output

亂數為: 15 44  4 33 10  5 37 63 48 14
檔案讀取完成!!
Average = 27.30
Press any key to continue . . .

*/
