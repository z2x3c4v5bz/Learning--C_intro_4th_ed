/* hw14_6 */
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int *num = (int *)malloc(sizeof(int));
    int *i = (int *)malloc(sizeof(int));
    double sum = 0;
    struct student
    {
        char name[10];
        int score;
    } *ptr;
    
    printf("Number of student: ");
    scanf("%d", num);
    
    ptr = (struct student *)malloc(*num * sizeof(struct student));
    
    for(*i = 0; *i < *num; (*i)++)
    {
        fflush(stdin);
        printf("name for student %d: ", (*i) + 1);
        gets((ptr + *i)->name);
        printf("score for student %d: ",(*i) + 1);
        scanf("%d", &(ptr + *i)->score);
        sum += (ptr + *i)->score;
    }

    for(*i = 0; *i < *num; (*i)++)
        printf("%s: score=%d\n", (ptr + *i)->name, (ptr + *i)->score);
    
    printf("Average = %.2lf\n", sum / (*num));
    
    free(ptr);
    
    system("pause");
    return 0;

}


/* Output

Number of student: 3
name for student 1: Tom
score for student 1: 50
name for student 2: Catherine
score for student 2: 95
name for student 3: Katherine
score for student 3: 99
Tom: score = 50
Catherine: score = 95
Katherine: score = 99
Average = 81.33
Press any key to continue . . .

*/
