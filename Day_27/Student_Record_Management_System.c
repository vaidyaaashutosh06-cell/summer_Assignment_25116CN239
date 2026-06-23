#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct student s[100];
    int n, i;
    printf("Enter number of students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nstudent %d\n", i + 1);

        printf("Enter Roll Number:");
        scanf("%d", &s[i].roll);
        printf("Enter Name:");
        scanf("%s", s[i].name);
        printf("Enter marks:");
        scanf("%f", &s[i].marks);
    }
    printf("\n--- student Record---\n");
    for (i = 0; i < n; i++)
    {

        printf("\nRoll number:%d", s[i].roll);

        printf("\nName:%s", s[i].name);
        printf("\nMarks:%2f\n", s[i].marks);
    }
    return 0;
}