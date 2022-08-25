/* hw8_11c */
#include <stdio.h>
#include <stdlib.h>

int find(int);

int main(void){

    int i;
    
    printf("孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。\n");

    for(i = 1; i <= 12; i++)
        printf("孫子問題的第 %2d 個數是 %5d\n", i, find(i));
    
    system("pause");
    return 0;

}

int find(int n){

    int cont = 0, i = 1;
    
    while(cont != n)
    {
        if(i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
            cont += 1;
        
        i++;
    }
    
    return i - 1;

}


/* Outcome

孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。
孫子問題的第  1 個數是    23
孫子問題的第  2 個數是   128
孫子問題的第  3 個數是   233
孫子問題的第  4 個數是   338
孫子問題的第  5 個數是   443
孫子問題的第  6 個數是   548
孫子問題的第  7 個數是   653
孫子問題的第  8 個數是   758
孫子問題的第  9 個數是   863
孫子問題的第 10 個數是   968
孫子問題的第 11 個數是  1073
孫子問題的第 12 個數是  1178
Press any key to continue . . .

*/
