/* hw11_13 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main(void)
{
	int i;
	int top=0,sum=0;
	struct data
	{
		char name[10];
		int math;
	}student[MAX]={{"Lee",30},{"Lin",90},{"Wang",40},{"Wu",80},{"Huang",70}};;
	struct data *ptr;
	ptr=student;
	
	for(i=0;i<MAX;i++)
	{
		if((ptr+top)->math<(ptr+i)->math)
			top=i;
		sum+=(ptr+i)->math;
	}
	
	printf("成績最高學生姓名: %s 分數: %d\n",(ptr+top)->name,(ptr+top)->math);
	
	for(i=0;i<MAX;i++)
		if((ptr+i)->math<60)
			printf("成績不及格學生姓名: %s 分數: %d\n",(ptr+i)->name,(ptr+i)->math);
	
	printf("平均成績: %.2lf\n",(double)sum/MAX);
	
	system("pause");
	return 0;
}


/*

成績最高學生姓名: Lin 分數: 90
成績不及格學生姓名: Lee 分數: 30
成績不及格學生姓名: Wang 分數: 40
平均成績: 62.00
Press any key to continue . . .

*/
