/* hw10_18a */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    char *ptr = "We are best friends.";
    int i;
    
    for(i = 0; *(ptr + i) != '\0'; i++);
    
    printf("Number of characters in *ptr is %d\n", i);
    
    system("pause");
    return 0;
    
}


/* Outcome

Number of characters in *ptr is 20
Press any key to continue . . .

*/
