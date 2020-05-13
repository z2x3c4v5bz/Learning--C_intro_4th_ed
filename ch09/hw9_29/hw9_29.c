/* hw9_29 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char arr[][11]={"C language","C++","Java"};
	int i;
	
	printf("sizeof(arr)=%d\n",sizeof(arr));
	
	for(i=0;i<3;i++)
		printf("arr[%d]=%p\n",i,arr[i]);
	
	for(i=0;i<3;i++)
		printf("arr[%d]=%s\n",i,arr[i]);
	
	system("pause");
	return 0;
} 


/*

sizeof(arr)=33
arr[0]=000000000061FDE0
arr[1]=000000000061FDEB
arr[2]=000000000061FDF6
arr[0]=C language
arr[1]=C++
arr[2]=Java
Press any key to continue . . .

*/
