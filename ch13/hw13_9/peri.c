/* peri.c */
#include <stdio.h>

void peri(double r){

    extern double pi;
    
    printf("圓周長 = %.2f\n", 2 * pi * r);

}
