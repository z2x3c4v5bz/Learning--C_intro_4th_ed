/* hw10_19 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int length(char *ptr);

int main(void){
    
    char usersay[SIZE];
    
    printf("Write something here: ");
    gets(usersay);
    
    printf("You entered %d characters here.\n", length(usersay));
    
    system("pause");
    return 0;

}

int length(char *ptr){

    int i;
    
    for(i = 0; *(ptr + i) != '\0'; i++);
    
    return i;

}


/* Outcome

Write something here: I love YOU
You entered 10 characters here.
Press any key to continue . . .

*/
