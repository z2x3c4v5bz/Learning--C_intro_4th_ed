/* hw15_15 */
#include <stdio.h>
int main(void)
{
	struct status
	{
		unsigned sex:1;
		unsigned marriage:1;
		unsigned age:7;
		unsigned height:8;
		unsigned weight:8;
	};
	struct status maruco={0,0,9,162,50};
	
	if(maruco.sex==0)
		printf("性別 : 女,");
	else
		printf("性別 : 男,");
	
	if(maruco.marriage==0)
		printf("未婚,");
	else
		printf("已婚,");
	
	printf("%d歲,%d公分,%d公斤\n",maruco.age,maruco.height,maruco.weight);
	
	printf("sizeof(maruco)=%d\n",sizeof(maruco));
	
	system("pause");
	return 0;
}
