/* hw10_6 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int a = 12, b = 7;
    int *ptr;
    
    ptr = &a;
    printf("ptr = &a\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);

    *ptr = 19;
    printf("*ptr = 19\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);

    ptr = &b;
    printf("ptr = &b\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);

    b = 16;
    printf("b = 16\t\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);

    *ptr = 12;
    printf("*ptr = 12\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);

    a = 17;
    printf("a = 17\t\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);

    ptr = &a;
    printf("ptr = &a\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);

    a = b;
    printf("a = b\t\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);

    *ptr = 63;
    printf("*ptr = 63\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n\n", a, b, ptr, *ptr);
    
    printf("a = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    system("pause");
    return 0;

}


/* Outcome

ptr = &a		a = 12	b = 7	ptr = 0x16f8c3788	*ptr = 12
*ptr = 19		a = 19	b = 7	ptr = 0x16f8c3788	*ptr = 19
ptr = &b		a = 19	b = 7	ptr = 0x16f8c3784	*ptr = 7
b = 16			a = 19	b = 16	ptr = 0x16f8c3784	*ptr = 16
*ptr = 12		a = 19	b = 12	ptr = 0x16f8c3784	*ptr = 12
a = 17			a = 17	b = 12	ptr = 0x16f8c3784	*ptr = 12
ptr = &a		a = 17	b = 12	ptr = 0x16f8c3788	*ptr = 17
a = b			a = 12	b = 12	ptr = 0x16f8c3788	*ptr = 12
*ptr = 63		a = 63	b = 12	ptr = 0x16f8c3788	*ptr = 63

a = 63	b = 12	ptr = 0x16f8c3788	*ptr = 63
Press any key to continue . . .

*/
