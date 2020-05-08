/* hw10_4 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num=12.6f,*ptr;
	ptr=&num;
	
	printf("num=12.6,\n&num=%p\nptr=%p\n",&num,&ptr);
	
	system("pause");
	return 0;
}
