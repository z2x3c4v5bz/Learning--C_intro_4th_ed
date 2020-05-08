/* hw10_7 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=28,b=16;
	int *ptr1,*ptr2;
	
	ptr1=&b;
	printf("ptr1=&b\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	ptr2=&a;
	printf("ptr2=&a\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	*ptr1=4;
	printf("*ptr1=4\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	a=16;
	printf("a=16\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	*ptr2=12;
	printf("*ptr2=12\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	ptr2=ptr1;
	printf("ptr2=ptr1\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	*ptr1=19;
	printf("*ptr1=19\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	ptr1=&a;
	printf("ptr1=&a\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	a=7;
	printf("a=7\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	*ptr2=*ptr1;
	printf("*ptr2=*ptr1\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	
	printf("a=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	
	system("pause");
	return 0;
}
