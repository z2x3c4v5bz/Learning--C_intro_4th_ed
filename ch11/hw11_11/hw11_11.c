/* hw11_11 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main(void){

    int i;
    int top = 0, sum = 0;

    struct data
    {
        char name[10];
        int math;
    }student[MAX];

    strcpy(student[0].name, "Lee");
    student[0].math = 30;
    strcpy(student[1].name, "Lin");
    student[1].math = 90;
    strcpy(student[2].name, "Wang");
    student[2].math = 40;
    strcpy(student[3].name, "Wu");
    student[3].math = 80;
    strcpy(student[4].name, "Huang");
    student[4].math = 70;
    
    for(i = 0; i < MAX; i++)
    {
        if(student[top].math < student[i].math)
            top = i;
        sum += student[i].math;
    }
    
    printf("成績最高學生姓名: %s 分數: %d\n", student[top].name, student[top].math);
    
    for(i = 0; i < MAX; i++)
        if(student[i].math < 60)
            printf("成績不及格學生姓名: %s 分數: %d\n", student[i].name, student[i].math);
    
    printf("平均成績: %.2lf\n", (double)sum / MAX);
    
    system("pause");
    return 0;
    
}


/* Output

成績最高學生姓名: Lin 分數: 90
成績不及格學生姓名: Lee 分數: 30
成績不及格學生姓名: Wang 分數: 40
平均成績: 62.00
Press any key to continue . . .

*/
