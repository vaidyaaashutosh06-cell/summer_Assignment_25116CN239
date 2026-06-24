#include <stdio.h>

struct bank
{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    struct bank b[100];
    int n, i;
    printf("Enter number of accounts:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter Account number:");
        scanf("%d", &b[i].accNo);
        printf("Enter Account Holder name:");
        scanf("%s", &b[i].name);
        printf("Enter balance::");
        scanf("%f", &b[i].balance);
    }
    printf("\n----- Bank account Details -----\n");
    for (i = 0; i < n; i++)
    {
        printf("\n Account Number:%d", b[i].accNo);
        printf("\n Account Holder:%s", b[i].name);
        printf("\n Balance: %.2f\n", b[i].balance);
    }
    return 0;
}
