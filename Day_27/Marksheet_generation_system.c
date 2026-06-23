#include <stdio.h>
int main()
{
    char name[50];
    int m1, m2, m3;
    float total, percentage;
    printf("Enter student name:");
    scanf("%s", name);
    printf("Enter marks of 3 subject:");
    scanf("%d%d%d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n--- Marksheet ---\n");
    printf("name: %s\n", name);
    printf("Total Marks: %.0f\n", total);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}