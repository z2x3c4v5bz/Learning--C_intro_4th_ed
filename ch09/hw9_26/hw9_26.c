/* hw9_26 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

int length(char str[]);

int main(void){

    char userstr[SIZE];
    
    printf("Enter a string : ");
    gets(userstr);
    
    printf("This string have %d words (including space).\n", length(userstr));
    
    system("pause");
    return 0;

}

int length(char str[]){

    int i = 0;
    
    while(str[i] != '\0')
        i++;
    
    return i;
    
}


/* Outcome

Enter a string : I love you
This string have 10 words (including space).
Press any key to continue . . .

*/
