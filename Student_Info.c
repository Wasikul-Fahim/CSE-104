#include <stdio.h>

struct stu_info
{
    char name[40];
    char address[100];
    int marks;

};

int main (void)
{
    int n, i;
    printf("Enter the Numbers of Students : ");
    scanf("%d", &n);
    struct stu_info student[n];

    for(i = 0; i < n; i++)
    {
        printf("\nFor roll number %d\n", i + 1);

        printf("Name : ");
        scanf("%s", &student[i].name);

        printf("Address : ");
        scanf("%s", &student[i].address);

        printf("Marks : ");
        scanf("%d", &student[i].marks);

        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        printf("Student %d\n", i+1);
        printf("Name : %s\nAddress : %s\nMarks : %d\n\n", student[0].name, student[i].address, student[i].marks);
    }




}
