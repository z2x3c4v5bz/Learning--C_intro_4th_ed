/* hw12_16b(without_buffer) */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

struct data
{
    int MAXIMUM;
    float AVERAGE;
};
struct data calcu(int arr[]);

int main(void){

    int f1;
    int i;
    int arr[10];
    struct data tmp = {0, 0.0};
    
    f1 = open("rand.bin", O_RDONLY|O_BINARY);
    
    if(f1 != -1)
    {
        read(f1, arr, sizeof(arr));
        
        tmp = calcu(arr);
        
        printf("數列為:");
        for(i = 0; i < 10; i++)
            printf("%3d", arr[i]);
        
        printf("\n檔案讀取完成!!\n");
        printf("平均值為 %.2f\n", tmp.AVERAGE);
        printf("最大值為 %d\n", tmp.MAXIMUM);
        
        close(f1);
    }
    else
        printf("檔案開啟失敗!!\n");
    
    system("pause");
    return 0;

}

struct data calcu(int arr[])
{
    int i;
    int max = arr[0];
    int sum = 0;
    struct data tmp;
    
    for(i = 0; i < 10; i++)
    {
        if(max < arr[i])
            max = arr[i];
        sum += arr[i];
    }
    
    tmp.AVERAGE = ((float)sum / 10);
    tmp.MAXIMUM = max;
    
    return tmp;
}


/* Output

數列為: 16  6 15  6 10 15 16  4  2  4
檔案讀取完成!!
平均值為 9.40
最大值為 16
Press any key to continue . . .

*/
