/* hw10_5 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=5,b=10;
	printf("a=5,b=10\ta=%d\tb=%d\tptr1=-\t\t\t*ptr1=-\t\tptr2=-\t\t\t*ptr2=-\n",a,b);
	int *ptr1,*ptr2;
	printf("*ptr1,*ptr2\ta=%d\tb=%d\tptr1=%p\t*ptr1=-\t\tptr2=%p\t*ptr2=-\n",a,b,ptr1,ptr2);
	ptr1=&a;
	printf("ptr1=&a\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	ptr2=&b;
	printf("ptr2=&b\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	*ptr1=7;
	printf("*ptr1=7\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	*ptr2=32;
	printf("ptr2=32\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	a=17;
	printf("a=17\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	ptr1=ptr2;
	printf("ptr1=ptr2\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	*ptr1=9;
	printf("*ptr1=9\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\t\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	ptr1=&a;
	printf("ptr1=&a\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	a=64;
	printf("a=64\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	*ptr2=*ptr1+5;
	printf("*ptr1=*ptr2+5\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	ptr2=&a;
	printf("ptr2=&a\t\ta=%d\tb=%d\tptr1=%p\t*ptr1=%d\tptr2=%p\t*ptr2=%d\n\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	
	printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
	printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);
	
	system("pause");
	return 0;
}
