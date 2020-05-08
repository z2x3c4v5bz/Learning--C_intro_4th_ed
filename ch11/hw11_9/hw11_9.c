/* hw11_9 */
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
	}student[MAX]={{"Lee",30},{"Lin",90},{"Wang",40},{"Wu",80},{"Huang",70}};
	
	for(i=0;i<MAX;i++)
	{
		if(student[top].math<student[i].math)
			top=i;
		sum+=student[i].math;
	}
	
	printf("成績最高學生姓名: %s 分數: %d\n",student[top].name,student[top].math);
	
	for(i=0;i<MAX;i++)
		if(student[i].math<60)
			printf("成績不及格學生姓名: %s 分數: %d\n",student[i].name,student[i].math);
	
	printf("平均成績: %.2lf\n",(double)sum/MAX);
	
	system("pause");
	return 0;
}
