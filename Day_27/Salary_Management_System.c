#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basicsalary;
    float hra;
    float da;
    float grosssalary;
};
int main()
{
    struct Employee e;

    printf("Enter Emlployee ID:");
    scanf("%d", &e.id);

    printf("Enter Emlployee name:");
    scanf("%s", &e.name);
    printf("Enter Emlployee basicsalary:");
    scanf("%f", &e.basicsalary);
    e.hra = 0.20 * e.basicsalary;
    e.da = 0.10 * e.basicsalary;
    e.grosssalary = e.basicsalary + e.hra + e.da;
    printf("\n--- salary Details---\n");
    printf("Employee ID:%d\n", e.id);

    printf("Employee Name:%s\n", e.name);

    printf("Basi salary:%.2f\n", e.basicsalary);

    printf("Hra:%.2f\n", e.hra);
    printf("Da:%.2f\n", e.da);

    printf("Gross salary:%.2f\n", e.grosssalary);
    return 0;
}
