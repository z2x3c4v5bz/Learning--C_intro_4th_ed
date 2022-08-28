/* hw9_20 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void count(int arr[]);

int main(void){

    int test[SIZE] = {19, 11, 21, 13, 12, 15};
    int i;
    
    printf("Suppose an array test[] as following:\n");
    
    for(i = 0; i < SIZE; i++)
        printf("%2d ", test[i]);
    printf("\n\n");
    
    count(test);
    
    system("pause");
    return 0;

}

void count(int arr[]){

    int i;
    int cont_odd = 0, cont_even = 0;
    
    for(i = 0; i < SIZE; i++)
    {
        if(arr[i] % 2 == 0)
            cont_even += 1;
        else
            cont_odd += 1;
    }
    
    printf("This array have %d even numbers.\n", cont_even);
    for(i = 0; i < SIZE; i++)
        if(arr[i] % 2 == 0)
            printf("%2d ", arr[i]);
    printf("\n\n");
    
    printf("This array have %d odd numbers.\n", cont_odd);
    for(i = 0; i < SIZE; i++)
        if(arr[i] % 2 != 0)
            printf("%2d ", arr[i]);
    printf("\n");

}


/* Outcome

Suppose an array test[] as following:
19 11 21 13 12 15

This array have 1 even numbers.
12

This array have 5 odd numbers.
19 11 21 13 15
Press any key to continue . . .

*/
