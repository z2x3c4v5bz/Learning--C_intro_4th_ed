/* hw12_5 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *fptr1, *fptr2;
    char str[5];
    
    fptr1 = fopen("welcome.txt", "r");
    fptr2 = fopen("output.txt", "w");
    
    if((fptr1 != NULL) && (fptr2 != NULL))
    {
        while(fgets(str, 5, fptr1) != NULL)
            fputs(str, fptr2);
        fclose(fptr1);
        fclose(fptr2);
        printf("The file has been copied already!\n");
    }
    else
        printf("Filed to open the file!\n");
    
    system("pause");
    return 0;

}


/* Output

The file has been copied already!
Press any key to continue . . .

*/
