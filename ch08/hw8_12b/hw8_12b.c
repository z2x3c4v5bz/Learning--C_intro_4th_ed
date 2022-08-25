/* hw8_12b */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(int);

int main(void){

    int i;
    
    for(i = 1; i <= 50; i++)
        printf("my_fun(%d) = %lf\n", i, my_fun(i));
    
    system("pause");
    return 0;
    
}

double my_fun(int n){

    double sum = 0;
    int i;
    
    for(i = 1; i <= n; i++)
        sum += (1 / pow(2, i));
    
    return sum;

}


/* Outcome

my_fun(1) = 0.500000
my_fun(2) = 0.750000
my_fun(3) = 0.875000
my_fun(4) = 0.937500
my_fun(5) = 0.968750
my_fun(6) = 0.984375
my_fun(7) = 0.992188
my_fun(8) = 0.996094
my_fun(9) = 0.998047
my_fun(10) = 0.999023
my_fun(11) = 0.999512
my_fun(12) = 0.999756
my_fun(13) = 0.999878
my_fun(14) = 0.999939
my_fun(15) = 0.999969
my_fun(16) = 0.999985
my_fun(17) = 0.999992
my_fun(18) = 0.999996
my_fun(19) = 0.999998
my_fun(20) = 0.999999
my_fun(21) = 1.000000
my_fun(22) = 1.000000
my_fun(23) = 1.000000
my_fun(24) = 1.000000
my_fun(25) = 1.000000
my_fun(26) = 1.000000
my_fun(27) = 1.000000
my_fun(28) = 1.000000
my_fun(29) = 1.000000
my_fun(30) = 1.000000
my_fun(31) = 1.000000
my_fun(32) = 1.000000
my_fun(33) = 1.000000
my_fun(34) = 1.000000
my_fun(35) = 1.000000
my_fun(36) = 1.000000
my_fun(37) = 1.000000
my_fun(38) = 1.000000
my_fun(39) = 1.000000
my_fun(40) = 1.000000
my_fun(41) = 1.000000
my_fun(42) = 1.000000
my_fun(43) = 1.000000
my_fun(44) = 1.000000
my_fun(45) = 1.000000
my_fun(46) = 1.000000
my_fun(47) = 1.000000
my_fun(48) = 1.000000
my_fun(49) = 1.000000
my_fun(50) = 1.000000
Press any key to continue . . .

*/
