/* hw8_11a */
#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i;
	
	for(i = 1; i > 0; i++)
		if(i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
		{
			printf("最少 %d 個。\n", i);
			break;
		}
	
	system("pause");
	return 0;

}


/* Outcome

最少 23 個。
Press any key to continue . . .

*/
