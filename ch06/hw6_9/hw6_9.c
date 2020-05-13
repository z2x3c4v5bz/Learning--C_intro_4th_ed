/* hw6_9 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score,i=0,a=0,b=0,c=0;
	
	start:
		i++;
		printf("輸入學生成績(%02d/10): ",i);
		scanf("%d",&score);
		
		if(score>75)
			a++;
		else if(score>59&&score<76)
				b++;
			else
				c++;
		
		if(i!=10)
			goto start;
	
	printf("A有%2d人\t\tB有%2d人\t\tC有%2d人\n",a,b,c);
	
	system ("pause");
	return 0;
}


/*

輸入學生成績(01/10): 55
輸入學生成績(02/10): 32
輸入學生成績(03/10): 60
輸入學生成績(04/10): 90
輸入學生成績(05/10): 49
輸入學生成績(06/10): 59
輸入學生成績(07/10): 63
輸入學生成績(08/10): 70
輸入學生成績(09/10): 88
輸入學生成績(10/10): 0
A有 2人         B有 3人         C有 5人
Press any key to continue . . .

*/
