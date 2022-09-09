/* func.c */
#include <stdio.h>
#include <stdlib.h>

void func(void){

    extern int a;

    a = 300;
    printf("於 func() 函數裡, a = %d\n", a);

}
