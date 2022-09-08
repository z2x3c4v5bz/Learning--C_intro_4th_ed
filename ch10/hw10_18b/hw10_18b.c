/* hw10_18b */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    char *ptr = "We are best friends.";
    int i, cont = 0;
    
    for(i = 0; *(ptr + i) != '\0'; i++)
        if(*(ptr + i) >= 97 && *(ptr + i) <= 122)
            cont += 1;
    
    printf("Number of lowercases in *ptr is %d\n",cont);
    
    system("pause");
    return 0;

}


/* Outcome

Number of lowercases in *ptr is 15
Press any key to continue . . .

*/
