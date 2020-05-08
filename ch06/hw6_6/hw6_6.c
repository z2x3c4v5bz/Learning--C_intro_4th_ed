/* hw6_6 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int w,h;
	
	printf("輸入身高及體重(整數):");
	scanf("%d %d",&h,&w);
	
	if(w>90&&h<180)
		printf("體重過重。\n");
	else
		printf("不會過重。\n");
	
	system("pause");
	return 0;
}
