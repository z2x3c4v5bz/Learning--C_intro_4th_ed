/* hw6_25 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int year = 1899;
    
    printf("西元 1900 年到西元 2000 年間，屬於閏年的有\n");
    start:
        
        year++;
        
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 4000 != 0))
            printf("%d年\t",year);
            
        if(year != 2000)
            goto start;
        
    printf("\n");
    
    system("pause");
    return 0;

}


/* Outcome

西元 1900 年到西元 2000 年間，屬於閏年的有
1904年  1908年  1912年  1916年  1920年  1924年  1928年  1932年  1936年  1940年  1944年  1948年  1952年  1956年  1960年  1964年  1968年  1972年  1976年  1980年  1984年  1988年  1992年  1996年  2000年
Press any key to continue . . .

*/
