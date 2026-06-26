#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};

struct Employee emp[100];
int n = 0;

void addEmployee();
void displayEmployees();
void searchEmployee();
void deleteEmployee();

int main()
{
    int choice;

    do
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            displayEmployees();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            deleteEmployee();
            break;

        case 5:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}

void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[n].id);

    printf("Enter Employee Name: ");
    scanf("%s", emp[n].name);

    printf("Enter Department: ");
    scanf("%s", emp[n].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[n].salary);

    n++;

    printf("Employee Added Successfully!\n");
}

void displayEmployees()
{
    int i;

    if (n == 0)
    {
        printf("No Employee Records Found!\n");
        return;
    }

    printf("\nID\tName\tDepartment\tSalary\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }
}

void searchEmployee()
{
    int id, i, found = 0;

    printf("Enter Employee ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (emp[i].id == id)
        {
            printf("\nEmployee Found\n");
            printf("ID         : %d\n", emp[i].id);
            printf("Name       : %s\n", emp[i].name);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Employee Not Found!\n");
}

void deleteEmployee()
{
    int id, i, j, found = 0;

    printf("Enter Employee ID to Delete: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (emp[i].id == id)
        {
            for (j = i; j < n - 1; j++)
            {
                emp[j] = emp[j + 1];
            }

            n--;
            found = 1;
            printf("Employee Deleted Successfully!\n");
            break;
        }
    }

    if (found == 0)
        printf("Employee Not Found!\n");
}