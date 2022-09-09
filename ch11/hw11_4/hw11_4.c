/* hw11_4 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    struct time
    {
        int hour;
        int minutes;
        double second;
    }start = {12, 32, 25.49}, end = {15, 12, 17.53}, elapse = {0, 0, 0.0};
    
    printf("start = %2d:%2d:%2.2lf\n", start.hour, start.minutes, start.second);
    printf("end = %2d:%2d:%2.2lf\n", end.hour, end.minutes, end.second);
    
    elapse.second = end.second - start.second;

    if(elapse.second < 0)
    {
        elapse.second += 60.0;
        end.minutes--;
    }

    if(elapse.minutes < 0)
    {
        elapse.minutes += 60;
        end.hour--;
    }

    elapse.minutes = end.minutes - start.minutes;

    if(elapse.minutes < 0)
    {
        elapse.minutes += 60;
        end.hour--;
    }

    elapse.hour = end.hour - start.hour;
    
    printf("elapse = %2d:%2d:%2.2lf\n", elapse.hour, elapse.minutes, elapse.second);
    
    system("pause");
    return 0;

}


/* Output

start = 12:32:25.49
end = 15:12:17.53
elapse =  2:39:52.04
Press any key to continue . . . 

*/
