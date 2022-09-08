/* hw10_15 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int arr[5] = {31, 17, 33, 22, 16};
    int *ptr = arr;
    int i;
    
    printf("arr[5] = {");
    for(i = 0; i < 5; i++)
        if(i != 4)
            printf("%d, ", *(ptr + i));
        else
            printf("%d}\n", *(ptr + i));
    
    printf("arr[5] + 10 = {");
    for(i = 0; i < 5; i++)
        if(i != 4)
            printf("%d,", *(ptr + i) + 10);
        else
            printf("%d}\n", *(ptr + i) + 10);
    
    system("pause");
    return 0;

}


/* Outcome

arr[5] = {31, 17, 33, 22, 16}
arr[5] + 10 = {41, 27, 43, 32, 26}
Press any key to continue . . .

*/
