#include <stdio.h>
int main()
{
    int choise;
    float balence = 10000, amount;

    printf("=== ATM Simulation ===\n");
    printf("1. Cheak Balence\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter your choise:");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
        printf("Current Balence =%.2f\n", balence);
        break;
    case 2:
        printf("Enter ammount to deposit:");
        scanf("%f", &amount);
        balence += amount;
        printf("Updated Balence =%.2f\n", balence);
        break;
    case 3:
        printf("Enter amount to withdraw:");
        scanf("%f", &amount);
        if (amount <= balence)
        {
            balence -= amount;
            printf("Updated balence= %.2f\n", balence);
        }
        else
        {
            printf("Insufficient Balence!\n");
        }
        break;
    case 4:
        printf("Thank you for using ATM.\n");

    default:
        printf("Invalid choice!\n");
        break;
    }
    return 0;
}