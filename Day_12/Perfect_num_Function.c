#include <stdio.h>
int perfect(int n); // Function prototype

int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0; // Function Defination
    }
}

int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    if (perfect(n))
    {

        printf("%d is Perfect number\n:", n);
    }
    else
    {

        printf("%d is Not perfect number\n :", n);
    }
    return 0; // Function call
}
