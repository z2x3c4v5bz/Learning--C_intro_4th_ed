/* hw12_7 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void){

    FILE *fptr;
    char str[MAX];
    int bytes;

    fptr = fopen("output.txt", "r");
    
    if(fptr != NULL)
    {
        while(!feof(fptr))
        {
            bytes = fread(str, sizeof(char), MAX, fptr);
            if(bytes < MAX)
                str[bytes] = '\0';
            puts(str);
        }
        fclose(fptr);
    }
    else
        printf("Filed to open the file.\n");
    
    system("pause");
    return 0;

}


/* Output

Welcome to the
world of C language
I love the C language best!
Press any key to continue . . .

*/
