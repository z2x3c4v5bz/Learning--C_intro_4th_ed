/* hw12_17a */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

int main(void){
    
    int f1;
    struct data
    {
        char name[10];
        int math;
    }student[3] = {{"Jenny", 96}, {"Katsuma", 34}, {"Akua", 5}};
    
    f1 = open("student.bin", O_CREAT|O_WRONLY|O_BINARY);
    
    if(f1 != -1)
    {
        write(f1, &student, sizeof(student));
        close(f1);
        printf("資料已寫入檔案!!\n");
    }
    else
        printf("檔案開啟失敗!!\n");
    
    system("pause");
    return 0;
    
}


/* Output

資料已寫入檔案!!
Press any key to continue . . .

*/
