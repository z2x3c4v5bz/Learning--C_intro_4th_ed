/* hw9_16 */
#include <stdio.h>
#include <stdlib.h>

void RGB(int);
void unchanged(int arr[][4][5]);

int main(void)
{
	int pixel[3][4][5]={	{{247,67,32,187,240},{122,41,21,16,154},{52,35,79,21,93},{27,22,35,154,75}},
							{{14,145,132,25,40},{212,221,121,54,14},{132,235,178,19,14},{122,122,133,54,47}},
							{{17,44,32,127,240},{22,231,21,156,124},{32,35,78,21,194},{127,22,33,54,45}}};
	int i,j,k;
	
	puts("(a)");
	for(i=0;i<3;i++)
	{
		RGB(i);
		for(j=0;j<4;j++)
		{
			for(k=0;k<5;k++)
				printf("%3d ",pixel[i][j][k]);
			puts("");
		}
		puts("");
	}
	
	puts("(b)(r+30)");
	for(i=0;i<3;i++)
	{
		RGB(i);
		for(j=0;j<4;j++)
		{
			for(k=0;k<5;k++)
			{
				if(i==0)
				{
					pixel[i][j][k]+=30;
					if(pixel[i][j][k]>255)
						pixel[i][j][k]=255;
				}
				printf("%3d ",pixel[i][j][k]);
			}
			puts("");
		}
		puts("");
	}
	
	unchanged(pixel);
	
	puts("(c)(g-30)");
	for(i=0;i<3;i++)
	{
		RGB(i);
		for(j=0;j<4;j++)
		{
			for(k=0;k<5;k++)
			{
				if(i==1)
				{
					pixel[i][j][k]-=30;
					if(pixel[i][j][k]<0)
						pixel[i][j][k]=0;
				}
				printf("%3d ",pixel[i][j][k]);
			}
			puts("");
		}
		puts("");
	}
	
	system("pause");
	return 0;
}

void RGB(int n)
{
	switch(n)
	{
		case 0:
			puts("<Red>");
			break;
		case 1:
			puts("<Green>");
			break;
		case 2:
			puts("<Blue>");
			break;
	}
}

void unchanged(int arr[][4][5])
{
	int old_arr[3][4][5]={	{{247,67,32,187,240},{122,41,21,16,154},{52,35,79,21,93},{27,22,35,154,75}},
							{{14,145,132,25,40},{212,221,121,54,14},{132,235,178,19,14},{122,122,133,54,47}},
							{{17,44,32,127,240},{22,231,21,156,124},{32,35,78,21,194},{127,22,33,54,45}}};
	
	int i,j,k;
	
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			for(k=0;k<5;k++)
				arr[i][j][k]=old_arr[i][j][k];
}
