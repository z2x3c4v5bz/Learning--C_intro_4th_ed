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
