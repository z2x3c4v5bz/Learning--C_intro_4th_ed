/* hw5_12 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float ft;
	
	printf("輸入華氏溫度: ");
	scanf("%f",&ft);
	
	printf("攝氏溫度為: %f\n",(float)5/9*(ft-32));
	
	system("pause");
	
	return 0;
}


/*

輸入華氏溫度: 91.4
攝氏溫度為: 33.000004
Press any key to continue . . .

*/
