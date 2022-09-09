/* hw13_14 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char ch;
    ch = argv[1][0];
    
    if(argc == 2)
        printf("%c's ASCII = %d\n", ch, ch);
    else
        printf("[Error] argc = %d\n", argc);
    
    system("pause");
    return 0;

}


/* Output

C:\Users\C\C語言教學手冊_第四版\習題練習\ch13\hw13_14>hw13_14 a
a's ASCII = 97
Press any key to continue . . .

*/
