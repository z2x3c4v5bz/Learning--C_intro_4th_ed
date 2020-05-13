/* hw5_11 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float ct;
	
	printf("輸入攝氏溫度: ");
	scanf("%f",&ct);
	
	printf("華氏溫度為: %f\n",(float)9/5*ct+32);
	
	system("pause");
	
	return 0;
}


/*

輸入攝氏溫度: 33
華氏溫度為: 91.399994
Press any key to continue . . .

*/
