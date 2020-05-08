/* hw8_35 */
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Documents\C語言教學手冊_第四版\習題練習\ch08\hw8_35\area.h"

int main(void)
{
	float r=1.0;
	float l=5.0,w=4.6;
	float b=12.2,h=9.4;
	
	printf("半徑為%.1f的圓的面積=%.2lf\n",r,CIRCLE(r));
	printf("長為%.1f，寬為%.1f的長方形的面積=%.2lf\n",l,w,RECTANGLE(l,w));
	printf("底為%.1f，高為%.1f的三角形的面積=%.2lf\n",b,h,TRIANGLE(b,h));
	
	system("pause");
	return 0;
}
