/* hw15_16 */
#include <stdio.h>
int main(void)
{
	struct computer
	{
		unsigned floppy:3;
		unsigned hard_disk:6;
		unsigned cd_rom:6;
		unsigned printer:5;
	};
	struct computer mine;
	int i;
	
	printf("輸入軟碟數量 : ");
	scanf("%d",&i);
	mine.floppy=i;
	
	printf("輸入硬碟數量 : ");
	scanf("%d",&i);
	mine.hard_disk=i;
	
	printf("輸入光碟機數量 : ");
	scanf("%d",&i);
	mine.cd_rom=i;
	
	printf("輸入印表機數量 : ");
	scanf("%d",&i);
	mine.printer=i;
	
	printf("-------------------電腦設備-------------------\n");
	printf("軟碟數量 : %3d個\n",mine.floppy);
	printf("硬碟數量 : %3d個\n",mine.hard_disk);
	printf("光碟機數量 : %3d個\n",mine.cd_rom);
	printf("印表機數量 : %3d個\n",mine.printer);
	
	system("pause");
	return 0;
}


/*

輸入軟碟數量 : 1
輸入硬碟數量 : 2
輸入光碟機數量 : 1
輸入印表機數量 : 1
-------------------電腦設備-------------------
軟碟數量 :   1個
硬碟數量 :   2個
光碟機數量 :   1個
印表機數量 :   1個
Press any key to continue . . .

*/
