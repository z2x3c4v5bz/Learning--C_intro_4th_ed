/* hw3_17 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("sizeof(578) = %d\n",sizeof(578));
	printf("sizeof(784000000) = %d\n",sizeof(784000000));
	printf("sizeof(6.78f) = %d\n",sizeof(6.78f));
	printf("sizeof(718.26) = %d\n",sizeof(718.26));
	printf("sizeof(6.42e127) =%d\n",sizeof(6.42e127));
	
	system("pause");
	return 0;
}


/*

sizeof(578) = 4
sizeof(784000000) = 4
sizeof(6.78f) = 4
sizeof(718.26) = 8
sizeof(6.42e127) =8
Press any key to continue . . .

*/
