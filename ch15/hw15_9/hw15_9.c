/* hw15_9 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=159;
	int b=0147;
	int c=0x618A;
	
	//(a)
	printf("a_10=\t%d\n",a);
	printf("a_8=\t%o\n",a);
	printf("a_16=\t%x\n\n",a);
	//(b)
	printf("b_8=\t%o\n",b);
	printf("b_10=\t%d\n",b);
	printf("b_16=\t%x\n\n",b);
	//(c)
	printf("c_16=\t%x\n",c);
	printf("c_10=\t%d\n",c);
	printf("c_8=\t%o\n\n",c);
	
	system("pause");
	return 0;
}
