#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            printf("Largest prime factor=%d:", i);
            break;
        }
    }
    return 0;
}