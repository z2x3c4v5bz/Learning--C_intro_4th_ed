/* hw12_9 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#define SIZE 16

int main(void){

    char buffer[SIZE];
    int f1, f2, bytes;
    
    f1 = open("welcome.txt", O_RDONLY|O_TEXT);
    f2 = creat("output2.txt", S_IWRITE);
    
    if((f1 != -1) && (f2 != -1))
    {
        while(!eof(f1))
        {
            bytes = read(f1, buffer, SIZE);
            write(f2, buffer, bytes);
        }
        close(f1);
        close(f2);
        printf("檔案拷貝完成!!\n");
    }
    else
        printf("檔案開啟失敗!!\n");
    
    system("pause");
    return 0;

}


/* Output

檔案拷貝完成!!
Press any key to continue . . .

*/
