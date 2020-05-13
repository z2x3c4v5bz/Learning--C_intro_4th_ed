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


/*

a=5,b=10        a=5     b=10    ptr1=-                  *ptr1=-         ptr2=-                  *ptr2=-
*ptr1,*ptr2     a=5     b=10    ptr1=000000000061E230   *ptr1=-         ptr2=0000000000000008   *ptr2=-
ptr1=&a         a=5     b=10    ptr1=000000000061FE08   *ptr1=5         ptr2=0000000000401519   *ptr2=8
ptr2=&b         a=5     b=10    ptr1=000000000061FE08   *ptr1=5         ptr2=000000000061FE0C   *ptr2=10
*ptr1=7         a=7     b=10    ptr1=000000000061FE08   *ptr1=7         ptr2=000000000061FE0C   *ptr2=10
ptr2=32         a=7     b=32    ptr1=000000000061FE08   *ptr1=7         ptr2=000000000061FE0C   *ptr2=32
a=17            a=17    b=32    ptr1=000000000061FE08   *ptr1=17        ptr2=000000000061FE0C   *ptr2=32
ptr1=ptr2       a=17    b=32    ptr1=000000000061FE0C   *ptr1=32        ptr2=000000000061FE0C   *ptr2=32
*ptr1=9         a=17    b=9     ptr1=000000000061FE0C   *ptr1=9         ptr2=000000000061FE0C   *ptr2=9
ptr1=&a         a=17    b=9     ptr1=000000000061FE08   *ptr1=17        ptr2=000000000061FE0C   *ptr2=9
a=64            a=64    b=9     ptr1=000000000061FE08   *ptr1=64        ptr2=000000000061FE0C   *ptr2=9
*ptr1=*ptr2+5   a=64    b=69    ptr1=000000000061FE08   *ptr1=64        ptr2=000000000061FE0C   *ptr2=69
ptr2=&a         a=64    b=69    ptr1=000000000061FE08   *ptr1=64        ptr2=000000000061FE08   *ptr2=64

a=64, b=69, *ptr1=64, *ptr2=64
ptr1=000000000061FE08, ptr2=000000000061FE08
Press any key to continue . . .

*/
