#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee e[100];
    int n, i;
    printf("Enter number of Employees:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee%d\n", i + 1);

        printf("Enter Emlpoyee ID:");
        scanf("%d", &e[i].id);
        printf("Enter Name:");
        scanf("%s", e[i].name);
        printf("Enter salary:");
        scanf("%f", &e[i].salary);
    }
    printf("\n--- Employee Records ---\n");
    for (i = 0; i < n; i++)
    {

        printf("\nEmployee ID :%d", e[i].id);

        printf("\nName:%s", e[i].name);
        printf("\nsalary:%.2f\n", e[i].salary);
    }
    return 0;
}