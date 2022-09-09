/* hw11_10 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void){
    
    int i;
    int top = 0, sum = 0;

    struct data
    {
        char name[10];
        int math;
    }student[MAX];
    
    for(i = 0; i < MAX; i++)
    {
        printf("輸入第 %d / 5 位學生姓名: ", i + 1);
        gets(student[i].name);
        printf("輸入第 %d / 5位學生成績: ", i + 1);
        scanf("%d", &student[i].math);
        fflush(stdin);
    }
    
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

輸入第 1 / 5 位學生姓名: Tom
輸入第 1 / 5 位學生成績: 33
輸入第 2 / 5 位學生姓名: Alice
輸入第 2 / 5 位學生成績: 80
輸入第 3 / 5 位學生姓名: Catherine
輸入第 3 / 5 位學生成績: 95
輸入第 4 / 5 位學生姓名: Katherine
輸入第 4 / 5 位學生成績: 95
輸入第 5 / 5 位學生姓名: Lola
輸入第 5 / 5 位學生成績: 85
成績最高學生姓名: Catherine 分數: 95
成績不及格學生姓名: Tom 分數: 33
平均成績: 77.60
Press any key to continue . . .

*/
