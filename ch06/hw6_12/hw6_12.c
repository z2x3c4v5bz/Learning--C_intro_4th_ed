/* hw6_12 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score;
	
	printf("輸入學生成績:");
	scanf("%d",&score);
	
	if(score<=100&&score>=80)
		printf("評等 : A\n");
	else if(score<=79&&score>=60)
			printf("評等 : B\n");
		else if(score<=59&&score>=0)
				printf("評等 : C\n");
			else
				printf("成績輸入有誤。\n");
	
	system("pause");
	return 0;
}
