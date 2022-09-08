/* hw10_5 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 5, b = 10;
    int *ptr1, *ptr2;

    printf("a = 5, b = 10\t\ta = %d\tb = %d\t\tptr1 = -\t\t\t*ptr1 = -\t\tptr2 = -\t\t\t*ptr2 = -\n", a, b);
    printf("*ptr1, *ptr2\t\ta = %d\tb = %d\t\tptr1 = %p\t*ptr1 = -\t\tptr2 = %p\t*ptr2 = -\n", a, b, ptr1, ptr2);

    ptr1 = &a;
    printf("ptr1 = &a\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    ptr2 = &b;
    printf("ptr2 = &b\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    *ptr1 = 7;
    printf("*ptr1 = 7\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    *ptr2 = 32;
    printf("ptr2 = 32\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    a = 17;
    printf("a = 17\t\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    ptr1 = ptr2;
    printf("ptr1 = ptr2\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    *ptr1 = 9;
    printf("*ptr1 = 9\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    ptr1 = &a;
    printf("ptr1 = &a\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    a = 64;
    printf("a = 64\t\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    *ptr2 = *ptr1 + 5;
    printf("*ptr1 = *ptr2 + 5\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

    ptr2 = &a;
    printf("ptr2 = &a\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    printf("a = %2d, b = %2d, *ptr1 = %2d, *ptr2 = %2d\n", a, b, *ptr1, *ptr2);
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    
    system("pause");
    return 0;

}


/* Outcome

a = 5, b = 10		a = 5	b = 10		ptr1 = -			        *ptr1 = -		ptr2 = -			*ptr2 = -
*ptr1, *ptr2		a = 5	b = 10		ptr1 = 0x910f800101082c80	*ptr1 = -		ptr2 = 0x16f0df790	*ptr2 = -
ptr1 = &a		    a = 5	b = 10		ptr1 = 0x16f0df788		    *ptr1 = 5		ptr2 = 0x16f0df790	*ptr2 = 1863186656
ptr2 = &b		    a = 5	b = 10		ptr1 = 0x16f0df788		    *ptr1 = 5		ptr2 = 0x16f0df784	*ptr2 = 10
*ptr1 = 7		    a = 7	b = 10		ptr1 = 0x16f0df788		    *ptr1 = 7		ptr2 = 0x16f0df784	*ptr2 = 10
ptr2 = 32		    a = 7	b = 32		ptr1 = 0x16f0df788		    *ptr1 = 7		ptr2 = 0x16f0df784	*ptr2 = 32
a = 17			    a = 17	b = 32		ptr1 = 0x16f0df788		    *ptr1 = 17		ptr2 = 0x16f0df784	*ptr2 = 32
ptr1 = ptr2		    a = 17	b = 32		ptr1 = 0x16f0df784		    *ptr1 = 32		ptr2 = 0x16f0df784	*ptr2 = 32
*ptr1 = 9		    a = 17	b = 9		ptr1 = 0x16f0df784		    *ptr1 = 9		ptr2 = 0x16f0df784	*ptr2 = 9
ptr1 = &a		    a = 17	b = 9		ptr1 = 0x16f0df788		    *ptr1 = 17		ptr2 = 0x16f0df784	*ptr2 = 9
a = 64			    a = 64	b = 9		ptr1 = 0x16f0df788		    *ptr1 = 64		ptr2 = 0x16f0df784	*ptr2 = 9
*ptr1 = *ptr2 + 5	a = 64	b = 69		ptr1 = 0x16f0df788		    *ptr1 = 64		ptr2 = 0x16f0df784	*ptr2 = 69
ptr2 = &a		    a = 64	b = 69		ptr1 = 0x16f0df788		    *ptr1 = 64		ptr2 = 0x16f0df788	*ptr2 = 64

a = 64, b = 69, *ptr1 = 64, *ptr2 = 64
ptr1 = 0x16f0df788, ptr2 = 0x16f0df788
Press any key to continue . . .

*/
