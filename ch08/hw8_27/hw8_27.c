/* hw8_27 */
#include <stdio.h>
#include <stdlib.h>

void cont1(void), cont2(void);
int f_fib(int), r_fib(int);
int c1, c2;

int main(void){

    int n;
    
    for(n = 1; n <= 30; n++)
    {
        c1 = 0, c2 = 0;
        f_fib(n);
        printf("n = %2d, for 迴圈 %2d 次, ", n, c1);
        r_fib(n);
        printf("遞迴 %d 次\n", c2);
    }
    
    system("pause");
    return 0;

}

void cont1(void){

    c1++;

}

void cont2(void){

    c2++;

}

int f_fib(int n){

    int i;
    int n1, n2 = 1, n3 = 1;
    
    for(i = 1; i <= n; i++)
    {
        cont1();
        
        if(n == 1 || n == 2)
            return 1;
        else
        {
            n1 = n2 + n3;
            n3 = n2;
            n2 = n1;
        }
    }
    return n1;

}

int r_fib(int n){
    
    cont2();
    
    if(n == 1 || n == 2)
        return 1;
    else
        return (r_fib(n - 1) + r_fib(n - 2));

}


/* Outcome

n =  1, for 迴圈  1 次, 遞迴 1 次
n =  2, for 迴圈  1 次, 遞迴 1 次
n =  3, for 迴圈  3 次, 遞迴 3 次
n =  4, for 迴圈  4 次, 遞迴 5 次
n =  5, for 迴圈  5 次, 遞迴 9 次
n =  6, for 迴圈  6 次, 遞迴 15 次
n =  7, for 迴圈  7 次, 遞迴 25 次
n =  8, for 迴圈  8 次, 遞迴 41 次
n =  9, for 迴圈  9 次, 遞迴 67 次
n = 10, for 迴圈 10 次, 遞迴 109 次
n = 11, for 迴圈 11 次, 遞迴 177 次
n = 12, for 迴圈 12 次, 遞迴 287 次
n = 13, for 迴圈 13 次, 遞迴 465 次
n = 14, for 迴圈 14 次, 遞迴 753 次
n = 15, for 迴圈 15 次, 遞迴 1219 次
n = 16, for 迴圈 16 次, 遞迴 1973 次
n = 17, for 迴圈 17 次, 遞迴 3193 次
n = 18, for 迴圈 18 次, 遞迴 5167 次
n = 19, for 迴圈 19 次, 遞迴 8361 次
n = 20, for 迴圈 20 次, 遞迴 13529 次
n = 21, for 迴圈 21 次, 遞迴 21891 次
n = 22, for 迴圈 22 次, 遞迴 35421 次
n = 23, for 迴圈 23 次, 遞迴 57313 次
n = 24, for 迴圈 24 次, 遞迴 92735 次
n = 25, for 迴圈 25 次, 遞迴 150049 次
n = 26, for 迴圈 26 次, 遞迴 242785 次
n = 27, for 迴圈 27 次, 遞迴 392835 次
n = 28, for 迴圈 28 次, 遞迴 635621 次
n = 29, for 迴圈 29 次, 遞迴 1028457 次
n = 30, for 迴圈 30 次, 遞迴 1664079 次
Press any key to continue . . .

*/
