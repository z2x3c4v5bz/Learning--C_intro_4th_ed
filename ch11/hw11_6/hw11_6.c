/* hw11_6 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	struct date
	{
		int month;
		int day;
	};
	struct data
	{
		char name[10];
		int math;
		struct date birthday;
	}s1={"Many Wang",0,{10,2}};
	
	do
	{
		printf("輸入數學成績: ");
		scanf("%d",&s1.math);
		fflush(stdin);
	}while(s1.math<0||s1.math>100);
	
	printf("學生姓名: %s\n",s1.name);
	printf("生日: %d月%d日\n",s1.birthday.month,s1.birthday.day);
	printf("數學成績: %d\n",s1.math);
	
	system("pause");
	return 0;
}
