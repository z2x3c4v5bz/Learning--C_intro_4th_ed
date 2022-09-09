/* hw13_16 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){

    FILE *fptr;
    char ch;
    
    fptr = fopen(argv[1], "r");
    
    if(fptr != NULL)
    {
        while((ch = getc(fptr)) != EOF)
            printf("%c", ch);
        printf("\n");
        fclose(fptr);
    }
    else
        printf("Failed to open the file.\n");
    
    system("pause");
    return 0;

}


/* Output

C:\Users\C\C語言教學手冊_第四版\習題練習\ch13\hw13_16>hw13_16 welcome.txt
Welcome to the
world of C language
Press any key to continue . . .

*/
