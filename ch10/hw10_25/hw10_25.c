/* hw10_25 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int arr[2][4]={{2,3,4,5},{6,7,8,9}};
	
	printf("(a) arr=%p\n",arr);
	printf("(b) arr[0]=%p\tarr[1]=%p\n",arr[0],arr[1]);
	printf("(c) arr+1=%p\n",arr+1);
	printf("(d) *(arr+0)=%p\t*(arr+1)=%p\n",*(arr+0),*(arr+1));
	printf("(e) *(arr+1)+0=%p\t*(arr+1)+1=%p\t,*(arr+1)+2=%p\t*(arr+1)+3=%p\n",*(arr+1)+0,*(arr+1)+1,*(arr+1)+2,*(arr+1)+3);
	printf("(f) *(*(arr+1)+0)=%d\t*(*(arr+1)+1)=%d\t*(*(arr+1)+2)=%d\t*(*(arr+1)+3)=%d\n",*(*(arr+1)+0),*(*(arr+1)+1),*(*(arr+1)+2),*(*(arr+1)+3));
	
	system("pause");
	return 0;
}
