/* hw12_8 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main(void){
    
    FILE *fptr1, *fptr2, *fptr3;
    char str1[MAX], str2[MAX];
    fptr1 = fopen("aa.txt", "r");
    fptr2 = fopen("bb.txt", "r");
    fptr3 = fopen("cc.txt", "w");
    
    if(fptr1 != NULL && fptr2 != NULL && fptr3 != NULL)
    {
        while(fgets(str1, MAX, fptr1) != NULL)
            fgets(str1, MAX, fptr1);
        while(fgets(str2, MAX, fptr2) != NULL)
            fgets(str2, MAX, fptr2);
        fputs(str1, fptr3);
        putc('\n', fptr3);
        fputs(str2, fptr3);
        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
        printf("檔案合併完成!!\n");
    }
    else
        printf("檔案開啟失敗!!\n");
    
    system("pause");
    return 0;

}


/* Output

檔案合併完成!!
Press any key to continue . . .

*/
