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


/*

ptr1=&b         a=28    b=16    ptr1=000000000061FE0C   *ptr1=16        ptr2=0000000000401519   *ptr2=8
ptr2=&a         a=28    b=16    ptr1=000000000061FE0C   *ptr1=16        ptr2=000000000061FE08   *ptr2=28
*ptr1=4         a=28    b=4     ptr1=000000000061FE0C   *ptr1=4         ptr2=000000000061FE08   *ptr2=28
a=16            a=16    b=4     ptr1=000000000061FE0C   *ptr1=4         ptr2=000000000061FE08   *ptr2=16
*ptr2=12        a=12    b=4     ptr1=000000000061FE0C   *ptr1=4         ptr2=000000000061FE08   *ptr2=12
ptr2=ptr1       a=12    b=4     ptr1=000000000061FE0C   *ptr1=4         ptr2=000000000061FE0C   *ptr2=4
*ptr1=19        a=12    b=19    ptr1=000000000061FE0C   *ptr1=19        ptr2=000000000061FE0C   *ptr2=19
ptr1=&a         a=12    b=19    ptr1=000000000061FE08   *ptr1=12        ptr2=000000000061FE0C   *ptr2=19
a=7             a=7     b=19    ptr1=000000000061FE08   *ptr1=7         ptr2=000000000061FE0C   *ptr2=19
*ptr2=*ptr1     a=7     b=7     ptr1=000000000061FE08   *ptr1=7         ptr2=000000000061FE0C   *ptr2=7

a=7     b=7     ptr1=000000000061FE08   *ptr1=7 ptr2=000000000061FE0C   *ptr2=7
Press any key to continue . . .

*/
