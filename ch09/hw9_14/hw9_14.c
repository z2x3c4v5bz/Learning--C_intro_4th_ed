/* hw9_14 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

void what_time(int);
void what_day(int);

int main(void){

    float data[ROW][COL] = {{18.2f, 17.3f, 15.0f, 13.4f}, {23.8f, 25.1f, 20.6f, 17.8f}, {20.6f, 21.5f, 18.4f, 15.7f}};
    float average_per_period[ROW];
    float sum, higher = data[0][0], lower = data[0][0];
    int higher_r, higher_c, lower_r, lower_c;
    int i, j;
    
    puts("(a)");
    puts("下表為某地星期一至星期四的時段一、時段二和時段三的氣溫 : ");
    printf("	星期一	星期二	星期三	星期四\n");
    for(i = 0; i < ROW; i++)
    {
        sum = 0;
        what_time(i);
        printf("\t");
        for(j = 0; j < COL; j++)
        {
            printf("%.1f\t", data[i][j]);
            sum += data[i][j];
            if(higher < data[i][j])
            {
                higher = data[i][j];
                higher_r = i;
                higher_c = j;
            }
            if(lower > data[i][j])
            {
                lower = data[i][j];
                lower_r = i;
                lower_c = j;
            }
        }
        average_per_period[i] = sum / COL;
        puts("");
    }
    puts("");
    
    puts("(b)");
    for(j = 0; j < COL; j++)
    {
        sum = 0;
        for(i = 0; i < ROW; i++)
            sum += data[i][j];
        what_day(j);
        printf("的平均溫度為 %.3f\n", sum / ROW);
    }
    puts("");
    
    puts("(c)");
    for(i = 0; i < ROW; i++)
    {
        what_time(i);
        printf("的平均溫度為 %.3f\n", average_per_period[i]);
    }
    puts("");
    
    puts("(d)");
    what_day(higher_c);
    printf("的");
    what_time(higher_r);
    printf("溫度最高\n\n");
    
    puts("(e)");
    what_day(lower_c);
    printf("的");
    what_time(lower_r);
    printf("溫度最低\n\n");
    
    system("pause");
    return 0;

}

void what_time(int n){
    
    switch(n)
    {
        case 0:
            printf("時段一");
            break;
        case 1:
            printf("時段二");
            break;
        case 2:
            printf("時段三");
            break;
    }

}

void what_day(int n){

    switch(n)
    {
        case 0:
            printf("星期一");
            break;
        case 1:
            printf("星期二");
            break;
        case 2:
            printf("星期三");
            break;
        case 3:
            printf("星期四");
            break;
    }

}


/* Outcome

(a)
下表為某地星期一至星期四的時段一、時段二和時段三的氣溫 : 
        星期一  星期二  星期三  星期四
時段一  18.2    17.3    15.0    13.4
時段二  23.8    25.1    20.6    17.8
時段三  20.6    21.5    18.4    15.7

(b)
星期一的平均溫度為 20.867
星期二的平均溫度為 21.300
星期三的平均溫度為 18.000
星期四的平均溫度為 15.633

(c)
時段一的平均溫度為 15.975
時段二的平均溫度為 21.825
時段三的平均溫度為 19.050

(d)
星期二的時段二溫度最高

(e)
星期四的時段一溫度最低

Press any key to continue . . .

*/
