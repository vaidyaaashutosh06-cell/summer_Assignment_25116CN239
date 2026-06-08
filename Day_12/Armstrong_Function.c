#include <stdio.h>
int Armstrong(int n); // Function prototype

int Armstrong(int n)
{
    int  i, x, sum = 0;
    x=n;
    i=n;
    while (i > 0)
    {
        sum = sum + (i % 10) * (i % 10) * (i % 10);
        i = i / 10;
    }
    if (sum == x)
        return 1;
    else
        return 0; // Function Defination
}

int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    if (Armstrong(n))
        printf("Armstrong number");
    else
        printf("Not");
    return 0; // Function call
}