/* hw11_17 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct data
{
	char name[15];
	int math;
};
struct data best(struct data student[]);
void failed(struct data student[]);
double average(struct data student[]);
void sort(struct data student[]);

int main(void)
{
	int i;
	struct data student[MAX]={{"Zachary Lin",100},{"XiaoLang Lee",35},{"ZheMing Zhang",66},{"Sakura",90},{"XiaoMing Wang",59}};
	
	printf("成績最高學生: %s\t分數: %d\n\n",best(student).name,best(student).math);
	
	failed(student);
	
	printf("\n平均成績=%.2lf\n\n",average(student));
	
	printf("-----成績排名-----\n");
	sort(student);
	
	system("pause");
	return 0;
}

struct data best(struct data student[])
{
	struct data b;
	b=student[0];
	int i;
	
	for(i=0;i<MAX;i++)
		if(b.math<student[i].math)
			b=student[i];
	
	return b;
}

void failed(struct data student[])
{
	int i;
	
	printf("-----不合格名單-----\n");
	for(i=0;i<MAX;i++)
		if(student[i].math<60)
			printf("姓名: %-15s\t\t分數: %d\n",student[i].name,student[i].math);
}

double average(struct data student[])
{
	int i;
	double sum=0;
	
	for(i=0;i<MAX;i++)
		sum+=student[i].math;
	
	return sum/MAX;
}

void sort(struct data student[])
{
	int i,j,flag=0,n=MAX-1;
	struct data temp;
	
	for(i=0;(i<MAX)&&(!flag);i++)
	{
		flag=1;
		for(j=0;j<n;j++)
			if(student[j].math<student[j+1].math)
			{
				temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
				flag=0;
			}
		n--;
	}
	
	for(i=0;i<MAX;i++)
		printf("%d. 姓名: %-15s\t分數: %3d\n",i+1,student[i].name,student[i].math);
}


/*

成績最高學生: Zachary Lin       分數: 100

-----不合格名單-----
姓名: XiaoLang Lee              分數: 35
姓名: XiaoMing Wang             分數: 59

平均成績=70.00

-----成績排名-----
1. 姓名: Zachary Lin            分數: 100
2. 姓名: Sakura                 分數:  90
3. 姓名: ZheMing Zhang          分數:  66
4. 姓名: XiaoMing Wang          分數:  59
5. 姓名: XiaoLang Lee           分數:  35
Press any key to continue . . .

*/
