/* hw8_36b */
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Documents\C語言教學手冊_第四版\習題練習\ch08\hw8_36\my_math.h"

int main(void)
{
	float x,y;
	
	printf("輸入兩個浮點數 x 和 y 以計算平均值和乘積(以空白鍵隔開如 : x y) : ");
	scanf("%f %f",&x,&y);
	
	printf("AVERAGE(%f,%f)=%f\n",x,y,AVERAGE(x,y));
	printf("PRODUCT(%f,%f)=%f\n",x,y,PRODUCT(x,y));
	
	system("pause");
	return 0;
}
