#include <stdio.h>
#include <string.h>

struct Contact
{
    int id;
    char name[50];
    long long mobile;
};
int main()
{
    struct Contact c[100];
    int n, i;
    printf("Enter number of contacts:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter contact ID:");
        scanf("%d", &c[i].id);
        printf("Enter contact Name:");
        scanf("%s", &c[i].name);
        printf("Enter mobile number:");
        scanf("%d", &c[i].mobile);
    }
    printf("\n----- Contact details -----\n");
    for (i = 0; i < n; i++)
    {
        printf("\n Contact id:%d", c[i].id);
        printf("\n contact name:%s", c[i].name);
        printf("\n mobile number: %d\n", c[i].mobile);
    }
    return 0;
}
