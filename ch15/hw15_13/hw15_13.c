/* hw15_13 */
#include <stdio.h>
int main(void)
{
	struct status
	{
		unsigned sex:1;
		unsigned marriage:1;
		unsigned age:7;
	};
	struct status tom;
	int i;
	
	printf("輸入性別(0:女;1:男) : ");
	scanf("%d",&i);
	tom.sex=i;
	printf("輸入婚姻狀況(0:未婚;1:已婚) : ");
	scanf("%d",&i);
	tom.marriage=i;
	printf("輸入年齡 : ");
	scanf("%d",&i);
	tom.age=i;
	
	if(tom.sex==0)
		printf("性別 : 女,");
	else
		printf("性別 : 男,");
	
	if(tom.marriage==0)
		printf("未婚,");
	else
		printf("已婚,");
	
	printf("%d歲\n",tom.age);
	
	printf("sizeof(tom)=%d\n",sizeof(tom));
	
	system("pause");
	return 0;
}
